void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_array *v12; // x20
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_418AA9C & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_6202/*"EventUI/Prefabs/"*/, v3);
    byte_418AA9C = 1;
  }
  v4 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v12 = (struct System_String_array *)v4;
  v13 = StringLiteral_6202/*"EventUI/Prefabs/"*/;
  if ( StringLiteral_6202/*"EventUI/Prefabs/"*/ )
  {
    v13 = sub_B2C41C(StringLiteral_6202/*"EventUI/Prefabs/"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v22 = sub_B2C454(0LL);
      sub_B2C400(v22, 0LL);
    }
    v14 = (System_Int32_array **)StringLiteral_6202/*"EventUI/Prefabs/"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    v21 = sub_B2C460(v13);
    sub_B2C400(v21, 0LL);
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x0

  if ( (byte_418AA99 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v8);
    sub_B2C35C(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v9);
    byte_418AA99 = 1;
  }
  v10 = sub_B2C42C(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  FortificationAssetManager___c__DisplayClass73_0___ctor((FortificationAssetManager___c__DisplayClass73_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 32),
          (System_Int32_array **)finishCallback,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B2C434(v11, v12);
  }
  if ( !loadAssetNames->max_length )
  {
    v30 = sub_B2C460(v11);
    sub_B2C400(v30, 0LL);
  }
  v26 = loadAssetNames->m_Items[0];
  v27 = System_Int32__ToString((int)v10 + 24, 0LL);
  v28 = System_String__Concat_44305532(v26, v27, 0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v28, v29, 1, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_418AA9A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardBgMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418AA9A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7

  if ( (byte_418AA9B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418AA9B = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28451204(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._autoFortificationButton_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationPanel_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex2_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex3_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex4_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex5_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._autoFortificationButton_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._autoFortificationButton_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._fortificationCamera_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationBgTex_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationBgTex2_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex2_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationBgTex3_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex3_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationBgTex4_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex4_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationBgTex5_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex5_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationPanel_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationPanel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  struct FortificationAssetManager_o *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  struct FortificationAssetManager_o *v37; // x21
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  struct FortificationAssetManager_o *v40; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  struct FortificationAssetManager_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  struct FortificationAssetManager_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  struct FortificationAssetManager_o *v49; // x21
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  struct FortificationAssetManager_o *v52; // x21
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  struct FortificationAssetManager_o *v55; // x21
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  struct FortificationAssetManager_o *v58; // x21
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  struct FortificationAssetManager_o *v61; // x21
  struct FortificationAssetManager_o *v62; // x21
  struct FortificationAssetManager_o *v63; // x21
  struct FortificationAssetManager_o *v64; // x21
  struct FortificationAssetManager_o *v65; // x21
  System_Action_o *_9__1; // x21
  int32_t v67; // w20
  int32_t v68; // [xsp+8h] [xbp-58h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v70; // [xsp+10h] [xbp-50h] BYREF
  int32_t v71; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v72; // [xsp+18h] [xbp-48h] BYREF
  int32_t v73; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v74; // [xsp+20h] [xbp-40h] BYREF
  int32_t v75; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v76; // [xsp+28h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_41841D7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, v6);
    sub_B2C35C(&AtlasManager_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v9);
    sub_B2C35C(&StringLiteral_18486/*"event_bg_little_{0}01"*/, v10);
    sub_B2C35C(&StringLiteral_18494/*"event_bg_{0}04"*/, v11);
    sub_B2C35C(&StringLiteral_18489/*"event_bg_little_{0}04"*/, v12);
    sub_B2C35C(&StringLiteral_18487/*"event_bg_little_{0}02"*/, v13);
    sub_B2C35C(&StringLiteral_18488/*"event_bg_little_{0}03"*/, v14);
    sub_B2C35C(&StringLiteral_6163/*"EventFortificationListViewPanel"*/, v15);
    sub_B2C35C(&StringLiteral_6768/*"FortificationWork"*/, v16);
    sub_B2C35C(&StringLiteral_18492/*"event_bg_{0}02"*/, v17);
    sub_B2C35C(&StringLiteral_6769/*"FortificationWorkMini"*/, v18);
    sub_B2C35C(&StringLiteral_18493/*"event_bg_{0}03"*/, v19);
    sub_B2C35C(&StringLiteral_18491/*"event_bg_{0}01"*/, v20);
    sub_B2C35C(&StringLiteral_18495/*"event_bg_{0}05"*/, v21);
    sub_B2C35C(&StringLiteral_6765/*"FortificationConfirmDialog"*/, v22);
    sub_B2C35C(&StringLiteral_6763/*"FortificationAutomaticDialog"*/, v23);
    sub_B2C35C(&StringLiteral_18490/*"event_bg_little_{0}05"*/, v24);
    sub_B2C35C(&StringLiteral_6764/*"FortificationCamera"*/, v25);
    sub_B2C35C(&StringLiteral_6766/*"FortificationOrganizationPanel"*/, v26);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_B2C35C(&StringLiteral_2199/*"AutoFortificationButton"*/, v27);
    byte_41841D7 = 1;
  }
  if ( !assetData )
    goto LABEL_29;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6764/*"FortificationCamera"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !_4__this )
    goto LABEL_29;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&_4__this->fields, this);
  v29 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2199/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v29 )
    goto LABEL_29;
  v29->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v29->fields._autoFortificationButton_k__BackingField, this);
  v30 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6766/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v30 )
    goto LABEL_29;
  v30->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v30->fields._organizationPanel_k__BackingField, this);
  v31 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v33 = System_String__Format((System_String_o *)StringLiteral_18491/*"event_bg_{0}01"*/, v32, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v33,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v31 )
    goto LABEL_29;
  v31->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v31->fields._organizationBgTex_k__BackingField, this);
  v34 = v4->fields.__4__this;
  v76 = v4->fields.eventId;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
  v36 = System_String__Format((System_String_o *)StringLiteral_18492/*"event_bg_{0}02"*/, v35, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v36,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v34 )
    goto LABEL_29;
  v34->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v34->fields._organizationBgTex2_k__BackingField, this);
  v37 = v4->fields.__4__this;
  v75 = v4->fields.eventId;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  v39 = System_String__Format((System_String_o *)StringLiteral_18493/*"event_bg_{0}03"*/, v38, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v39,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v37 )
    goto LABEL_29;
  v37->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v37->fields._organizationBgTex3_k__BackingField, this);
  v40 = v4->fields.__4__this;
  v74 = v4->fields.eventId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  v42 = System_String__Format((System_String_o *)StringLiteral_18494/*"event_bg_{0}04"*/, v41, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v42,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v40 )
    goto LABEL_29;
  v40->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v40->fields._organizationBgTex4_k__BackingField, this);
  v43 = v4->fields.__4__this;
  v73 = v4->fields.eventId;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
  v45 = System_String__Format((System_String_o *)StringLiteral_18495/*"event_bg_{0}05"*/, v44, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v45,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v43 )
    goto LABEL_29;
  v43->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v43->fields._organizationBgTex5_k__BackingField, this);
  v46 = v4->fields.__4__this;
  v72 = v4->fields.eventId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
  v48 = System_String__Format((System_String_o *)StringLiteral_18486/*"event_bg_little_{0}01"*/, v47, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v48,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v46 )
    goto LABEL_29;
  v46->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v46->fields._organizationSlotBgTex_k__BackingField, this);
  v49 = v4->fields.__4__this;
  v71 = v4->fields.eventId;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  v51 = System_String__Format((System_String_o *)StringLiteral_18487/*"event_bg_little_{0}02"*/, v50, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v51,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v49 )
    goto LABEL_29;
  v49->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v49->fields._organizationSlotBgTex2_k__BackingField, this);
  v52 = v4->fields.__4__this;
  v70 = v4->fields.eventId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  v54 = System_String__Format((System_String_o *)StringLiteral_18488/*"event_bg_little_{0}03"*/, v53, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v54,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v52 )
    goto LABEL_29;
  v52->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v52->fields._organizationSlotBgTex3_k__BackingField, this);
  v55 = v4->fields.__4__this;
  v69 = v4->fields.eventId;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  v57 = System_String__Format((System_String_o *)StringLiteral_18489/*"event_bg_little_{0}04"*/, v56, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v57,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v55 )
    goto LABEL_29;
  v55->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v55->fields._organizationSlotBgTex4_k__BackingField, this);
  v58 = v4->fields.__4__this;
  v68 = v4->fields.eventId;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
  v60 = System_String__Format((System_String_o *)StringLiteral_18490/*"event_bg_little_{0}05"*/, v59, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v60,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v58 )
    goto LABEL_29;
  v58->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B2C2F8(&v58->fields._organizationSlotBgTex5_k__BackingField, this);
  v61 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6768/*"FortificationWork"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v61 )
    goto LABEL_29;
  v61->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v61->fields._eventFortificationWorkObj_k__BackingField, this);
  v62 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6769/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v62 )
    goto LABEL_29;
  v62->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v62->fields._eventFortificationWorkMiniObj_k__BackingField, this);
  v63 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6163/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v63 )
    goto LABEL_29;
  v63->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v63->fields._eventFortificationListViewPanel_k__BackingField, this);
  v64 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6765/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v64
    || (v64->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(&v64->fields._fortificationConfirmDialog_k__BackingField, this),
        v65 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6763/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !v65)
    || (v65->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(&v65->fields._fortificationAutomaticDialog_k__BackingField, this),
        (this = (FortificationAssetManager___c__DisplayClass73_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_29:
    sub_B2C434(this, assetData);
  }
  FortificationAssetManager__AssertionCheck((FortificationAssetManager_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v67 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(v67, _9__1, 1, 0LL);
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