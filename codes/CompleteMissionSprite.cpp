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
  System_Object_array *ObjectList_object; // x0
  Il2CppObject *Object_object__48635516; // x19

  if ( (byte_4A59FF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObjectList_GameObject___);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionSprite_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FF2 = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2E62034 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__48635516,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__48635516 )
LABEL_12:
    sub_1B8880C(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__48635516,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void __fastcall CompleteMissionSprite__InitBtn(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4A59FEC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__);
    sub_1B885B0(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
    byte_4A59FEC = 1;
  }
  v5 = sub_1B887FC(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = eventId;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v10, 1, v11);
}


void __fastcall CompleteMissionSprite__InitFrame(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4A59FED & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__);
    sub_1B885B0(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
    byte_4A59FED = 1;
  }
  v5 = sub_1B887FC(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = eventId;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v10, 1, v11);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4A59FEE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__);
    sub_1B885B0(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
    byte_4A59FEE = 1;
  }
  v9 = sub_1B887FC(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 32) = panelCount;
  *(_QWORD *)(v9 + 40) = listBgSprite;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)listBgSprite, v14, v15);
  v16 = *(_DWORD *)(v9 + 16);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v16, v17, 1, v18);
}


void __fastcall CompleteMissionSprite__InitTarget(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4A59FEF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionSprite__InitTarget_b__15_0__);
    byte_4A59FEF = 1;
  }
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  AssetData_o *eventUIAssetData; // x0
  long double v10; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x23
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_c *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x21
  AssetLoader_LoadEndDataHandler_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59FF0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionSprite_LoadEventUIEnd__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    byte_4A59FF0 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v12 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v12 )
  {
    v15 = System_Action_TypeInfo;
    if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v12, (System_Action_c *)v12->klass != v15) )
    {
      v10 = sub_1B88ACC(v12);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v10);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v12, v13, v14);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v23 = eventId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v16, v17, v18);
    v20 = System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v19, 0LL);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v20, v21, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v22);
    }
  }
}


void __fastcall CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  CompleteMissionSprite_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v16; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A59FF1 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_5379/*"DownloadEventUIAtlas{0}01"*/);
    byte_4A59FF1 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (int32_t)method,
      v3);
    eventId = this->fields.eventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v6, v7, v8);
    v10 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5379/*"DownloadEventUIAtlas{0}01"*/, v9, 0LL);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)v10,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v13,
      v14);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc;
  v16 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1B88554(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v16->fields.m_target)(
      v16->fields.original_method_info,
      *(_QWORD *)&v16->fields.extra_arg);
  }
}


void __fastcall CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  AssetData_o *eventUIAssetData; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A59FF3 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    byte_4A59FF3 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
    v7 = System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v7, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37790656(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v9, v10);
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

  if ( (byte_4A59FF4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FF4 = 1;
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
      sub_1B8880C(IsNullOrEmpty, v8);
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

  if ( (byte_4A59FF5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20595/*"img_txt_target_panel"*/);
    byte_4A59FF5 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20595/*"img_txt_target_panel"*/, v2);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59FF6 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionSprite___c_TypeInfo);
    byte_4A59FF6 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CompleteMissionSprite___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4A59FF7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1B885B0(&StringLiteral_17659/*"button_mission_{0}"*/);
    byte_4A59FF7 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v5->fields.eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_17659/*"button_mission_{0}"*/, v8, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v9, v10);
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
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4A59FF8 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1B885B0(&StringLiteral_20303/*"img_flame_{0}"*/);
    byte_4A59FF8 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v5->fields.eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_20303/*"img_flame_{0}"*/, v8, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v9, v10);
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
  int32_t v6; // w20
  __int64 v7; // x8
  Il2CppObject *Component_object; // x21
  CompleteMissionSprite_o *_4__this; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x3
  CompleteMissionSprite_o *v15; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_4A59FF9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__);
    sub_1B885B0(&CompleteMissionSprite___c_TypeInfo);
    sub_1B885B0(&StringLiteral_21469/*"mission_bg_{0}"*/);
    sub_1B885B0(&StringLiteral_21481/*"mission_on_{0}"*/);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1B885B0(&StringLiteral_19271/*"event_tab_type5_0"*/);
    byte_4A59FF9 = 1;
  }
  if ( v5->fields.panelCount >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      v7 = *(_QWORD *)&this[28].fields.panelCount;
      if ( !v7 )
        break;
      this = *(CompleteMissionSprite___c__DisplayClass14_0_o **)(v7 + 32);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                v6,
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
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v5->fields.__4__this;
      v31 = v6 + 100 * v5->fields.eventId + 1;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v10, v11, v12);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21481/*"mission_on_{0}"*/,
                                                                v13,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v6;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_object,
                                                                (System_String_o *)this,
                                                                v14);
      if ( v6 >= v5->fields.panelCount )
        goto LABEL_12;
    }
LABEL_25:
    sub_1B8880C(this, method);
  }
LABEL_12:
  v15 = v5->fields.__4__this;
  if ( !v15 )
    goto LABEL_25;
  sprite = v15->fields.sprite;
  eventId = v5->fields.eventId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v18 = System_String__Format((System_String_o *)StringLiteral_21469/*"mission_bg_{0}"*/, v17, 0LL);
  CompleteMissionSprite__SetEventUI(v15, sprite, v18, v19);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v5->fields.listBgSprite,
    (System_String_o *)StringLiteral_19271/*"event_tab_type5_0"*/,
    v20);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
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
    monitor = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)monitor, v28, v29);
  }
  if ( !v23 )
    goto LABEL_25;
  CommonUI__maskFadein(v23, DEFAULT_FADE_TIME, monitor, 0LL);
}