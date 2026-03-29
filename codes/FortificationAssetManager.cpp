void FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_String_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_4D2ABD0 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_6299/*"EventUI/Prefabs/"*/);
    byte_4D2ABD0 = 1;
  }
  v3 = sub_1C93B7C(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v5 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C93D34(v3);
  v6 = StringLiteral_6299/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6299/*"EventUI/Prefabs/"*/;
  sub_1C93A78(v3 + 32, v6);
  this->fields.loadAssetNames = v5;
  sub_1C93A78(&this->fields.loadAssetNames, v5);
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

  if ( (byte_4D2ABCD & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_1C93AD4(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_4D2ABCD = 1;
  }
  v7 = sub_1C93D20(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C93A78(v7 + 16, this),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C93A78(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C93D2C(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C93D34(v8);
  v11 = loadAssetNames->m_Items[0];
  v12 = System_Int32__ToString((int)v7 + 24, 0);
  v13 = System_String__Concat_64425724(v11, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4D2ABCE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2ABCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v10);
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
  if ( (byte_4D2ABCF & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    byte_4D2ABCF = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_41320228(eventId, 0);
  this->fields._fortificationCamera_k__BackingField = 0;
  sub_1C93A78(&this->fields, 0);
  this->fields._autoFortificationButton_k__BackingField = 0;
  sub_1C93A78(&this->fields._autoFortificationButton_k__BackingField, 0);
  this->fields._organizationPanel_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationPanel_k__BackingField, 0);
  this->fields._organizationBgTex_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationBgTex_k__BackingField, 0);
  this->fields._organizationBgTex2_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationBgTex2_k__BackingField, 0);
  this->fields._organizationBgTex3_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationBgTex3_k__BackingField, 0);
  this->fields._organizationBgTex4_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationBgTex4_k__BackingField, 0);
  this->fields._organizationBgTex5_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationBgTex5_k__BackingField, 0);
  this->fields._organizationSlotBgTex_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationSlotBgTex_k__BackingField, 0);
  this->fields._organizationSlotBgTex2_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationSlotBgTex2_k__BackingField, 0);
  this->fields._organizationSlotBgTex3_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationSlotBgTex3_k__BackingField, 0);
  this->fields._organizationSlotBgTex4_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationSlotBgTex4_k__BackingField, 0);
  this->fields._organizationSlotBgTex5_k__BackingField = 0;
  sub_1C93A78(&this->fields._organizationSlotBgTex5_k__BackingField, 0);
  this->fields._eventFortificationWorkObj_k__BackingField = 0;
  sub_1C93A78(&this->fields._eventFortificationWorkObj_k__BackingField, 0);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0;
  sub_1C93A78(&this->fields._eventFortificationWorkMiniObj_k__BackingField, 0);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0;
  sub_1C93A78(&this->fields._eventFortificationListViewPanel_k__BackingField, 0);
  this->fields._fortificationConfirmDialog_k__BackingField = 0;
  sub_1C93A78(&this->fields._fortificationConfirmDialog_k__BackingField, 0);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0;
  sub_1C93A78(&this->fields._fortificationAutomaticDialog_k__BackingField, 0);
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
  sub_1C93A78(&this->fields._autoFortificationButton_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1C93A78(&this->fields._eventFortificationListViewPanel_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1C93A78(&this->fields._eventFortificationWorkMiniObj_k__BackingField, value);
}


void FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1C93A78(&this->fields._eventFortificationWorkObj_k__BackingField, value);
}


void FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1C93A78(&this->fields._fortificationAutomaticDialog_k__BackingField, value);
}


void FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationCamera_k__BackingField = value;
  sub_1C93A78(&this->fields, value);
}


void FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1C93A78(&this->fields._fortificationConfirmDialog_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationBgTex_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationBgTex2_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationBgTex3_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationBgTex4_k__BackingField, value);
}


void FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationBgTex5_k__BackingField, value);
}


void FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._organizationPanel_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationPanel_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationSlotBgTex_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationSlotBgTex2_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationSlotBgTex3_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationSlotBgTex4_k__BackingField, value);
}


void FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1C93A78(&this->fields._organizationSlotBgTex5_k__BackingField, value);
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
  if ( (byte_4D2ABD1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_1C93AD4(&StringLiteral_19356/*"event_bg_little_{0}01"*/);
    sub_1C93AD4(&StringLiteral_19364/*"event_bg_{0}04"*/);
    sub_1C93AD4(&StringLiteral_19359/*"event_bg_little_{0}04"*/);
    sub_1C93AD4(&StringLiteral_19357/*"event_bg_little_{0}02"*/);
    sub_1C93AD4(&StringLiteral_19358/*"event_bg_little_{0}03"*/);
    sub_1C93AD4(&StringLiteral_6251/*"EventFortificationListViewPanel"*/);
    sub_1C93AD4(&StringLiteral_6873/*"FortificationWork"*/);
    sub_1C93AD4(&StringLiteral_19362/*"event_bg_{0}02"*/);
    sub_1C93AD4(&StringLiteral_6874/*"FortificationWorkMini"*/);
    sub_1C93AD4(&StringLiteral_19363/*"event_bg_{0}03"*/);
    sub_1C93AD4(&StringLiteral_19361/*"event_bg_{0}01"*/);
    sub_1C93AD4(&StringLiteral_19365/*"event_bg_{0}05"*/);
    sub_1C93AD4(&StringLiteral_6869/*"FortificationConfirmDialog"*/);
    sub_1C93AD4(&StringLiteral_6867/*"FortificationAutomaticDialog"*/);
    sub_1C93AD4(&StringLiteral_19360/*"event_bg_little_{0}05"*/);
    sub_1C93AD4(&StringLiteral_6868/*"FortificationCamera"*/);
    sub_1C93AD4(&StringLiteral_6871/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C93AD4(&StringLiteral_2498/*"AutoFortificationButton"*/);
    byte_4D2ABD1 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6868/*"FortificationCamera"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2498/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v6 )
    goto LABEL_28;
  v6->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v6->fields._autoFortificationButton_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6871/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v7 )
    goto LABEL_28;
  v7->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v7->fields._organizationPanel_k__BackingField, this);
  v8 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v10 = System_String__Format((System_String_o *)StringLiteral_19361/*"event_bg_{0}01"*/, v9, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v10,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v8 )
    goto LABEL_28;
  v8->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v8->fields._organizationBgTex_k__BackingField, this);
  v11 = v4->fields.__4__this;
  v53 = v4->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v13 = System_String__Format((System_String_o *)StringLiteral_19362/*"event_bg_{0}02"*/, v12, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v13,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v11 )
    goto LABEL_28;
  v11->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v11->fields._organizationBgTex2_k__BackingField, this);
  v14 = v4->fields.__4__this;
  v52 = v4->fields.eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v16 = System_String__Format((System_String_o *)StringLiteral_19363/*"event_bg_{0}03"*/, v15, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v16,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v14 )
    goto LABEL_28;
  v14->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v14->fields._organizationBgTex3_k__BackingField, this);
  v17 = v4->fields.__4__this;
  v51 = v4->fields.eventId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v19 = System_String__Format((System_String_o *)StringLiteral_19364/*"event_bg_{0}04"*/, v18, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v19,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v17 )
    goto LABEL_28;
  v17->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v17->fields._organizationBgTex4_k__BackingField, this);
  v20 = v4->fields.__4__this;
  v50 = v4->fields.eventId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v22 = System_String__Format((System_String_o *)StringLiteral_19365/*"event_bg_{0}05"*/, v21, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v22,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v20 )
    goto LABEL_28;
  v20->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v20->fields._organizationBgTex5_k__BackingField, this);
  v23 = v4->fields.__4__this;
  v49 = v4->fields.eventId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v25 = System_String__Format((System_String_o *)StringLiteral_19356/*"event_bg_little_{0}01"*/, v24, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v25,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v23 )
    goto LABEL_28;
  v23->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v23->fields._organizationSlotBgTex_k__BackingField, this);
  v26 = v4->fields.__4__this;
  v48 = v4->fields.eventId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v28 = System_String__Format((System_String_o *)StringLiteral_19357/*"event_bg_little_{0}02"*/, v27, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v28,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v26 )
    goto LABEL_28;
  v26->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v26->fields._organizationSlotBgTex2_k__BackingField, this);
  v29 = v4->fields.__4__this;
  v47 = v4->fields.eventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v31 = System_String__Format((System_String_o *)StringLiteral_19358/*"event_bg_little_{0}03"*/, v30, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v31,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v29 )
    goto LABEL_28;
  v29->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v29->fields._organizationSlotBgTex3_k__BackingField, this);
  v32 = v4->fields.__4__this;
  v46 = v4->fields.eventId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v34 = System_String__Format((System_String_o *)StringLiteral_19359/*"event_bg_little_{0}04"*/, v33, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v34,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v32 )
    goto LABEL_28;
  v32->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v32->fields._organizationSlotBgTex4_k__BackingField, this);
  v35 = v4->fields.__4__this;
  v45 = v4->fields.eventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v37 = System_String__Format((System_String_o *)StringLiteral_19360/*"event_bg_little_{0}05"*/, v36, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                v37,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v35 )
    goto LABEL_28;
  v35->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C93A78(&v35->fields._organizationSlotBgTex5_k__BackingField, this);
  v38 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6873/*"FortificationWork"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v38 )
    goto LABEL_28;
  v38->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v38->fields._eventFortificationWorkObj_k__BackingField, this);
  v39 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6874/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v39 )
    goto LABEL_28;
  v39->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v39->fields._eventFortificationWorkMiniObj_k__BackingField, this);
  v40 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6251/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v40 )
    goto LABEL_28;
  v40->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v40->fields._eventFortificationListViewPanel_k__BackingField, this);
  v41 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6869/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v41
    || (v41->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C93A78(&v41->fields._fortificationConfirmDialog_k__BackingField, this),
        v42 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__51927708(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6867/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888),
        !v42)
    || (v42->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C93A78(
                                                                      &v42->fields._fortificationAutomaticDialog_k__BackingField,
                                                                      this),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1C93D2C(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v44 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C93A78(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41320056(v44, _9__1, 1, 0);
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