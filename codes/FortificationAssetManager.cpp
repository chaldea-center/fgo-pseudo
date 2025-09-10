void FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  struct System_String_array *v7; // x20

  if ( (byte_4C216C3 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_6259/*"EventUI/Prefabs/"*/);
    byte_4C216C3 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v4, v5, v6);
  *(_QWORD *)(v3 + 32) = StringLiteral_6259/*"EventUI/Prefabs/"*/;
  sub_1C2D434(v3 + 32);
  this->fields.loadAssetNames = v7;
  sub_1C2D434(&this->fields.loadAssetNames);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4C216C0 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_1C2D490(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_4C216C0 = 1;
  }
  v7 = sub_1C2D6DC(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C2D434(v7 + 16),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C2D434(v7 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C2D6EC(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C2D6F4(v8, v9, v10, v11);
  v13 = loadAssetNames->m_Items[0];
  v14 = System_Int32__ToString((int)v7 + 24, 0);
  v15 = System_String__Concat_63457864(v13, v14, 0);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v16, 1, 0);
}


UnityEngine_Texture2D_o *FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_4C216C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C216C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v10);
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
  if ( (byte_4C216C2 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C216C2 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40385248(eventId, 0);
  this->fields._fortificationCamera_k__BackingField = 0;
  sub_1C2D434(&this->fields);
  this->fields._autoFortificationButton_k__BackingField = 0;
  sub_1C2D434(&this->fields._autoFortificationButton_k__BackingField);
  this->fields._organizationPanel_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationPanel_k__BackingField);
  this->fields._organizationBgTex_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationBgTex_k__BackingField);
  this->fields._organizationBgTex2_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationBgTex2_k__BackingField);
  this->fields._organizationBgTex3_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationBgTex3_k__BackingField);
  this->fields._organizationBgTex4_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationBgTex4_k__BackingField);
  this->fields._organizationBgTex5_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationBgTex5_k__BackingField);
  this->fields._organizationSlotBgTex_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationSlotBgTex_k__BackingField);
  this->fields._organizationSlotBgTex2_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationSlotBgTex2_k__BackingField);
  this->fields._organizationSlotBgTex3_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationSlotBgTex3_k__BackingField);
  this->fields._organizationSlotBgTex4_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationSlotBgTex4_k__BackingField);
  this->fields._organizationSlotBgTex5_k__BackingField = 0;
  sub_1C2D434(&this->fields._organizationSlotBgTex5_k__BackingField);
  this->fields._eventFortificationWorkObj_k__BackingField = 0;
  sub_1C2D434(&this->fields._eventFortificationWorkObj_k__BackingField);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0;
  sub_1C2D434(&this->fields._eventFortificationWorkMiniObj_k__BackingField);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0;
  sub_1C2D434(&this->fields._eventFortificationListViewPanel_k__BackingField);
  this->fields._fortificationConfirmDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields._fortificationConfirmDialog_k__BackingField);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields._fortificationAutomaticDialog_k__BackingField);
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
  sub_1C2D434(&this->fields._autoFortificationButton_k__BackingField);
}


void FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1C2D434(&this->fields._eventFortificationListViewPanel_k__BackingField);
}


void FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1C2D434(&this->fields._eventFortificationWorkMiniObj_k__BackingField);
}


void FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1C2D434(&this->fields._eventFortificationWorkObj_k__BackingField);
}


void FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1C2D434(&this->fields._fortificationAutomaticDialog_k__BackingField);
}


void FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationCamera_k__BackingField = value;
  sub_1C2D434(&this->fields);
}


void FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1C2D434(&this->fields._fortificationConfirmDialog_k__BackingField);
}


void FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationBgTex_k__BackingField);
}


void FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationBgTex2_k__BackingField);
}


void FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationBgTex3_k__BackingField);
}


void FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationBgTex4_k__BackingField);
}


void FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationBgTex5_k__BackingField);
}


void FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._organizationPanel_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationPanel_k__BackingField);
}


void FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationSlotBgTex_k__BackingField);
}


void FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationSlotBgTex2_k__BackingField);
}


void FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationSlotBgTex3_k__BackingField);
}


void FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationSlotBgTex4_k__BackingField);
}


void FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1C2D434(&this->fields._organizationSlotBgTex5_k__BackingField);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  struct FortificationAssetManager_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  struct FortificationAssetManager_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  struct FortificationAssetManager_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  struct FortificationAssetManager_o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  struct FortificationAssetManager_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  struct FortificationAssetManager_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  struct FortificationAssetManager_o *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  struct FortificationAssetManager_o *v56; // x21
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  struct FortificationAssetManager_o *v62; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  struct FortificationAssetManager_o *v68; // x21
  struct FortificationAssetManager_o *v69; // x21
  struct FortificationAssetManager_o *v70; // x21
  struct FortificationAssetManager_o *v71; // x21
  struct FortificationAssetManager_o *v72; // x21
  System_Action_o *_9__1; // x21
  int32_t v74; // w20
  int32_t v75; // [xsp+8h] [xbp-68h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v77; // [xsp+10h] [xbp-60h] BYREF
  int32_t v78; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v79; // [xsp+18h] [xbp-58h] BYREF
  int32_t v80; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v81; // [xsp+20h] [xbp-50h] BYREF
  int32_t v82; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v83; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C216C4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_1C2D490(&StringLiteral_19149/*"event_bg_little_{0}01"*/);
    sub_1C2D490(&StringLiteral_19157/*"event_bg_{0}04"*/);
    sub_1C2D490(&StringLiteral_19152/*"event_bg_little_{0}04"*/);
    sub_1C2D490(&StringLiteral_19150/*"event_bg_little_{0}02"*/);
    sub_1C2D490(&StringLiteral_19151/*"event_bg_little_{0}03"*/);
    sub_1C2D490(&StringLiteral_6211/*"EventFortificationListViewPanel"*/);
    sub_1C2D490(&StringLiteral_6834/*"FortificationWork"*/);
    sub_1C2D490(&StringLiteral_19155/*"event_bg_{0}02"*/);
    sub_1C2D490(&StringLiteral_6835/*"FortificationWorkMini"*/);
    sub_1C2D490(&StringLiteral_19156/*"event_bg_{0}03"*/);
    sub_1C2D490(&StringLiteral_19154/*"event_bg_{0}01"*/);
    sub_1C2D490(&StringLiteral_19158/*"event_bg_{0}05"*/);
    sub_1C2D490(&StringLiteral_6830/*"FortificationConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_6828/*"FortificationAutomaticDialog"*/);
    sub_1C2D490(&StringLiteral_19153/*"event_bg_little_{0}05"*/);
    sub_1C2D490(&StringLiteral_6829/*"FortificationCamera"*/);
    sub_1C2D490(&StringLiteral_6832/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C2D490(&StringLiteral_2486/*"AutoFortificationButton"*/);
    byte_4C216C4 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6829/*"FortificationCamera"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&_4__this->fields);
  v6 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2486/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v6 )
    goto LABEL_28;
  v6->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v6->fields._autoFortificationButton_k__BackingField);
  v7 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6832/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v7 )
    goto LABEL_28;
  v7->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v7->fields._organizationPanel_k__BackingField);
  v8 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_19154/*"event_bg_{0}01"*/, v12, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v13,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v8 )
    goto LABEL_28;
  v8->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v8->fields._organizationBgTex_k__BackingField);
  v14 = v4->fields.__4__this;
  v83 = v4->fields.eventId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v15, v16, v17);
  v19 = System_String__Format((System_String_o *)StringLiteral_19155/*"event_bg_{0}02"*/, v18, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v19,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v14 )
    goto LABEL_28;
  v14->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v14->fields._organizationBgTex2_k__BackingField);
  v20 = v4->fields.__4__this;
  v82 = v4->fields.eventId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v21, v22, v23);
  v25 = System_String__Format((System_String_o *)StringLiteral_19156/*"event_bg_{0}03"*/, v24, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v25,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v20 )
    goto LABEL_28;
  v20->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v20->fields._organizationBgTex3_k__BackingField);
  v26 = v4->fields.__4__this;
  v81 = v4->fields.eventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v27, v28, v29);
  v31 = System_String__Format((System_String_o *)StringLiteral_19157/*"event_bg_{0}04"*/, v30, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v31,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v26 )
    goto LABEL_28;
  v26->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v26->fields._organizationBgTex4_k__BackingField);
  v32 = v4->fields.__4__this;
  v80 = v4->fields.eventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v33, v34, v35);
  v37 = System_String__Format((System_String_o *)StringLiteral_19158/*"event_bg_{0}05"*/, v36, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v37,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v32 )
    goto LABEL_28;
  v32->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v32->fields._organizationBgTex5_k__BackingField);
  v38 = v4->fields.__4__this;
  v79 = v4->fields.eventId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v39, v40, v41);
  v43 = System_String__Format((System_String_o *)StringLiteral_19149/*"event_bg_little_{0}01"*/, v42, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v43,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v38 )
    goto LABEL_28;
  v38->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v38->fields._organizationSlotBgTex_k__BackingField);
  v44 = v4->fields.__4__this;
  v78 = v4->fields.eventId;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v45, v46, v47);
  v49 = System_String__Format((System_String_o *)StringLiteral_19150/*"event_bg_little_{0}02"*/, v48, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v49,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v44 )
    goto LABEL_28;
  v44->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v44->fields._organizationSlotBgTex2_k__BackingField);
  v50 = v4->fields.__4__this;
  v77 = v4->fields.eventId;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v51, v52, v53);
  v55 = System_String__Format((System_String_o *)StringLiteral_19151/*"event_bg_little_{0}03"*/, v54, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v55,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v50 )
    goto LABEL_28;
  v50->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v50->fields._organizationSlotBgTex3_k__BackingField);
  v56 = v4->fields.__4__this;
  v76 = v4->fields.eventId;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v57, v58, v59);
  v61 = System_String__Format((System_String_o *)StringLiteral_19152/*"event_bg_little_{0}04"*/, v60, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v61,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v56 )
    goto LABEL_28;
  v56->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v56->fields._organizationSlotBgTex4_k__BackingField);
  v62 = v4->fields.__4__this;
  v75 = v4->fields.eventId;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v63, v64, v65);
  v67 = System_String__Format((System_String_o *)StringLiteral_19153/*"event_bg_little_{0}05"*/, v66, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                v67,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v62 )
    goto LABEL_28;
  v62->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C2D434(&v62->fields._organizationSlotBgTex5_k__BackingField);
  v68 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6834/*"FortificationWork"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v68 )
    goto LABEL_28;
  v68->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v68->fields._eventFortificationWorkObj_k__BackingField);
  v69 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6835/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v69 )
    goto LABEL_28;
  v69->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v69->fields._eventFortificationWorkMiniObj_k__BackingField);
  v70 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6211/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v70 )
    goto LABEL_28;
  v70->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v70->fields._eventFortificationListViewPanel_k__BackingField);
  v71 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6830/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v71
    || (v71->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C2D434(&v71->fields._fortificationConfirmDialog_k__BackingField),
        v72 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51051712(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6828/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080),
        !v72)
    || (v72->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C2D434(&v72->fields._fortificationAutomaticDialog_k__BackingField),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1C2D6EC(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v74 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C2D434(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40385076(v74, _9__1, 1, 0);
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