void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5EF45 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6228/*"EventUI/Prefabs/"*/);
    byte_4A5EF45 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6228/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6228/*"EventUI/Prefabs/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAssetManager__AssertionCheck(FortificationAssetManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FortificationAssetManager__GetAssets(
        FortificationAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_4A5EF42 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_1B885B0(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_4A5EF42 = 1;
  }
  v7 = sub_1B887FC(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B8880C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
    sub_1B88814(v8, v9);
  v15 = loadAssetNames->m_Items[0];
  v16 = System_Int32__ToString((int)v7 + 24, 0LL);
  v17 = System_String__Concat_61707032(v15, v16, 0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v17, v18, 1, 0LL);
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_4A5EF43 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
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

  if ( (byte_4A5EF44 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5EF44 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._autoFortificationButton_k__BackingField, 0, v7, v8);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationPanel_k__BackingField, 0, v9, v10);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex_k__BackingField, 0, v11, v12);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex2_k__BackingField, 0, v13, v14);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex3_k__BackingField, 0, v15, v16);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex4_k__BackingField, 0, v17, v18);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationBgTex5_k__BackingField, 0, v19, v20);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex_k__BackingField, 0, v21, v22);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex2_k__BackingField, 0, v23, v24);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex3_k__BackingField, 0, v25, v26);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex4_k__BackingField, 0, v27, v28);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._organizationSlotBgTex5_k__BackingField, 0, v29, v30);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0,
    v31,
    v32);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0,
    v33,
    v34);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0,
    v35,
    v36);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0,
    v37,
    v38);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  struct FortificationAssetManager_o *_4__this; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct FortificationAssetManager_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct FortificationAssetManager_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct FortificationAssetManager_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct FortificationAssetManager_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct FortificationAssetManager_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct FortificationAssetManager_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct FortificationAssetManager_o *v46; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct FortificationAssetManager_o *v54; // x21
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  struct FortificationAssetManager_o *v62; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  struct FortificationAssetManager_o *v70; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  struct FortificationAssetManager_o *v78; // x21
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct FortificationAssetManager_o *v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  struct FortificationAssetManager_o *v94; // x21
  int32_t v95; // w2
  int32_t v96; // w3
  struct FortificationAssetManager_o *v97; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  struct FortificationAssetManager_o *v100; // x21
  int32_t v101; // w2
  int32_t v102; // w3
  struct FortificationAssetManager_o *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  struct FortificationAssetManager_o *v106; // x21
  int32_t v107; // w2
  int32_t v108; // w3
  System_Action_o *_9__1; // x21
  int32_t v110; // w20
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // [xsp+8h] [xbp-68h] BYREF
  int32_t v114; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v115; // [xsp+10h] [xbp-60h] BYREF
  int32_t v116; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v117; // [xsp+18h] [xbp-58h] BYREF
  int32_t v118; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v119; // [xsp+20h] [xbp-50h] BYREF
  int32_t v120; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v121; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4A5EF46 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_1B885B0(&StringLiteral_19148/*"event_bg_little_{0}01"*/);
    sub_1B885B0(&StringLiteral_19156/*"event_bg_{0}04"*/);
    sub_1B885B0(&StringLiteral_19151/*"event_bg_little_{0}04"*/);
    sub_1B885B0(&StringLiteral_19149/*"event_bg_little_{0}02"*/);
    sub_1B885B0(&StringLiteral_19150/*"event_bg_little_{0}03"*/);
    sub_1B885B0(&StringLiteral_6180/*"EventFortificationListViewPanel"*/);
    sub_1B885B0(&StringLiteral_6804/*"FortificationWork"*/);
    sub_1B885B0(&StringLiteral_19154/*"event_bg_{0}02"*/);
    sub_1B885B0(&StringLiteral_6805/*"FortificationWorkMini"*/);
    sub_1B885B0(&StringLiteral_19155/*"event_bg_{0}03"*/);
    sub_1B885B0(&StringLiteral_19153/*"event_bg_{0}01"*/);
    sub_1B885B0(&StringLiteral_19157/*"event_bg_{0}05"*/);
    sub_1B885B0(&StringLiteral_6801/*"FortificationConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_6799/*"FortificationAutomaticDialog"*/);
    sub_1B885B0(&StringLiteral_19152/*"event_bg_little_{0}05"*/);
    sub_1B885B0(&StringLiteral_6800/*"FortificationCamera"*/);
    sub_1B885B0(&StringLiteral_6802/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1B885B0(&StringLiteral_2610/*"AutoFortificationButton"*/);
    byte_4A5EF46 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6800/*"FortificationCamera"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v6, v7);
  v8 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2610/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v8 )
    goto LABEL_28;
  v8->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields._autoFortificationButton_k__BackingField,
    (int32_t)this,
    v9,
    v10);
  v11 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6802/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v11 )
    goto LABEL_28;
  v11->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v11->fields._organizationPanel_k__BackingField,
    (int32_t)this,
    v12,
    v13);
  v14 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v15, v16, v17);
  v19 = System_String__Format((System_String_o *)StringLiteral_19153/*"event_bg_{0}01"*/, v18, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v19,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v14 )
    goto LABEL_28;
  v14->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v14->fields._organizationBgTex_k__BackingField,
    (int32_t)this,
    v20,
    v21);
  v22 = v4->fields.__4__this;
  v121 = v4->fields.eventId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121, v23, v24, v25);
  v27 = System_String__Format((System_String_o *)StringLiteral_19154/*"event_bg_{0}02"*/, v26, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v27,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v22 )
    goto LABEL_28;
  v22->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v22->fields._organizationBgTex2_k__BackingField,
    (int32_t)this,
    v28,
    v29);
  v30 = v4->fields.__4__this;
  v120 = v4->fields.eventId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120, v31, v32, v33);
  v35 = System_String__Format((System_String_o *)StringLiteral_19155/*"event_bg_{0}03"*/, v34, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v35,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v30 )
    goto LABEL_28;
  v30->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v30->fields._organizationBgTex3_k__BackingField,
    (int32_t)this,
    v36,
    v37);
  v38 = v4->fields.__4__this;
  v119 = v4->fields.eventId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v39, v40, v41);
  v43 = System_String__Format((System_String_o *)StringLiteral_19156/*"event_bg_{0}04"*/, v42, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v43,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v38 )
    goto LABEL_28;
  v38->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v38->fields._organizationBgTex4_k__BackingField,
    (int32_t)this,
    v44,
    v45);
  v46 = v4->fields.__4__this;
  v118 = v4->fields.eventId;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118, v47, v48, v49);
  v51 = System_String__Format((System_String_o *)StringLiteral_19157/*"event_bg_{0}05"*/, v50, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v51,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v46 )
    goto LABEL_28;
  v46->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v46->fields._organizationBgTex5_k__BackingField,
    (int32_t)this,
    v52,
    v53);
  v54 = v4->fields.__4__this;
  v117 = v4->fields.eventId;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v55, v56, v57);
  v59 = System_String__Format((System_String_o *)StringLiteral_19148/*"event_bg_little_{0}01"*/, v58, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v59,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v54 )
    goto LABEL_28;
  v54->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v54->fields._organizationSlotBgTex_k__BackingField,
    (int32_t)this,
    v60,
    v61);
  v62 = v4->fields.__4__this;
  v116 = v4->fields.eventId;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116, v63, v64, v65);
  v67 = System_String__Format((System_String_o *)StringLiteral_19149/*"event_bg_little_{0}02"*/, v66, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v67,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v62 )
    goto LABEL_28;
  v62->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v62->fields._organizationSlotBgTex2_k__BackingField,
    (int32_t)this,
    v68,
    v69);
  v70 = v4->fields.__4__this;
  v115 = v4->fields.eventId;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v71, v72, v73);
  v75 = System_String__Format((System_String_o *)StringLiteral_19150/*"event_bg_little_{0}03"*/, v74, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v75,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v70 )
    goto LABEL_28;
  v70->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v70->fields._organizationSlotBgTex3_k__BackingField,
    (int32_t)this,
    v76,
    v77);
  v78 = v4->fields.__4__this;
  v114 = v4->fields.eventId;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114, v79, v80, v81);
  v83 = System_String__Format((System_String_o *)StringLiteral_19151/*"event_bg_little_{0}04"*/, v82, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v83,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v78 )
    goto LABEL_28;
  v78->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v78->fields._organizationSlotBgTex4_k__BackingField,
    (int32_t)this,
    v84,
    v85);
  v86 = v4->fields.__4__this;
  v113 = v4->fields.eventId;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113, v87, v88, v89);
  v91 = System_String__Format((System_String_o *)StringLiteral_19152/*"event_bg_little_{0}05"*/, v90, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                v91,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v86 )
    goto LABEL_28;
  v86->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v86->fields._organizationSlotBgTex5_k__BackingField,
    (int32_t)this,
    v92,
    v93);
  v94 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6804/*"FortificationWork"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v94 )
    goto LABEL_28;
  v94->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v94->fields._eventFortificationWorkObj_k__BackingField,
    (int32_t)this,
    v95,
    v96);
  v97 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6805/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v97 )
    goto LABEL_28;
  v97->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v97->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int32_t)this,
    v98,
    v99);
  v100 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6180/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v100 )
    goto LABEL_28;
  v100->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v100->fields._eventFortificationListViewPanel_k__BackingField,
    (int32_t)this,
    v101,
    v102);
  v103 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6801/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v103
    || (v103->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v103->fields._fortificationConfirmDialog_k__BackingField,
          (int32_t)this,
          v104,
          v105),
        v106 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__48635516(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6799/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        !v106)
    || (v106->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v106->fields._fortificationAutomaticDialog_k__BackingField,
          (int32_t)this,
          v107,
          v108),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1B8880C(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v110 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v111, v112);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(v110, _9__1, 1, 0LL);
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