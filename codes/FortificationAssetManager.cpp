void FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_String_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_4CB0644 & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_6258/*"EventUI/Prefabs/"*/);
    byte_4CB0644 = 1;
  }
  v3 = sub_1C6BAB0(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C6BC60(0, v4);
  v5 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C6BC68(v3);
  v6 = StringLiteral_6258/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6258/*"EventUI/Prefabs/"*/;
  sub_1C6B9AC(v3 + 32, v6);
  this->fields.loadAssetNames = v5;
  sub_1C6B9AC(&this->fields.loadAssetNames, v5);
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
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4CB0641 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_1C6BA08(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_4CB0641 = 1;
  }
  v7 = sub_1C6BC54(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C6B9AC(v7 + 16, this),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C6B9AC(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C6BC60(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C6BC68(v8);
  v11 = loadAssetNames->m_Items[0];
  v12 = System_Int32__ToString((int)v7 + 24, 0);
  v13 = System_String__Concat_63966792(v11, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0);
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

  if ( (byte_4CB0642 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB0642 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v10);
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
  if ( (byte_4CB0643 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB0643 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40837680(eventId, 0);
  this->fields._fortificationCamera_k__BackingField = 0;
  sub_1C6B9AC(&this->fields, 0);
  this->fields._autoFortificationButton_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._autoFortificationButton_k__BackingField, 0);
  this->fields._organizationPanel_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationPanel_k__BackingField, 0);
  this->fields._organizationBgTex_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationBgTex_k__BackingField, 0);
  this->fields._organizationBgTex2_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationBgTex2_k__BackingField, 0);
  this->fields._organizationBgTex3_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationBgTex3_k__BackingField, 0);
  this->fields._organizationBgTex4_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationBgTex4_k__BackingField, 0);
  this->fields._organizationBgTex5_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationBgTex5_k__BackingField, 0);
  this->fields._organizationSlotBgTex_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex_k__BackingField, 0);
  this->fields._organizationSlotBgTex2_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex2_k__BackingField, 0);
  this->fields._organizationSlotBgTex3_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex3_k__BackingField, 0);
  this->fields._organizationSlotBgTex4_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex4_k__BackingField, 0);
  this->fields._organizationSlotBgTex5_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex5_k__BackingField, 0);
  this->fields._eventFortificationWorkObj_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._eventFortificationWorkObj_k__BackingField, 0);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._eventFortificationWorkMiniObj_k__BackingField, 0);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._eventFortificationListViewPanel_k__BackingField, 0);
  this->fields._fortificationConfirmDialog_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._fortificationConfirmDialog_k__BackingField, 0);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0;
  sub_1C6B9AC(&this->fields._fortificationAutomaticDialog_k__BackingField, 0);
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
  sub_1C6B9AC(&this->fields._autoFortificationButton_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1C6B9AC(&this->fields._eventFortificationListViewPanel_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1C6B9AC(&this->fields._eventFortificationWorkMiniObj_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1C6B9AC(&this->fields._eventFortificationWorkObj_k__BackingField, value);
}


void FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1C6B9AC(&this->fields._fortificationAutomaticDialog_k__BackingField, value);
}


void FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationCamera_k__BackingField = value;
  sub_1C6B9AC(&this->fields, value);
}


void FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1C6B9AC(&this->fields._fortificationConfirmDialog_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationBgTex_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationBgTex2_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationBgTex3_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationBgTex4_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationBgTex5_k__BackingField, value);
}


void FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._organizationPanel_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationPanel_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex2_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex3_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex4_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1C6B9AC(&this->fields._organizationSlotBgTex5_k__BackingField, value);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  struct FortificationAssetManager_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  struct FortificationAssetManager_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  struct FortificationAssetManager_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  struct FortificationAssetManager_o *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  struct FortificationAssetManager_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  struct FortificationAssetManager_o *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  struct FortificationAssetManager_o *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  struct FortificationAssetManager_o *v32; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  struct FortificationAssetManager_o *v35; // x21
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  struct FortificationAssetManager_o *v38; // x21
  struct FortificationAssetManager_o *v39; // x21
  struct FortificationAssetManager_o *v40; // x21
  struct FortificationAssetManager_o *v41; // x21
  struct FortificationAssetManager_o *v42; // x21
  System_Action_o *_9__1; // x21
  int32_t v44; // w20
  int32_t v45; // [xsp+8h] [xbp-68h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v47; // [xsp+10h] [xbp-60h] BYREF
  int32_t v48; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v49; // [xsp+18h] [xbp-58h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v51; // [xsp+20h] [xbp-50h] BYREF
  int32_t v52; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v53; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CB0645 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_1C6BA08(&StringLiteral_19212/*"event_bg_little_{0}01"*/);
    sub_1C6BA08(&StringLiteral_19220/*"event_bg_{0}04"*/);
    sub_1C6BA08(&StringLiteral_19215/*"event_bg_little_{0}04"*/);
    sub_1C6BA08(&StringLiteral_19213/*"event_bg_little_{0}02"*/);
    sub_1C6BA08(&StringLiteral_19214/*"event_bg_little_{0}03"*/);
    sub_1C6BA08(&StringLiteral_6210/*"EventFortificationListViewPanel"*/);
    sub_1C6BA08(&StringLiteral_6833/*"FortificationWork"*/);
    sub_1C6BA08(&StringLiteral_19218/*"event_bg_{0}02"*/);
    sub_1C6BA08(&StringLiteral_6834/*"FortificationWorkMini"*/);
    sub_1C6BA08(&StringLiteral_19219/*"event_bg_{0}03"*/);
    sub_1C6BA08(&StringLiteral_19217/*"event_bg_{0}01"*/);
    sub_1C6BA08(&StringLiteral_19221/*"event_bg_{0}05"*/);
    sub_1C6BA08(&StringLiteral_6829/*"FortificationConfirmDialog"*/);
    sub_1C6BA08(&StringLiteral_6827/*"FortificationAutomaticDialog"*/);
    sub_1C6BA08(&StringLiteral_19216/*"event_bg_little_{0}05"*/);
    sub_1C6BA08(&StringLiteral_6828/*"FortificationCamera"*/);
    sub_1C6BA08(&StringLiteral_6831/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C6BA08(&StringLiteral_2481/*"AutoFortificationButton"*/);
    byte_4CB0645 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6828/*"FortificationCamera"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C6B9AC(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2481/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !v6 )
    goto LABEL_28;
  v6->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C6B9AC(&v6->fields._autoFortificationButton_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6831/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !v7 )
    goto LABEL_28;
  v7->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C6B9AC(&v7->fields._organizationPanel_k__BackingField, this);
  v8 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v10 = System_String__Format((System_String_o *)StringLiteral_19217/*"event_bg_{0}01"*/, v9, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v10,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v8 )
    goto LABEL_28;
  v8->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v8->fields._organizationBgTex_k__BackingField, this);
  v11 = v4->fields.__4__this;
  v53 = v4->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v13 = System_String__Format((System_String_o *)StringLiteral_19218/*"event_bg_{0}02"*/, v12, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v13,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v11 )
    goto LABEL_28;
  v11->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v11->fields._organizationBgTex2_k__BackingField, this);
  v14 = v4->fields.__4__this;
  v52 = v4->fields.eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v16 = System_String__Format((System_String_o *)StringLiteral_19219/*"event_bg_{0}03"*/, v15, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v16,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v14 )
    goto LABEL_28;
  v14->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v14->fields._organizationBgTex3_k__BackingField, this);
  v17 = v4->fields.__4__this;
  v51 = v4->fields.eventId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v19 = System_String__Format((System_String_o *)StringLiteral_19220/*"event_bg_{0}04"*/, v18, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v19,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v17 )
    goto LABEL_28;
  v17->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v17->fields._organizationBgTex4_k__BackingField, this);
  v20 = v4->fields.__4__this;
  v50 = v4->fields.eventId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v22 = System_String__Format((System_String_o *)StringLiteral_19221/*"event_bg_{0}05"*/, v21, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v22,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v20 )
    goto LABEL_28;
  v20->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v20->fields._organizationBgTex5_k__BackingField, this);
  v23 = v4->fields.__4__this;
  v49 = v4->fields.eventId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v25 = System_String__Format((System_String_o *)StringLiteral_19212/*"event_bg_little_{0}01"*/, v24, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v25,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v23 )
    goto LABEL_28;
  v23->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v23->fields._organizationSlotBgTex_k__BackingField, this);
  v26 = v4->fields.__4__this;
  v48 = v4->fields.eventId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v28 = System_String__Format((System_String_o *)StringLiteral_19213/*"event_bg_little_{0}02"*/, v27, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v28,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v26 )
    goto LABEL_28;
  v26->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v26->fields._organizationSlotBgTex2_k__BackingField, this);
  v29 = v4->fields.__4__this;
  v47 = v4->fields.eventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v31 = System_String__Format((System_String_o *)StringLiteral_19214/*"event_bg_little_{0}03"*/, v30, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v31,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v29 )
    goto LABEL_28;
  v29->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v29->fields._organizationSlotBgTex3_k__BackingField, this);
  v32 = v4->fields.__4__this;
  v46 = v4->fields.eventId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v34 = System_String__Format((System_String_o *)StringLiteral_19215/*"event_bg_little_{0}04"*/, v33, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v34,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v32 )
    goto LABEL_28;
  v32->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v32->fields._organizationSlotBgTex4_k__BackingField, this);
  v35 = v4->fields.__4__this;
  v45 = v4->fields.eventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v37 = System_String__Format((System_String_o *)StringLiteral_19216/*"event_bg_little_{0}05"*/, v36, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                v37,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v35 )
    goto LABEL_28;
  v35->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C6B9AC(&v35->fields._organizationSlotBgTex5_k__BackingField, this);
  v38 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6833/*"FortificationWork"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !v38 )
    goto LABEL_28;
  v38->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C6B9AC(&v38->fields._eventFortificationWorkObj_k__BackingField, this);
  v39 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6834/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !v39 )
    goto LABEL_28;
  v39->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C6B9AC(&v39->fields._eventFortificationWorkMiniObj_k__BackingField, this);
  v40 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6210/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !v40 )
    goto LABEL_28;
  v40->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C6B9AC(&v40->fields._eventFortificationListViewPanel_k__BackingField, this);
  v41 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6829/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !v41
    || (v41->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C6B9AC(&v41->fields._fortificationConfirmDialog_k__BackingField, this),
        v42 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51495936(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6827/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200),
        !v42)
    || (v42->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C6B9AC(
                                                                      &v42->fields._fortificationAutomaticDialog_k__BackingField,
                                                                      this),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1C6BC60(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v44 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C6B9AC(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40837508(v44, _9__1, 1, 0);
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