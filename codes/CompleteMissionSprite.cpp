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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *ObjectList_object; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__49237568; // x19

  if ( (byte_4B14F6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, assetData, name);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    this = (CompleteMissionSprite_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B14F6B = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__49237568,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__49237568 )
LABEL_12:
    sub_1BCAA3C(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__49237568,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitBtn(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_4B14F65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, v6, v7);
    sub_1BCA7E0(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, v8, v9);
    byte_4B14F65 = 1;
  }
  v10 = sub_1BCAA2C(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = eventId;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v22, 1, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitFrame(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_4B14F66 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, v6, v7);
    sub_1BCA7E0(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, v8, v9);
    byte_4B14F66 = 1;
  }
  v10 = sub_1BCAA2C(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = eventId;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v22, 1, v23);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x4

  if ( (byte_4B14F67 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, listBgSprite);
    sub_1BCA7E0(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, v9, v10);
    sub_1BCA7E0(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, v11, v12);
    byte_4B14F67 = 1;
  }
  v13 = sub_1BCAA2C(
          CompleteMissionSprite___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&eventId,
          listBgSprite,
          *(_QWORD *)&panelCount);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = panelCount;
  *(_QWORD *)(v13 + 40) = listBgSprite;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)listBgSprite, v22, v23, v24, v25, v26, v27);
  v28 = *(_DWORD *)(v13 + 16);
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v28, v32, 1, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitTarget(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x4

  if ( (byte_4B14F68 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_CompleteMissionSprite__InitTarget_b__15_0__, v6, v7);
    byte_4B14F68 = 1;
  }
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CompleteMissionSprite__InitTarget_b__15_0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v8, 1, v9);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  AssetData_o *eventUIAssetData; // x0
  long double v20; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x23
  System_Delegate_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Action_c *v29; // x1
  Il2CppObject *v30; // x0
  System_String_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14F69 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&AssetManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_CompleteMissionSprite_LoadEventUIEnd__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v17, v18);
    byte_4B14F69 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v22 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v22 )
  {
    v29 = System_Action_TypeInfo;
    if ( (System_Action_c *)v22->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v22, (System_Action_c *)v22->klass != v29) )
    {
      v20 = sub_1BCACFC(v22);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v20);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc,
    (int64_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v38 = eventId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v31 = System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v30, 0LL);
    v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
    AssetLoader_LoadEndDataHandler___ctor(v35, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
    if ( !AssetManager__loadAssetStorage(v31, v35, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v37);
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
  Il2CppObject *v12; // x0
  CompleteMissionSprite_o *v13; // x0
  const MethodInfo *v14; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PartyOrganizationUtility_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v23; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B14F6A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, assetData, method);
    sub_1BCA7E0(&StringLiteral_5454/*"DownloadEventUIAtlas{0}01"*/, v10, v11);
    byte_4B14F6A = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUIAssetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventId = this->fields.eventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v13 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5454/*"DownloadEventUIAtlas{0}01"*/, v12, 0LL);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v13,
                             assetData,
                             (System_String_o *)v13,
                             v14);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas,
      (int64_t)UIAtlasFromAssetData,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc;
  v23 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1BCA784(p_eventUILoadCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v23->fields.m_target)(
      v23->fields.original_method_info,
      *(_QWORD *)&v23->fields.extra_arg);
  }
}


void __fastcall CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  AssetData_o *eventUIAssetData; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B14F6C & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v11, v12);
    byte_4B14F6C = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v15 = System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v13, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
    AssetManager__releaseAssetStorage(v15, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAsset_38505704(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v17, v18, v19, v20, v21, v22);
}


bool __fastcall CompleteMissionSprite__SetEventUI(
        CompleteMissionSprite_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  v4 = spriteName;
  if ( (byte_4B14F6D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, spriteName);
    byte_4B14F6D = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(v4, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, v4, 0LL);
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
          v4 = 0LL;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1BCAA3C(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  v4 = 0LL;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, v4, 0LL);
  return v10;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B14F6E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20818/*"img_txt_target_panel"*/, method, v2);
    byte_4B14F6E = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20818/*"img_txt_target_panel"*/, v3);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14F6F & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionSprite___c_TypeInfo, v1, v2);
    byte_4B14F6F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CompleteMissionSprite___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CompleteMissionSprite___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x1
  __int64 v5; // x2
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B14F70 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1BCA7E0(&StringLiteral_17837/*"button_mission_{0}"*/, v4, v5);
    byte_4B14F70 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v3->fields.eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v9 = System_String__Format((System_String_o *)StringLiteral_17837/*"button_mission_{0}"*/, v8, 0LL);
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
  CompleteMissionSprite___c__DisplayClass13_0_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B14F71 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1BCA7E0(&StringLiteral_20522/*"img_flame_{0}"*/, v4, v5);
    byte_4B14F71 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v3->fields.eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v9 = System_String__Format((System_String_o *)StringLiteral_20522/*"img_flame_{0}"*/, v8, 0LL);
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
  CompleteMissionSprite___c__DisplayClass14_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t v22; // w20
  void *monitor; // x8
  Il2CppObject *Component_object; // x21
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x3
  CompleteMissionSprite_o *v28; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  Il2CppObject *Instance; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  AvalonSceneManager_c *v37; // x8
  CommonUI_o *v38; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v40; // x20
  Il2CppObject *klass; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v50; // [xsp+Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_4B14F72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__, v12, v13);
    sub_1BCA7E0(&CompleteMissionSprite___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_21701/*"mission_bg_{0}"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_21713/*"mission_on_{0}"*/, v18, v19);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1BCA7E0(&StringLiteral_19472/*"event_tab_type5_0"*/, v20, v21);
    byte_4B14F72 = 1;
  }
  if ( v3->fields.panelCount >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                v22,
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
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v3->fields.__4__this;
      v50 = v22 + 100 * v3->fields.eventId + 1;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21713/*"mission_on_{0}"*/,
                                                                v26,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v22;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_object,
                                                                (System_String_o *)this,
                                                                v27);
      if ( v22 >= v3->fields.panelCount )
        goto LABEL_12;
    }
LABEL_25:
    sub_1BCAA3C(this, method);
  }
LABEL_12:
  v28 = v3->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  sprite = v28->fields.sprite;
  eventId = v3->fields.eventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v31 = System_String__Format((System_String_o *)StringLiteral_21701/*"mission_bg_{0}"*/, v30, 0LL);
  CompleteMissionSprite__SetEventUI(v28, sprite, v31, v32);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v3->fields.listBgSprite,
    (System_String_o *)StringLiteral_19472/*"event_tab_type5_0"*/,
    v33);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = AvalonSceneManager_TypeInfo;
  v38 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
    v37 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
  if ( !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  v40 = (System_Action_o *)this[3].fields.listBgSprite->monitor;
  if ( !v40 )
  {
    if ( !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[3].fields.listBgSprite->klass;
    v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v35, v36);
    System_Action___ctor(v40, klass, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v40;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__14_1, (int64_t)v40, v43, v44, v45, v46, v47, v48);
  }
  if ( !v38 )
    goto LABEL_25;
  CommonUI__maskFadein(v38, DEFAULT_FADE_TIME, v40, 0LL);
}