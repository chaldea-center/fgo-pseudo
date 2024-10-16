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

  if ( (byte_4AB9B85 & 1) == 0 )
  {
    sub_1BAB41C(&string___TypeInfo, method);
    sub_1BAB41C(&StringLiteral_6232/*"EventUI/Prefabs/"*/, v3);
    byte_4AB9B85 = 1;
  }
  v4 = sub_1BAB4C4(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BAB678(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BAB680(v4, v5);
  v9 = StringLiteral_6232/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6232/*"EventUI/Prefabs/"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4AB9B82 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BAB41C(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v8);
    sub_1BAB41C(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v9);
    byte_4AB9B82 = 1;
  }
  v10 = sub_1BAB668(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BAB678(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BAB680(v11, v12);
  v18 = loadAssetNames->m_Items[0];
  v19 = System_Int32__ToString((int)v10 + 24, 0LL);
  v20 = System_String__Concat_62048128(v18, v19, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v10,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
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

  if ( (byte_4AB9B83 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventRewardBgMaster___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AB9B83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v11);
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

  if ( (byte_4AB9B84 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AB9B84 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38244608(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._autoFortificationButton_k__BackingField, 0, v7, v8);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationPanel_k__BackingField, 0, v9, v10);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex_k__BackingField, 0, v11, v12);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex2_k__BackingField, 0, v13, v14);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex3_k__BackingField, 0, v15, v16);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex4_k__BackingField, 0, v17, v18);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex5_k__BackingField, 0, v19, v20);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex_k__BackingField, 0, v21, v22);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex2_k__BackingField, 0, v23, v24);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex3_k__BackingField, 0, v25, v26);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex4_k__BackingField, 0, v27, v28);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex5_k__BackingField, 0, v29, v30);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0,
    v31,
    v32);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0,
    v33,
    v34);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0,
    v35,
    v36);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0,
    v37,
    v38);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  sub_1BAB3C0(
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
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct FortificationAssetManager_o *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct FortificationAssetManager_o *v53; // x21
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  struct FortificationAssetManager_o *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct FortificationAssetManager_o *v69; // x21
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct FortificationAssetManager_o *v77; // x21
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  struct FortificationAssetManager_o *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  struct FortificationAssetManager_o *v93; // x21
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x0
  System_String_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  struct FortificationAssetManager_o *v101; // x21
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  struct FortificationAssetManager_o *v109; // x21
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  struct FortificationAssetManager_o *v117; // x21
  int32_t v118; // w2
  int32_t v119; // w3
  struct FortificationAssetManager_o *v120; // x21
  int32_t v121; // w2
  int32_t v122; // w3
  struct FortificationAssetManager_o *v123; // x21
  int32_t v124; // w2
  int32_t v125; // w3
  struct FortificationAssetManager_o *v126; // x21
  int32_t v127; // w2
  int32_t v128; // w3
  struct FortificationAssetManager_o *v129; // x21
  int32_t v130; // w2
  int32_t v131; // w3
  System_Action_o *_9__1; // x21
  int32_t v133; // w20
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // [xsp+8h] [xbp-68h] BYREF
  int32_t v137; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v138; // [xsp+10h] [xbp-60h] BYREF
  int32_t v139; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v140; // [xsp+18h] [xbp-58h] BYREF
  int32_t v141; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v142; // [xsp+20h] [xbp-50h] BYREF
  int32_t v143; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v144; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4AB9B86 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, assetData);
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, v5);
    sub_1BAB41C(&Method_AssetData_GetObject_Texture2D____76450912, v6);
    sub_1BAB41C(&AtlasManager_TypeInfo, v7);
    sub_1BAB41C(&int_TypeInfo, v8);
    sub_1BAB41C(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v9);
    sub_1BAB41C(&StringLiteral_19178/*"event_bg_little_{0}01"*/, v10);
    sub_1BAB41C(&StringLiteral_19186/*"event_bg_{0}04"*/, v11);
    sub_1BAB41C(&StringLiteral_19181/*"event_bg_little_{0}04"*/, v12);
    sub_1BAB41C(&StringLiteral_19179/*"event_bg_little_{0}02"*/, v13);
    sub_1BAB41C(&StringLiteral_19180/*"event_bg_little_{0}03"*/, v14);
    sub_1BAB41C(&StringLiteral_6184/*"EventFortificationListViewPanel"*/, v15);
    sub_1BAB41C(&StringLiteral_6807/*"FortificationWork"*/, v16);
    sub_1BAB41C(&StringLiteral_19184/*"event_bg_{0}02"*/, v17);
    sub_1BAB41C(&StringLiteral_6808/*"FortificationWorkMini"*/, v18);
    sub_1BAB41C(&StringLiteral_19185/*"event_bg_{0}03"*/, v19);
    sub_1BAB41C(&StringLiteral_19183/*"event_bg_{0}01"*/, v20);
    sub_1BAB41C(&StringLiteral_19187/*"event_bg_{0}05"*/, v21);
    sub_1BAB41C(&StringLiteral_6804/*"FortificationConfirmDialog"*/, v22);
    sub_1BAB41C(&StringLiteral_6802/*"FortificationAutomaticDialog"*/, v23);
    sub_1BAB41C(&StringLiteral_19182/*"event_bg_little_{0}05"*/, v24);
    sub_1BAB41C(&StringLiteral_6803/*"FortificationCamera"*/, v25);
    sub_1BAB41C(&StringLiteral_6805/*"FortificationOrganizationPanel"*/, v26);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1BAB41C(&StringLiteral_2606/*"AutoFortificationButton"*/, v27);
    byte_4AB9B86 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6803/*"FortificationCamera"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v29, v30);
  v31 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2606/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v31 )
    goto LABEL_28;
  v31->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v31->fields._autoFortificationButton_k__BackingField,
    (int32_t)this,
    v32,
    v33);
  v34 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6805/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v34 )
    goto LABEL_28;
  v34->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v34->fields._organizationPanel_k__BackingField,
    (int32_t)this,
    v35,
    v36);
  v37 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v38, v39, v40);
  v42 = System_String__Format((System_String_o *)StringLiteral_19183/*"event_bg_{0}01"*/, v41, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v42,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v37 )
    goto LABEL_28;
  v37->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v37->fields._organizationBgTex_k__BackingField,
    (int32_t)this,
    v43,
    v44);
  v45 = v4->fields.__4__this;
  v144 = v4->fields.eventId;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144, v46, v47, v48);
  v50 = System_String__Format((System_String_o *)StringLiteral_19184/*"event_bg_{0}02"*/, v49, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v50,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v45 )
    goto LABEL_28;
  v45->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v45->fields._organizationBgTex2_k__BackingField,
    (int32_t)this,
    v51,
    v52);
  v53 = v4->fields.__4__this;
  v143 = v4->fields.eventId;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v54, v55, v56);
  v58 = System_String__Format((System_String_o *)StringLiteral_19185/*"event_bg_{0}03"*/, v57, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v58,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v53 )
    goto LABEL_28;
  v53->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v53->fields._organizationBgTex3_k__BackingField,
    (int32_t)this,
    v59,
    v60);
  v61 = v4->fields.__4__this;
  v142 = v4->fields.eventId;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142, v62, v63, v64);
  v66 = System_String__Format((System_String_o *)StringLiteral_19186/*"event_bg_{0}04"*/, v65, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v66,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v61 )
    goto LABEL_28;
  v61->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v61->fields._organizationBgTex4_k__BackingField,
    (int32_t)this,
    v67,
    v68);
  v69 = v4->fields.__4__this;
  v141 = v4->fields.eventId;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v70, v71, v72);
  v74 = System_String__Format((System_String_o *)StringLiteral_19187/*"event_bg_{0}05"*/, v73, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v74,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v69 )
    goto LABEL_28;
  v69->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v69->fields._organizationBgTex5_k__BackingField,
    (int32_t)this,
    v75,
    v76);
  v77 = v4->fields.__4__this;
  v140 = v4->fields.eventId;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v78, v79, v80);
  v82 = System_String__Format((System_String_o *)StringLiteral_19178/*"event_bg_little_{0}01"*/, v81, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v82,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v77 )
    goto LABEL_28;
  v77->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v77->fields._organizationSlotBgTex_k__BackingField,
    (int32_t)this,
    v83,
    v84);
  v85 = v4->fields.__4__this;
  v139 = v4->fields.eventId;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v86, v87, v88);
  v90 = System_String__Format((System_String_o *)StringLiteral_19179/*"event_bg_little_{0}02"*/, v89, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v90,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v85 )
    goto LABEL_28;
  v85->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v85->fields._organizationSlotBgTex2_k__BackingField,
    (int32_t)this,
    v91,
    v92);
  v93 = v4->fields.__4__this;
  v138 = v4->fields.eventId;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v94, v95, v96);
  v98 = System_String__Format((System_String_o *)StringLiteral_19180/*"event_bg_little_{0}03"*/, v97, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v98,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v93 )
    goto LABEL_28;
  v93->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v93->fields._organizationSlotBgTex3_k__BackingField,
    (int32_t)this,
    v99,
    v100);
  v101 = v4->fields.__4__this;
  v137 = v4->fields.eventId;
  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v102, v103, v104);
  v106 = System_String__Format((System_String_o *)StringLiteral_19181/*"event_bg_little_{0}04"*/, v105, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v106,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v101 )
    goto LABEL_28;
  v101->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v101->fields._organizationSlotBgTex4_k__BackingField,
    (int32_t)this,
    v107,
    v108);
  v109 = v4->fields.__4__this;
  v136 = v4->fields.eventId;
  v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v110, v111, v112);
  v114 = System_String__Format((System_String_o *)StringLiteral_19182/*"event_bg_little_{0}05"*/, v113, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                v114,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_Texture2D____76450912);
  if ( !v109 )
    goto LABEL_28;
  v109->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v109->fields._organizationSlotBgTex5_k__BackingField,
    (int32_t)this,
    v115,
    v116);
  v117 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6807/*"FortificationWork"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v117 )
    goto LABEL_28;
  v117->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v117->fields._eventFortificationWorkObj_k__BackingField,
    (int32_t)this,
    v118,
    v119);
  v120 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6808/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v120 )
    goto LABEL_28;
  v120->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v120->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int32_t)this,
    v121,
    v122);
  v123 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6184/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v123 )
    goto LABEL_28;
  v123->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v123->fields._eventFortificationListViewPanel_k__BackingField,
    (int32_t)this,
    v124,
    v125);
  v126 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6804/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !v126
    || (v126->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&v126->fields._fortificationConfirmDialog_k__BackingField,
          (int32_t)this,
          v127,
          v128),
        v129 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48916712(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6802/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888),
        !v129)
    || (v129->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&v129->fields._fortificationAutomaticDialog_k__BackingField,
          (int32_t)this,
          v130,
          v131),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1BAB678(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v133 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v134, v135);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38244444(v133, _9__1, 1, 0LL);
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