void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  struct System_String_array *v8; // x20

  if ( (byte_4AFC509 & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, method);
    sub_1BC3008(&StringLiteral_6213/*"EventUI/Prefabs/"*/, v3);
    byte_4AFC509 = 1;
  }
  v4 = sub_1BC30B0(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BC3264(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BC326C(v4, v5, v6, v7);
  *(_QWORD *)(v4 + 32) = StringLiteral_6213/*"EventUI/Prefabs/"*/;
  sub_1BC2FAC(v4 + 32);
  this->fields.loadAssetNames = v8;
  sub_1BC2FAC(&this->fields.loadAssetNames);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAssetManager__AssertionCheck(FortificationAssetManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAssetManager__GetAssets(
        FortificationAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4AFC506 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BC3008(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v8);
    sub_1BC3008(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v9);
    byte_4AFC506 = 1;
  }
  v10 = sub_1BC3254(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BC2FAC(v10 + 16),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        v11 = sub_1BC2FAC(v10 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BC3264(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BC326C(v11, v12, v13, v14);
  v16 = loadAssetNames->m_Items[0];
  v17 = System_Int32__ToString((int)v10 + 24, 0LL);
  v18 = System_String__Concat_62348648(v16, v17, 0LL);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v10,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v18, v19, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_4AFC507 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventRewardBgMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AFC507 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v11);
  }
  switch ( EventRewardBgMaster__GetEventRewardSlotBgId((EventRewardBgMaster_o *)Instance, eventId, slot, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAssetManager__Release(
        FortificationAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4AFC508 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AFC508 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39643424(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._autoFortificationButton_k__BackingField);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationPanel_k__BackingField);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationBgTex_k__BackingField);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationBgTex2_k__BackingField);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationBgTex3_k__BackingField);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationBgTex4_k__BackingField);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationBgTex5_k__BackingField);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex_k__BackingField);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex2_k__BackingField);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex3_k__BackingField);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex4_k__BackingField);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex5_k__BackingField);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._eventFortificationWorkObj_k__BackingField);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._eventFortificationWorkMiniObj_k__BackingField);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._eventFortificationListViewPanel_k__BackingField);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._fortificationConfirmDialog_k__BackingField);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._fortificationAutomaticDialog_k__BackingField);
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_autoFortificationButton(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._autoFortificationButton_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationListViewPanel_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationWorkMiniObj_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationWorkObj_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationAutomaticDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_fortificationCamera(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationCamera_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationConfirmDialog_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex2(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex2_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex3(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex3_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex4(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex4_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex5(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex5_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_organizationPanel(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationPanel_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex2_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex3_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex4_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex5_k__BackingField;
}


void __fastcall FortificationAssetManager__set_autoFortificationButton(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._autoFortificationButton_k__BackingField = value;
  sub_1BC2FAC(&this->fields._autoFortificationButton_k__BackingField);
}


void __fastcall FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1BC2FAC(&this->fields._eventFortificationListViewPanel_k__BackingField);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1BC2FAC(&this->fields._eventFortificationWorkMiniObj_k__BackingField);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1BC2FAC(&this->fields._eventFortificationWorkObj_k__BackingField);
}


void __fastcall FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1BC2FAC(&this->fields._fortificationAutomaticDialog_k__BackingField);
}


void __fastcall FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationCamera_k__BackingField = value;
  sub_1BC2FAC(&this->fields);
}


void __fastcall FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1BC2FAC(&this->fields._fortificationConfirmDialog_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationBgTex_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationBgTex2_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationBgTex3_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationBgTex4_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationBgTex5_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._organizationPanel_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationPanel_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex2_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex3_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex4_k__BackingField);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1BC2FAC(&this->fields._organizationSlotBgTex5_k__BackingField);
}


void __fastcall FortificationAssetManager___c__DisplayClass73_0___ctor(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAssetManager___c__DisplayClass73_0___GetAssets_b__0(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  FortificationAssetManager___c__DisplayClass73_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  struct FortificationAssetManager_o *_4__this; // x21
  struct FortificationAssetManager_o *v29; // x21
  struct FortificationAssetManager_o *v30; // x21
  struct FortificationAssetManager_o *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  struct FortificationAssetManager_o *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  struct FortificationAssetManager_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  struct FortificationAssetManager_o *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  struct FortificationAssetManager_o *v55; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  struct FortificationAssetManager_o *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  struct FortificationAssetManager_o *v67; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  struct FortificationAssetManager_o *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  struct FortificationAssetManager_o *v79; // x21
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  struct FortificationAssetManager_o *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  struct FortificationAssetManager_o *v91; // x21
  struct FortificationAssetManager_o *v92; // x21
  struct FortificationAssetManager_o *v93; // x21
  struct FortificationAssetManager_o *v94; // x21
  struct FortificationAssetManager_o *v95; // x21
  System_Action_o *_9__1; // x21
  int32_t v97; // w20
  int32_t v98; // [xsp+8h] [xbp-68h] BYREF
  int32_t v99; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v100; // [xsp+10h] [xbp-60h] BYREF
  int32_t v101; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v102; // [xsp+18h] [xbp-58h] BYREF
  int32_t v103; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v104; // [xsp+20h] [xbp-50h] BYREF
  int32_t v105; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v106; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4AFC50A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, assetData);
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, v5);
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, v6);
    sub_1BC3008(&AtlasManager_TypeInfo, v7);
    sub_1BC3008(&int_TypeInfo, v8);
    sub_1BC3008(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v9);
    sub_1BC3008(&StringLiteral_18979/*"event_bg_little_{0}01"*/, v10);
    sub_1BC3008(&StringLiteral_18987/*"event_bg_{0}04"*/, v11);
    sub_1BC3008(&StringLiteral_18982/*"event_bg_little_{0}04"*/, v12);
    sub_1BC3008(&StringLiteral_18980/*"event_bg_little_{0}02"*/, v13);
    sub_1BC3008(&StringLiteral_18981/*"event_bg_little_{0}03"*/, v14);
    sub_1BC3008(&StringLiteral_6164/*"EventFortificationListViewPanel"*/, v15);
    sub_1BC3008(&StringLiteral_6782/*"FortificationWork"*/, v16);
    sub_1BC3008(&StringLiteral_18985/*"event_bg_{0}02"*/, v17);
    sub_1BC3008(&StringLiteral_6783/*"FortificationWorkMini"*/, v18);
    sub_1BC3008(&StringLiteral_18986/*"event_bg_{0}03"*/, v19);
    sub_1BC3008(&StringLiteral_18984/*"event_bg_{0}01"*/, v20);
    sub_1BC3008(&StringLiteral_18988/*"event_bg_{0}05"*/, v21);
    sub_1BC3008(&StringLiteral_6778/*"FortificationConfirmDialog"*/, v22);
    sub_1BC3008(&StringLiteral_6776/*"FortificationAutomaticDialog"*/, v23);
    sub_1BC3008(&StringLiteral_18983/*"event_bg_little_{0}05"*/, v24);
    sub_1BC3008(&StringLiteral_6777/*"FortificationCamera"*/, v25);
    sub_1BC3008(&StringLiteral_6780/*"FortificationOrganizationPanel"*/, v26);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1BC3008(&StringLiteral_2472/*"AutoFortificationButton"*/, v27);
    byte_4AFC50A = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6777/*"FortificationCamera"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BC2FAC(&_4__this->fields);
  v29 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2472/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !v29 )
    goto LABEL_28;
  v29->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BC2FAC(&v29->fields._autoFortificationButton_k__BackingField);
  v30 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6780/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !v30 )
    goto LABEL_28;
  v30->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BC2FAC(&v30->fields._organizationPanel_k__BackingField);
  v31 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v32, v33, v34);
  v36 = System_String__Format((System_String_o *)StringLiteral_18984/*"event_bg_{0}01"*/, v35, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v36,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v31 )
    goto LABEL_28;
  v31->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v31->fields._organizationBgTex_k__BackingField);
  v37 = v4->fields.__4__this;
  v106 = v4->fields.eventId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106, v38, v39, v40);
  v42 = System_String__Format((System_String_o *)StringLiteral_18985/*"event_bg_{0}02"*/, v41, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v42,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v37 )
    goto LABEL_28;
  v37->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v37->fields._organizationBgTex2_k__BackingField);
  v43 = v4->fields.__4__this;
  v105 = v4->fields.eventId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105, v44, v45, v46);
  v48 = System_String__Format((System_String_o *)StringLiteral_18986/*"event_bg_{0}03"*/, v47, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v48,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v43 )
    goto LABEL_28;
  v43->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v43->fields._organizationBgTex3_k__BackingField);
  v49 = v4->fields.__4__this;
  v104 = v4->fields.eventId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v50, v51, v52);
  v54 = System_String__Format((System_String_o *)StringLiteral_18987/*"event_bg_{0}04"*/, v53, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v54,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v49 )
    goto LABEL_28;
  v49->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v49->fields._organizationBgTex4_k__BackingField);
  v55 = v4->fields.__4__this;
  v103 = v4->fields.eventId;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103, v56, v57, v58);
  v60 = System_String__Format((System_String_o *)StringLiteral_18988/*"event_bg_{0}05"*/, v59, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v60,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v55 )
    goto LABEL_28;
  v55->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v55->fields._organizationBgTex5_k__BackingField);
  v61 = v4->fields.__4__this;
  v102 = v4->fields.eventId;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v62, v63, v64);
  v66 = System_String__Format((System_String_o *)StringLiteral_18979/*"event_bg_little_{0}01"*/, v65, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v66,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v61 )
    goto LABEL_28;
  v61->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v61->fields._organizationSlotBgTex_k__BackingField);
  v67 = v4->fields.__4__this;
  v101 = v4->fields.eventId;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v68, v69, v70);
  v72 = System_String__Format((System_String_o *)StringLiteral_18980/*"event_bg_little_{0}02"*/, v71, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v72,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v67 )
    goto LABEL_28;
  v67->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v67->fields._organizationSlotBgTex2_k__BackingField);
  v73 = v4->fields.__4__this;
  v100 = v4->fields.eventId;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v74, v75, v76);
  v78 = System_String__Format((System_String_o *)StringLiteral_18981/*"event_bg_little_{0}03"*/, v77, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v78,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v73 )
    goto LABEL_28;
  v73->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v73->fields._organizationSlotBgTex3_k__BackingField);
  v79 = v4->fields.__4__this;
  v99 = v4->fields.eventId;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v80, v81, v82);
  v84 = System_String__Format((System_String_o *)StringLiteral_18982/*"event_bg_little_{0}04"*/, v83, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v84,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v79 )
    goto LABEL_28;
  v79->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v79->fields._organizationSlotBgTex4_k__BackingField);
  v85 = v4->fields.__4__this;
  v98 = v4->fields.eventId;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v86, v87, v88);
  v90 = System_String__Format((System_String_o *)StringLiteral_18983/*"event_bg_little_{0}05"*/, v89, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                v90,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v85 )
    goto LABEL_28;
  v85->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BC2FAC(&v85->fields._organizationSlotBgTex5_k__BackingField);
  v91 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6782/*"FortificationWork"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !v91 )
    goto LABEL_28;
  v91->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BC2FAC(&v91->fields._eventFortificationWorkObj_k__BackingField);
  v92 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6783/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !v92 )
    goto LABEL_28;
  v92->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BC2FAC(&v92->fields._eventFortificationWorkMiniObj_k__BackingField);
  v93 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6164/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !v93 )
    goto LABEL_28;
  v93->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BC2FAC(&v93->fields._eventFortificationListViewPanel_k__BackingField);
  v94 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6778/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !v94
    || (v94->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BC2FAC(&v94->fields._fortificationConfirmDialog_k__BackingField),
        v95 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50213776(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6776/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672),
        !v95)
    || (v95->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1BC2FAC(&v95->fields._fortificationAutomaticDialog_k__BackingField),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1BC3264(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v97 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BC2FAC(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39643260(v97, _9__1, 1, 0LL);
}


void __fastcall FortificationAssetManager___c__DisplayClass73_0___GetAssets_b__1(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}