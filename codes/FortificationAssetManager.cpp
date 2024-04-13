void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42EBC40 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6281/*"EventUI/Prefabs/"*/, v5, v6, v7);
    byte_42EBC40 = 1;
  }
  v8 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v16 = (struct System_String_array *)v8;
  v17 = StringLiteral_6281/*"EventUI/Prefabs/"*/;
  if ( StringLiteral_6281/*"EventUI/Prefabs/"*/ )
  {
    v17 = sub_B5D684(StringLiteral_6281/*"EventUI/Prefabs/"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v26 = sub_B5D6BC(0LL);
      sub_B5D668(v26, 0LL);
    }
    v18 = (System_Int32_array **)StringLiteral_6281/*"EventUI/Prefabs/"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
  {
    v25 = sub_B5D6C8(v17);
    sub_B5D668(v25, 0LL);
  }
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  this->fields.loadAssetNames = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  __int64 v36; // x0

  if ( (byte_42EBC3D & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)finishCallback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v10, v11, v12);
    sub_B5D5C4(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v13, v14, v15);
    byte_42EBC3D = 1;
  }
  v16 = sub_B5D694(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  FortificationAssetManager___c__DisplayClass73_0___ctor((FortificationAssetManager___c__DisplayClass73_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_DWORD *)(v16 + 24) = eventId,
        *(_QWORD *)(v16 + 32) = finishCallback,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 32),
          (System_Int32_array **)finishCallback,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B5D69C(v17, v18);
  }
  if ( !loadAssetNames->max_length )
  {
    v36 = sub_B5D6C8(v17);
    sub_B5D668(v36, 0LL);
  }
  v32 = loadAssetNames->m_Items[0];
  v33 = System_Int32__ToString((int)v16 + 24, 0LL);
  v34 = System_String__Concat_44577788(v32, v33, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v16,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_42EBC3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardBgMaster___, eventId, slot, isSlotBg);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EBC3E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7

  if ( (byte_42EBC3F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42EBC3F = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_31190280(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._autoFortificationButton_k__BackingField,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationPanel_k__BackingField,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex2_k__BackingField,
    0LL,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex3_k__BackingField,
    0LL,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex4_k__BackingField,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex5_k__BackingField,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    0LL,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    0LL,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    0LL,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    0LL,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    0LL,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0LL,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0LL,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0LL,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0LL,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    0LL,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  FortificationAssetManager___c__DisplayClass73_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  struct FortificationAssetManager_o *_4__this; // x21
  struct FortificationAssetManager_o *v76; // x21
  struct FortificationAssetManager_o *v77; // x21
  struct FortificationAssetManager_o *v78; // x21
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  struct FortificationAssetManager_o *v81; // x21
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  struct FortificationAssetManager_o *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  struct FortificationAssetManager_o *v87; // x21
  Il2CppObject *v88; // x0
  System_String_o *v89; // x0
  struct FortificationAssetManager_o *v90; // x21
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  struct FortificationAssetManager_o *v93; // x21
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  struct FortificationAssetManager_o *v96; // x21
  Il2CppObject *v97; // x0
  System_String_o *v98; // x0
  struct FortificationAssetManager_o *v99; // x21
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  struct FortificationAssetManager_o *v102; // x21
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  struct FortificationAssetManager_o *v105; // x21
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  struct FortificationAssetManager_o *v108; // x21
  struct FortificationAssetManager_o *v109; // x21
  struct FortificationAssetManager_o *v110; // x21
  struct FortificationAssetManager_o *v111; // x21
  struct FortificationAssetManager_o *v112; // x21
  System_Action_o *_9__1; // x21
  int32_t v114; // w20
  int32_t v115; // [xsp+8h] [xbp-58h] BYREF
  int32_t v116; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v117; // [xsp+10h] [xbp-50h] BYREF
  int32_t v118; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v119; // [xsp+18h] [xbp-48h] BYREF
  int32_t v120; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v121; // [xsp+20h] [xbp-40h] BYREF
  int32_t v122; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v123; // [xsp+28h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42E56DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v9, v10, v11);
    sub_B5D5C4(&AtlasManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18715/*"event_bg_little_{0}01"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18723/*"event_bg_{0}04"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_18718/*"event_bg_little_{0}04"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_18716/*"event_bg_little_{0}02"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_18717/*"event_bg_little_{0}03"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_6242/*"EventFortificationListViewPanel"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_6850/*"FortificationWork"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_18721/*"event_bg_{0}02"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_6851/*"FortificationWorkMini"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_18722/*"event_bg_{0}03"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_18720/*"event_bg_{0}01"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_18724/*"event_bg_{0}05"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_6847/*"FortificationConfirmDialog"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_6845/*"FortificationAutomaticDialog"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_18719/*"event_bg_little_{0}05"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_6846/*"FortificationCamera"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_6848/*"FortificationOrganizationPanel"*/, v69, v70, v71);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_B5D5C4(&StringLiteral_2228/*"AutoFortificationButton"*/, v72, v73, v74);
    byte_42E56DA = 1;
  }
  if ( !assetData )
    goto LABEL_29;
  _4__this = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6846/*"FortificationCamera"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !_4__this )
    goto LABEL_29;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&_4__this->fields);
  v76 = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2228/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v76 )
    goto LABEL_29;
  v76->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v76->fields._autoFortificationButton_k__BackingField);
  v77 = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6848/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v77 )
    goto LABEL_29;
  v77->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v77->fields._organizationPanel_k__BackingField);
  v78 = v5->fields.__4__this;
  eventId = v5->fields.eventId;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v80 = System_String__Format((System_String_o *)StringLiteral_18720/*"event_bg_{0}01"*/, v79, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v80,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v78 )
    goto LABEL_29;
  v78->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v78->fields._organizationBgTex_k__BackingField);
  v81 = v5->fields.__4__this;
  v123 = v5->fields.eventId;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v83 = System_String__Format((System_String_o *)StringLiteral_18721/*"event_bg_{0}02"*/, v82, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v83,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v81 )
    goto LABEL_29;
  v81->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v81->fields._organizationBgTex2_k__BackingField);
  v84 = v5->fields.__4__this;
  v122 = v5->fields.eventId;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
  v86 = System_String__Format((System_String_o *)StringLiteral_18722/*"event_bg_{0}03"*/, v85, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v86,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v84 )
    goto LABEL_29;
  v84->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v84->fields._organizationBgTex3_k__BackingField);
  v87 = v5->fields.__4__this;
  v121 = v5->fields.eventId;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121);
  v89 = System_String__Format((System_String_o *)StringLiteral_18723/*"event_bg_{0}04"*/, v88, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v89,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v87 )
    goto LABEL_29;
  v87->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v87->fields._organizationBgTex4_k__BackingField);
  v90 = v5->fields.__4__this;
  v120 = v5->fields.eventId;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
  v92 = System_String__Format((System_String_o *)StringLiteral_18724/*"event_bg_{0}05"*/, v91, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v92,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v90 )
    goto LABEL_29;
  v90->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v90->fields._organizationBgTex5_k__BackingField);
  v93 = v5->fields.__4__this;
  v119 = v5->fields.eventId;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  v95 = System_String__Format((System_String_o *)StringLiteral_18715/*"event_bg_little_{0}01"*/, v94, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v95,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v93 )
    goto LABEL_29;
  v93->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v93->fields._organizationSlotBgTex_k__BackingField);
  v96 = v5->fields.__4__this;
  v118 = v5->fields.eventId;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
  v98 = System_String__Format((System_String_o *)StringLiteral_18716/*"event_bg_little_{0}02"*/, v97, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v98,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v96 )
    goto LABEL_29;
  v96->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v96->fields._organizationSlotBgTex2_k__BackingField);
  v99 = v5->fields.__4__this;
  v117 = v5->fields.eventId;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117);
  v101 = System_String__Format((System_String_o *)StringLiteral_18717/*"event_bg_little_{0}03"*/, v100, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v101,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v99 )
    goto LABEL_29;
  v99->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v99->fields._organizationSlotBgTex3_k__BackingField);
  v102 = v5->fields.__4__this;
  v116 = v5->fields.eventId;
  v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
  v104 = System_String__Format((System_String_o *)StringLiteral_18718/*"event_bg_little_{0}04"*/, v103, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v104,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v102 )
    goto LABEL_29;
  v102->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v102->fields._organizationSlotBgTex4_k__BackingField);
  v105 = v5->fields.__4__this;
  v115 = v5->fields.eventId;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
  v107 = System_String__Format((System_String_o *)StringLiteral_18719/*"event_bg_little_{0}05"*/, v106, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v107,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v105 )
    goto LABEL_29;
  v105->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B5D560(&v105->fields._organizationSlotBgTex5_k__BackingField);
  v108 = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6850/*"FortificationWork"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v108 )
    goto LABEL_29;
  v108->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v108->fields._eventFortificationWorkObj_k__BackingField);
  v109 = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6851/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v109 )
    goto LABEL_29;
  v109->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v109->fields._eventFortificationWorkMiniObj_k__BackingField);
  v110 = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6242/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v110 )
    goto LABEL_29;
  v110->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v110->fields._eventFortificationListViewPanel_k__BackingField);
  v111 = v5->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6847/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v111
    || (v111->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B5D560(&v111->fields._fortificationConfirmDialog_k__BackingField),
        v112 = v5->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6845/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        !v112)
    || (v112->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B5D560(&v112->fields._fortificationAutomaticDialog_k__BackingField),
        (this = (FortificationAssetManager___c__DisplayClass73_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(this, assetData);
  }
  FortificationAssetManager__AssertionCheck((FortificationAssetManager_o *)this, 0LL);
  _9__1 = v5->fields.__9__1;
  v114 = v5->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(v114, _9__1, 1, 0LL);
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