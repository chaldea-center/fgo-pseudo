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
  Il2CppObject *Object_object__49747248; // x19

  if ( (byte_4BB340A & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    this = (CompleteMissionSprite_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    byte_4BB340A = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2F716E8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  Object_object__49747248 = AssetData__GetObject_object__49747248(
                              assetData,
                              name,
                              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__49747248,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__49747248 )
LABEL_12:
    sub_1C13F80(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__49747248,
                        (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_4BB3404 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, v5);
    sub_1C13D24(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, v6);
    byte_4BB3404 = 1;
  }
  v7 = sub_1C13F70(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C13F80(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  v16 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_4BB3405 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, v5);
    sub_1C13D24(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, v6);
    byte_4BB3405 = 1;
  }
  v7 = sub_1C13F70(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C13F80(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  v16 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w20
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x4

  if ( (byte_4BB3406 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, v9);
    sub_1C13D24(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, v10);
    byte_4BB3406 = 1;
  }
  v11 = sub_1C13F70(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C13F80(v12, v13);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 32) = panelCount;
  *(_QWORD *)(v11 + 40) = listBgSprite;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)listBgSprite, v20, v21, v22, v23, v24, v25);
  v26 = *(_DWORD *)(v11 + 16);
  v27 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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

  if ( (byte_4BB3407 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_CompleteMissionSprite__InitTarget_b__15_0__, v5);
    byte_4BB3407 = 1;
  }
  v6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_c *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x21
  AssetLoader_LoadEndDataHandler_o *v30; // x22
  const MethodInfo *v31; // x2
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB3408 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&AssetManager_TypeInfo, v9);
    sub_1C13D24(&Method_CompleteMissionSprite_LoadEventUIEnd__, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_6389/*"EventUI/Prefabs/80381"*/, v13);
    byte_4BB3408 = 1;
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
    v24 = System_Action_TypeInfo;
    if ( (System_Action_c *)v17->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v17, (System_Action_c *)v17->klass != v24) )
    {
      v15 = sub_1C14240(v17);
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v32 = eventId;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v25, v26, v27);
    v29 = System_String__Format((System_String_o *)StringLiteral_6389/*"EventUI/Prefabs/80381"*/, v28, 0LL);
    v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v29, v30, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v31);
    }
  }
}


void __fastcall CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  CompleteMissionSprite_o *v15; // x0
  const MethodInfo *v16; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  PartyOrganizationUtility_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v25; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB3409 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, assetData);
    sub_1C13D24(&StringLiteral_5478/*"DownloadEquipFaceAtlas"*/, v10);
    byte_4BB3409 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.eventUIAssetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventId = this->fields.eventId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v11, v12, v13);
    v15 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5478/*"DownloadEquipFaceAtlas"*/, v14, 0LL);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v15,
                             assetData,
                             (System_String_o *)v15,
                             v16);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas,
      (int64_t)UIAtlasFromAssetData,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc;
  v25 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1C13CC8(p_eventUILoadCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v25->fields.m_target)(
      v25->fields.original_method_info,
      *(_QWORD *)&v25->fields.extra_arg);
  }
}


void __fastcall CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  AssetData_o *eventUIAssetData; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB340B & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    sub_1C13D24(&int_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6389/*"EventUI/Prefabs/80381"*/, v10);
    byte_4BB340B = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
    v12 = System_String__Format((System_String_o *)StringLiteral_6389/*"EventUI/Prefabs/80381"*/, v11, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v12, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_38935320(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BB340C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, sprite);
    byte_4BB340C = 1;
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
      sub_1C13F80(IsNullOrEmpty, v8);
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

  if ( (byte_4BB340D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20936/*"img_txt_servantcoin_title"*/, method);
    byte_4BB340D = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20936/*"img_txt_servantcoin_title"*/, v2);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB340E & 1) == 0 )
  {
    sub_1C13D24(&CompleteMissionSprite___c_TypeInfo, v1);
    byte_4BB340E = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)CompleteMissionSprite___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4BB340F & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1C13D24(&StringLiteral_17929/*"button"*/, v6);
    byte_4BB340F = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v5->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_17929/*"button"*/, v9, 0LL);
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
  if ( (byte_4BB3410 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1C13D24(&StringLiteral_20638/*"img_commonbg"*/, v6);
    byte_4BB3410 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v5->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_20638/*"img_commonbg"*/, v9, 0LL);
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
  void *monitor; // x8
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
  System_Action_o *v34; // x20
  Il2CppObject *klass; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v44; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_4BB3411 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v6);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UISprite___, v7);
    sub_1C13D24(&int_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C13D24(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__, v10);
    sub_1C13D24(&CompleteMissionSprite___c_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_21823/*"missing EncryptedContentInfo.ContentEncryptionAlgorithmIdentifier"*/, v12);
    sub_1C13D24(&StringLiteral_21835/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v13);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1C13D24(&StringLiteral_19574/*"event_superboss_hp_icon_0"*/, v14);
    byte_4BB3411 = 1;
  }
  if ( v5->fields.panelCount >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      monitor = this[28].monitor;
      if ( !monitor )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)*((_QWORD *)monitor + 4);
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
                           (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v5->fields.__4__this;
      v44 = v15 + 100 * v5->fields.eventId + 1;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v19, v20, v21);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21835/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/,
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
    sub_1C13F80(this, method);
  }
LABEL_12:
  v24 = v5->fields.__4__this;
  if ( !v24 )
    goto LABEL_25;
  sprite = v24->fields.sprite;
  eventId = v5->fields.eventId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v27 = System_String__Format((System_String_o *)StringLiteral_21823/*"missing EncryptedContentInfo.ContentEncryptionAlgorithmIdentifier"*/, v26, 0LL);
  CompleteMissionSprite__SetEventUI(v24, sprite, v27, v28);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v5->fields.listBgSprite,
    (System_String_o *)StringLiteral_19574/*"event_superboss_hp_icon_0"*/,
    v29);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v34 = (System_Action_o *)this[3].fields.listBgSprite->monitor;
  if ( !v34 )
  {
    if ( !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[3].fields.listBgSprite->klass;
    v34 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v34, klass, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__14_1, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v32 )
    goto LABEL_25;
  CommonUI__maskFadein(v32, DEFAULT_FADE_TIME, v34, 0LL);
}