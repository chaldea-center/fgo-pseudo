void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A00159 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_6201/*"EventUI/Prefabs/"*/, v3);
    byte_4A00159 = 1;
  }
  v4 = sub_1B64170(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B64324(0LL);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B6432C(v4, v5);
  v9 = StringLiteral_6201/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6201/*"EventUI/Prefabs/"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_4A00156 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v8);
    sub_1B640C8(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v9);
    byte_4A00156 = 1;
  }
  v10 = sub_1B64314(FortificationAssetManager___c__DisplayClass73_0_TypeInfo, *(_QWORD *)&eventId, finishCallback);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)finishCallback, v14, v15),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B64324(v11);
  }
  if ( !loadAssetNames->max_length )
    sub_1B6432C(v11, v16);
  v18 = loadAssetNames->m_Items[0];
  v19 = System_Int32__ToString((int)v10 + 24, 0LL);
  v20 = System_String__Concat_61375396(v18, v19, 0LL);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v10,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v23, 1, 0LL);
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
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_4A00157 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardBgMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A00157 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A00158 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A00158 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37544568(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._autoFortificationButton_k__BackingField, 0, v7, v8);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationPanel_k__BackingField, 0, v9, v10);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex_k__BackingField, 0, v11, v12);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex2_k__BackingField, 0, v13, v14);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex3_k__BackingField, 0, v15, v16);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex4_k__BackingField, 0, v17, v18);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex5_k__BackingField, 0, v19, v20);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex_k__BackingField, 0, v21, v22);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex2_k__BackingField, 0, v23, v24);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex3_k__BackingField, 0, v25, v26);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex4_k__BackingField, 0, v27, v28);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex5_k__BackingField, 0, v29, v30);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0,
    v31,
    v32);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0,
    v33,
    v34);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0,
    v35,
    v36);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0,
    v37,
    v38);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    0,
    v39,
    v40);
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
  int32_t v3; // w3

  this->fields._autoFortificationButton_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._autoFortificationButton_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._fortificationCamera_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationBgTex_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex3_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex4_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex5_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationPanel_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationPanel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v29; // w2
  int32_t v30; // w3
  struct FortificationAssetManager_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  struct FortificationAssetManager_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  struct FortificationAssetManager_o *v37; // x21
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct FortificationAssetManager_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct FortificationAssetManager_o *v47; // x21
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct FortificationAssetManager_o *v52; // x21
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct FortificationAssetManager_o *v57; // x21
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  struct FortificationAssetManager_o *v62; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  struct FortificationAssetManager_o *v67; // x21
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  struct FortificationAssetManager_o *v72; // x21
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct FortificationAssetManager_o *v77; // x21
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  struct FortificationAssetManager_o *v82; // x21
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  struct FortificationAssetManager_o *v87; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  struct FortificationAssetManager_o *v90; // x21
  int32_t v91; // w2
  int32_t v92; // w3
  struct FortificationAssetManager_o *v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  struct FortificationAssetManager_o *v96; // x21
  int32_t v97; // w2
  int32_t v98; // w3
  struct FortificationAssetManager_o *v99; // x21
  int32_t v100; // w2
  int32_t v101; // w3
  __int64 v102; // x1
  __int64 v103; // x2
  System_Action_o *_9__1; // x21
  int32_t v105; // w20
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // [xsp+8h] [xbp-68h] BYREF
  int32_t v109; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v110; // [xsp+10h] [xbp-60h] BYREF
  int32_t v111; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v112; // [xsp+18h] [xbp-58h] BYREF
  int32_t v113; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v114; // [xsp+20h] [xbp-50h] BYREF
  int32_t v115; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v116; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4A0015A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, assetData);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v5);
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, v6);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v9);
    sub_1B640C8(&StringLiteral_19075/*"event_bg_little_{0}01"*/, v10);
    sub_1B640C8(&StringLiteral_19083/*"event_bg_{0}04"*/, v11);
    sub_1B640C8(&StringLiteral_19078/*"event_bg_little_{0}04"*/, v12);
    sub_1B640C8(&StringLiteral_19076/*"event_bg_little_{0}02"*/, v13);
    sub_1B640C8(&StringLiteral_19077/*"event_bg_little_{0}03"*/, v14);
    sub_1B640C8(&StringLiteral_6153/*"EventFortificationListViewPanel"*/, v15);
    sub_1B640C8(&StringLiteral_6776/*"FortificationWork"*/, v16);
    sub_1B640C8(&StringLiteral_19081/*"event_bg_{0}02"*/, v17);
    sub_1B640C8(&StringLiteral_6777/*"FortificationWorkMini"*/, v18);
    sub_1B640C8(&StringLiteral_19082/*"event_bg_{0}03"*/, v19);
    sub_1B640C8(&StringLiteral_19080/*"event_bg_{0}01"*/, v20);
    sub_1B640C8(&StringLiteral_19084/*"event_bg_{0}05"*/, v21);
    sub_1B640C8(&StringLiteral_6773/*"FortificationConfirmDialog"*/, v22);
    sub_1B640C8(&StringLiteral_6771/*"FortificationAutomaticDialog"*/, v23);
    sub_1B640C8(&StringLiteral_19079/*"event_bg_little_{0}05"*/, v24);
    sub_1B640C8(&StringLiteral_6772/*"FortificationCamera"*/, v25);
    sub_1B640C8(&StringLiteral_6774/*"FortificationOrganizationPanel"*/, v26);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1B640C8(&StringLiteral_2607/*"AutoFortificationButton"*/, v27);
    byte_4A0015A = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6772/*"FortificationCamera"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v29, v30);
  v31 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2607/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v31 )
    goto LABEL_28;
  v31->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v31->fields._autoFortificationButton_k__BackingField,
    (int32_t)this,
    v32,
    v33);
  v34 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6774/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v34 )
    goto LABEL_28;
  v34->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v34->fields._organizationPanel_k__BackingField,
    (int32_t)this,
    v35,
    v36);
  v37 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v39 = System_String__Format((System_String_o *)StringLiteral_19080/*"event_bg_{0}01"*/, v38, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v39,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v37 )
    goto LABEL_28;
  v37->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v37->fields._organizationBgTex_k__BackingField,
    (int32_t)this,
    v40,
    v41);
  v42 = v4->fields.__4__this;
  v116 = v4->fields.eventId;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
  v44 = System_String__Format((System_String_o *)StringLiteral_19081/*"event_bg_{0}02"*/, v43, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v44,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v42 )
    goto LABEL_28;
  v42->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v42->fields._organizationBgTex2_k__BackingField,
    (int32_t)this,
    v45,
    v46);
  v47 = v4->fields.__4__this;
  v115 = v4->fields.eventId;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
  v49 = System_String__Format((System_String_o *)StringLiteral_19082/*"event_bg_{0}03"*/, v48, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v49,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v47 )
    goto LABEL_28;
  v47->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v47->fields._organizationBgTex3_k__BackingField,
    (int32_t)this,
    v50,
    v51);
  v52 = v4->fields.__4__this;
  v114 = v4->fields.eventId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
  v54 = System_String__Format((System_String_o *)StringLiteral_19083/*"event_bg_{0}04"*/, v53, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v54,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v52 )
    goto LABEL_28;
  v52->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v52->fields._organizationBgTex4_k__BackingField,
    (int32_t)this,
    v55,
    v56);
  v57 = v4->fields.__4__this;
  v113 = v4->fields.eventId;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
  v59 = System_String__Format((System_String_o *)StringLiteral_19084/*"event_bg_{0}05"*/, v58, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v59,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v57 )
    goto LABEL_28;
  v57->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v57->fields._organizationBgTex5_k__BackingField,
    (int32_t)this,
    v60,
    v61);
  v62 = v4->fields.__4__this;
  v112 = v4->fields.eventId;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  v64 = System_String__Format((System_String_o *)StringLiteral_19075/*"event_bg_little_{0}01"*/, v63, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v64,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v62 )
    goto LABEL_28;
  v62->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v62->fields._organizationSlotBgTex_k__BackingField,
    (int32_t)this,
    v65,
    v66);
  v67 = v4->fields.__4__this;
  v111 = v4->fields.eventId;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
  v69 = System_String__Format((System_String_o *)StringLiteral_19076/*"event_bg_little_{0}02"*/, v68, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v69,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v67 )
    goto LABEL_28;
  v67->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v67->fields._organizationSlotBgTex2_k__BackingField,
    (int32_t)this,
    v70,
    v71);
  v72 = v4->fields.__4__this;
  v110 = v4->fields.eventId;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
  v74 = System_String__Format((System_String_o *)StringLiteral_19077/*"event_bg_little_{0}03"*/, v73, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v74,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v72 )
    goto LABEL_28;
  v72->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v72->fields._organizationSlotBgTex3_k__BackingField,
    (int32_t)this,
    v75,
    v76);
  v77 = v4->fields.__4__this;
  v109 = v4->fields.eventId;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v79 = System_String__Format((System_String_o *)StringLiteral_19078/*"event_bg_little_{0}04"*/, v78, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v79,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v77 )
    goto LABEL_28;
  v77->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v77->fields._organizationSlotBgTex4_k__BackingField,
    (int32_t)this,
    v80,
    v81);
  v82 = v4->fields.__4__this;
  v108 = v4->fields.eventId;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
  v84 = System_String__Format((System_String_o *)StringLiteral_19079/*"event_bg_little_{0}05"*/, v83, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                v84,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v82 )
    goto LABEL_28;
  v82->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v82->fields._organizationSlotBgTex5_k__BackingField,
    (int32_t)this,
    v85,
    v86);
  v87 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6776/*"FortificationWork"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v87 )
    goto LABEL_28;
  v87->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v87->fields._eventFortificationWorkObj_k__BackingField,
    (int32_t)this,
    v88,
    v89);
  v90 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6777/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v90 )
    goto LABEL_28;
  v90->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v90->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int32_t)this,
    v91,
    v92);
  v93 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6153/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v93 )
    goto LABEL_28;
  v93->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v93->fields._eventFortificationListViewPanel_k__BackingField,
    (int32_t)this,
    v94,
    v95);
  v96 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6773/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v96
    || (v96->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v96->fields._fortificationConfirmDialog_k__BackingField,
          (int32_t)this,
          v97,
          v98),
        v99 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48347676(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6771/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960),
        !v99)
    || (v99->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v99->fields._fortificationAutomaticDialog_k__BackingField,
          (int32_t)this,
          v100,
          v101),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1B64324(this);
  }
  _9__1 = v4->fields.__9__1;
  v105 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v102, v103);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v106, v107);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37544396(v105, _9__1, 1, 0LL);
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