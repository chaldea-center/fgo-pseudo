void FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_String_array *v4; // x20
  __int64 v5; // x1

  if ( (byte_4C31D92 & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_6267/*"EventUI/Prefabs/"*/);
    byte_4C31D92 = 1;
  }
  v3 = sub_1C32CC8(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C32E7C(0);
  v4 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C32E84(v3);
  v5 = StringLiteral_6267/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6267/*"EventUI/Prefabs/"*/;
  sub_1C32BC4(v3 + 32, v5);
  this->fields.loadAssetNames = v4;
  sub_1C32BC4(&this->fields.loadAssetNames, v4);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortificationAssetManager__AssertionCheck(FortificationAssetManager_o *this, const MethodInfo *method)
{
  ;
}


void FortificationAssetManager__GetAssets(
        FortificationAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4C31D8F & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_1C32C20(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_4C31D8F = 1;
  }
  v7 = sub_1C32E6C(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C32BC4(v7 + 16, this),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C32BC4(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C32E7C(v8);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C32E84(v8);
  v10 = loadAssetNames->m_Items[0];
  v11 = System_Int32__ToString((int)v7 + 24, 0);
  v12 = System_String__Concat_63518544(v10, v11, 0);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v7,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, v13, 1, 0);
}


UnityEngine_Texture2D_o *FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_4C31D90 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31D90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  switch ( EventRewardBgMaster__GetEventRewardSlotBgId((EventRewardBgMaster_o *)Instance, eventId, slot, 0) )
  {
    case 8040002:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex2_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex2_k__BackingField;
      break;
    case 8040003:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex3_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex3_k__BackingField;
      break;
    case 8040004:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex4_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex4_k__BackingField;
      break;
    case 8040005:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex5_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex5_k__BackingField;
      break;
    default:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex_k__BackingField;
      break;
  }
  return *p_organizationSlotBgTex2_k__BackingField;
}


void FortificationAssetManager__Release(FortificationAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C31D91 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C31D91 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40507476(eventId, 0);
  this->fields._fortificationCamera_k__BackingField = 0;
  sub_1C32BC4(&this->fields, 0);
  this->fields._autoFortificationButton_k__BackingField = 0;
  sub_1C32BC4(&this->fields._autoFortificationButton_k__BackingField, 0);
  this->fields._organizationPanel_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationPanel_k__BackingField, 0);
  this->fields._organizationBgTex_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationBgTex_k__BackingField, 0);
  this->fields._organizationBgTex2_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationBgTex2_k__BackingField, 0);
  this->fields._organizationBgTex3_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationBgTex3_k__BackingField, 0);
  this->fields._organizationBgTex4_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationBgTex4_k__BackingField, 0);
  this->fields._organizationBgTex5_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationBgTex5_k__BackingField, 0);
  this->fields._organizationSlotBgTex_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationSlotBgTex_k__BackingField, 0);
  this->fields._organizationSlotBgTex2_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationSlotBgTex2_k__BackingField, 0);
  this->fields._organizationSlotBgTex3_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationSlotBgTex3_k__BackingField, 0);
  this->fields._organizationSlotBgTex4_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationSlotBgTex4_k__BackingField, 0);
  this->fields._organizationSlotBgTex5_k__BackingField = 0;
  sub_1C32BC4(&this->fields._organizationSlotBgTex5_k__BackingField, 0);
  this->fields._eventFortificationWorkObj_k__BackingField = 0;
  sub_1C32BC4(&this->fields._eventFortificationWorkObj_k__BackingField, 0);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0;
  sub_1C32BC4(&this->fields._eventFortificationWorkMiniObj_k__BackingField, 0);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0;
  sub_1C32BC4(&this->fields._eventFortificationListViewPanel_k__BackingField, 0);
  this->fields._fortificationConfirmDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._fortificationConfirmDialog_k__BackingField, 0);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._fortificationAutomaticDialog_k__BackingField, 0);
}


UnityEngine_GameObject_o *FortificationAssetManager__get_autoFortificationButton(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._autoFortificationButton_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationListViewPanel_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationWorkMiniObj_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationWorkObj_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationAutomaticDialog_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_fortificationCamera(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationCamera_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationConfirmDialog_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationBgTex(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationBgTex2(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex2_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationBgTex3(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex3_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationBgTex4(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex4_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationBgTex5(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex5_k__BackingField;
}


UnityEngine_GameObject_o *FortificationAssetManager__get_organizationPanel(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationPanel_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex2_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex3_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex4_k__BackingField;
}


UnityEngine_Texture2D_o *FortificationAssetManager__get_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex5_k__BackingField;
}


void FortificationAssetManager__set_autoFortificationButton(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._autoFortificationButton_k__BackingField = value;
  sub_1C32BC4(&this->fields._autoFortificationButton_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1C32BC4(&this->fields._eventFortificationListViewPanel_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1C32BC4(&this->fields._eventFortificationWorkMiniObj_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1C32BC4(&this->fields._eventFortificationWorkObj_k__BackingField, value);
}


void FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._fortificationAutomaticDialog_k__BackingField, value);
}


void FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationCamera_k__BackingField = value;
  sub_1C32BC4(&this->fields, value);
}


void FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._fortificationConfirmDialog_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationBgTex_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationBgTex2_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationBgTex3_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationBgTex4_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationBgTex5_k__BackingField, value);
}


void FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._organizationPanel_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationPanel_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationSlotBgTex_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationSlotBgTex2_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationSlotBgTex3_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationSlotBgTex4_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1C32BC4(&this->fields._organizationSlotBgTex5_k__BackingField, value);
}


void FortificationAssetManager___c__DisplayClass73_0___ctor(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortificationAssetManager___c__DisplayClass73_0___GetAssets_b__0(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  FortificationAssetManager___c__DisplayClass73_0_o *v4; // x19
  struct FortificationAssetManager_o *_4__this; // x21
  struct FortificationAssetManager_o *v6; // x21
  struct FortificationAssetManager_o *v7; // x21
  struct FortificationAssetManager_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  struct FortificationAssetManager_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  struct FortificationAssetManager_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  struct FortificationAssetManager_o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  struct FortificationAssetManager_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  struct FortificationAssetManager_o *v53; // x21
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  struct FortificationAssetManager_o *v62; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  struct FortificationAssetManager_o *v71; // x21
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  struct FortificationAssetManager_o *v80; // x21
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x5
  __int64 v85; // x6
  __int64 v86; // x7
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  struct FortificationAssetManager_o *v89; // x21
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  __int64 v93; // x5
  __int64 v94; // x6
  __int64 v95; // x7
  Il2CppObject *v96; // x0
  System_String_o *v97; // x0
  struct FortificationAssetManager_o *v98; // x21
  struct FortificationAssetManager_o *v99; // x21
  struct FortificationAssetManager_o *v100; // x21
  struct FortificationAssetManager_o *v101; // x21
  struct FortificationAssetManager_o *v102; // x21
  System_Action_o *_9__1; // x21
  int32_t v104; // w20
  int32_t v105; // [xsp+8h] [xbp-68h] BYREF
  int32_t v106; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v107; // [xsp+10h] [xbp-60h] BYREF
  int32_t v108; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v109; // [xsp+18h] [xbp-58h] BYREF
  int32_t v110; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v111; // [xsp+20h] [xbp-50h] BYREF
  int32_t v112; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v113; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C31D93 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_1C32C20(&StringLiteral_19160/*"event_bg_little_{0}01"*/);
    sub_1C32C20(&StringLiteral_19168/*"event_bg_{0}04"*/);
    sub_1C32C20(&StringLiteral_19163/*"event_bg_little_{0}04"*/);
    sub_1C32C20(&StringLiteral_19161/*"event_bg_little_{0}02"*/);
    sub_1C32C20(&StringLiteral_19162/*"event_bg_little_{0}03"*/);
    sub_1C32C20(&StringLiteral_6219/*"EventFortificationListViewPanel"*/);
    sub_1C32C20(&StringLiteral_6839/*"FortificationWork"*/);
    sub_1C32C20(&StringLiteral_19166/*"event_bg_{0}02"*/);
    sub_1C32C20(&StringLiteral_6840/*"FortificationWorkMini"*/);
    sub_1C32C20(&StringLiteral_19167/*"event_bg_{0}03"*/);
    sub_1C32C20(&StringLiteral_19165/*"event_bg_{0}01"*/);
    sub_1C32C20(&StringLiteral_19169/*"event_bg_{0}05"*/);
    sub_1C32C20(&StringLiteral_6835/*"FortificationConfirmDialog"*/);
    sub_1C32C20(&StringLiteral_6833/*"FortificationAutomaticDialog"*/);
    sub_1C32C20(&StringLiteral_19164/*"event_bg_little_{0}05"*/);
    sub_1C32C20(&StringLiteral_6834/*"FortificationCamera"*/);
    sub_1C32C20(&StringLiteral_6837/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C32C20(&StringLiteral_2489/*"AutoFortificationButton"*/);
    byte_4C31D93 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6834/*"FortificationCamera"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2489/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v6 )
    goto LABEL_28;
  v6->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v6->fields._autoFortificationButton_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6837/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v7 )
    goto LABEL_28;
  v7->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v7->fields._organizationPanel_k__BackingField, this);
  v8 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v9, v10, v11, v12, v13, v14);
  v16 = System_String__Format((System_String_o *)StringLiteral_19165/*"event_bg_{0}01"*/, v15, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v16,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v8 )
    goto LABEL_28;
  v8->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v8->fields._organizationBgTex_k__BackingField, this);
  v17 = v4->fields.__4__this;
  v113 = v4->fields.eventId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113, v18, v19, v20, v21, v22, v23);
  v25 = System_String__Format((System_String_o *)StringLiteral_19166/*"event_bg_{0}02"*/, v24, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v25,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v17 )
    goto LABEL_28;
  v17->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v17->fields._organizationBgTex2_k__BackingField, this);
  v26 = v4->fields.__4__this;
  v112 = v4->fields.eventId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112, v27, v28, v29, v30, v31, v32);
  v34 = System_String__Format((System_String_o *)StringLiteral_19167/*"event_bg_{0}03"*/, v33, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v34,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v26 )
    goto LABEL_28;
  v26->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v26->fields._organizationBgTex3_k__BackingField, this);
  v35 = v4->fields.__4__this;
  v111 = v4->fields.eventId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111, v36, v37, v38, v39, v40, v41);
  v43 = System_String__Format((System_String_o *)StringLiteral_19168/*"event_bg_{0}04"*/, v42, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v43,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v35 )
    goto LABEL_28;
  v35->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v35->fields._organizationBgTex4_k__BackingField, this);
  v44 = v4->fields.__4__this;
  v110 = v4->fields.eventId;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v45, v46, v47, v48, v49, v50);
  v52 = System_String__Format((System_String_o *)StringLiteral_19169/*"event_bg_{0}05"*/, v51, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v52,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v44 )
    goto LABEL_28;
  v44->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v44->fields._organizationBgTex5_k__BackingField, this);
  v53 = v4->fields.__4__this;
  v109 = v4->fields.eventId;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v54, v55, v56, v57, v58, v59);
  v61 = System_String__Format((System_String_o *)StringLiteral_19160/*"event_bg_little_{0}01"*/, v60, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v61,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v53 )
    goto LABEL_28;
  v53->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v53->fields._organizationSlotBgTex_k__BackingField, this);
  v62 = v4->fields.__4__this;
  v108 = v4->fields.eventId;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v63, v64, v65, v66, v67, v68);
  v70 = System_String__Format((System_String_o *)StringLiteral_19161/*"event_bg_little_{0}02"*/, v69, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v70,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v62 )
    goto LABEL_28;
  v62->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v62->fields._organizationSlotBgTex2_k__BackingField, this);
  v71 = v4->fields.__4__this;
  v107 = v4->fields.eventId;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v72, v73, v74, v75, v76, v77);
  v79 = System_String__Format((System_String_o *)StringLiteral_19162/*"event_bg_little_{0}03"*/, v78, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v79,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v71 )
    goto LABEL_28;
  v71->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v71->fields._organizationSlotBgTex3_k__BackingField, this);
  v80 = v4->fields.__4__this;
  v106 = v4->fields.eventId;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106, v81, v82, v83, v84, v85, v86);
  v88 = System_String__Format((System_String_o *)StringLiteral_19163/*"event_bg_little_{0}04"*/, v87, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v88,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v80 )
    goto LABEL_28;
  v80->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v80->fields._organizationSlotBgTex4_k__BackingField, this);
  v89 = v4->fields.__4__this;
  v105 = v4->fields.eventId;
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105, v90, v91, v92, v93, v94, v95);
  v97 = System_String__Format((System_String_o *)StringLiteral_19164/*"event_bg_little_{0}05"*/, v96, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                v97,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v89 )
    goto LABEL_28;
  v89->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C32BC4(&v89->fields._organizationSlotBgTex5_k__BackingField, this);
  v98 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6839/*"FortificationWork"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v98 )
    goto LABEL_28;
  v98->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v98->fields._eventFortificationWorkObj_k__BackingField, this);
  v99 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6840/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v99 )
    goto LABEL_28;
  v99->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v99->fields._eventFortificationWorkMiniObj_k__BackingField, this);
  v100 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6219/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v100 )
    goto LABEL_28;
  v100->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v100->fields._eventFortificationListViewPanel_k__BackingField, this);
  v101 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6835/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v101
    || (v101->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C32BC4(&v101->fields._fortificationConfirmDialog_k__BackingField, this),
        v102 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51111776(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6833/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392),
        !v102)
    || (v102->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C32BC4(
                                                                      &v102->fields._fortificationAutomaticDialog_k__BackingField,
                                                                      this),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1C32E7C(this);
  }
  _9__1 = v4->fields.__9__1;
  v104 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C32BC4(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40507304(v104, _9__1, 1, 0);
}


void FortificationAssetManager___c__DisplayClass73_0___GetAssets_b__1(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}