void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
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

  if ( (byte_40FA75D & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_6184, v4);
    byte_40FA75D = 1;
  }
  v5 = sub_B17014(string___TypeInfo, 1LL, v2);
  if ( !v5 )
    sub_B170D4();
  v12 = (struct System_String_array *)v5;
  v13 = StringLiteral_6184;
  if ( StringLiteral_6184 )
  {
    v13 = sub_B170BC(StringLiteral_6184, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    v14 = (System_Int32_array **)StringLiteral_6184;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    sub_B17100(v13, v14, v6);
    sub_B170A0();
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B16F98(
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
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
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v28; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  AssetLoader_LoadEndDataHandler_o *v35; // x21

  if ( (byte_40FA75A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v9);
    sub_B16FFC(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v10);
    byte_40FA75A = 1;
  }
  v11 = sub_B170CC(
          FortificationAssetManager___c__DisplayClass73_0_TypeInfo,
          *(_QWORD *)&eventId,
          finishCallback,
          method,
          v4);
  FortificationAssetManager___c__DisplayClass73_0___ctor((FortificationAssetManager___c__DisplayClass73_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_DWORD *)(v11 + 24) = eventId,
        *(_QWORD *)(v11 + 32) = finishCallback,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 32),
          (System_Int32_array **)finishCallback,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B170D4();
  }
  if ( !loadAssetNames->max_length )
  {
    sub_B17100(v24, v25, v26);
    sub_B170A0();
  }
  v28 = loadAssetNames->m_Items[0];
  v29 = System_Int32__ToString((int)v11 + 24, 0LL);
  v30 = System_String__Concat_43743732(v28, v29, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v11,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v35, 1, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventRewardBgMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_40FA75B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardBgMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA75B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRewardBgMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  switch ( EventRewardBgMaster__GetEventRewardSlotBgId(MasterData_WarQuestSelectionMaster, eventId, slot, 0LL) )
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

  if ( (byte_40FA75C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FA75C = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28584740(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._autoFortificationButton_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationPanel_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex2_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex3_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex4_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex5_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct FortificationAssetManager_o *v36; // x21
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct FortificationAssetManager_o *v44; // x21
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct FortificationAssetManager_o *v52; // x21
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct FortificationAssetManager_o *v62; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct FortificationAssetManager_o *v72; // x21
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct FortificationAssetManager_o *v82; // x21
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct FortificationAssetManager_o *v92; // x21
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  System_Int32_array **v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct FortificationAssetManager_o *v102; // x21
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  System_Int32_array **v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  struct FortificationAssetManager_o *v112; // x21
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct FortificationAssetManager_o *v122; // x21
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  struct FortificationAssetManager_o *v132; // x21
  Il2CppObject *v133; // x0
  System_String_o *v134; // x0
  System_Int32_array **v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  struct FortificationAssetManager_o *v142; // x21
  Il2CppObject *v143; // x0
  System_String_o *v144; // x0
  System_Int32_array **v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  struct FortificationAssetManager_o *v152; // x21
  System_Int32_array **v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  struct FortificationAssetManager_o *v160; // x21
  System_Int32_array **v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct FortificationAssetManager_o *v168; // x21
  System_Int32_array **v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  struct FortificationAssetManager_o *v176; // x21
  System_Int32_array **v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  struct FortificationAssetManager_o *v184; // x21
  System_Int32_array **v185; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  FortificationAssetManager_o *v192; // x0
  __int64 v193; // x1
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
  System_Action_o *_9__1; // x21
  int32_t v198; // w20
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  int32_t v205; // [xsp+8h] [xbp-58h] BYREF
  int32_t v206; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v207; // [xsp+10h] [xbp-50h] BYREF
  int32_t v208; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v209; // [xsp+18h] [xbp-48h] BYREF
  int32_t v210; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v211; // [xsp+20h] [xbp-40h] BYREF
  int32_t v212; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v213; // [xsp+28h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40F68C4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v5);
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, v6);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v9);
    sub_B16FFC(&StringLiteral_18417, v10);
    sub_B16FFC(&StringLiteral_18425, v11);
    sub_B16FFC(&StringLiteral_18420, v12);
    sub_B16FFC(&StringLiteral_18418, v13);
    sub_B16FFC(&StringLiteral_18419, v14);
    sub_B16FFC(&StringLiteral_6145, v15);
    sub_B16FFC(&StringLiteral_6744, v16);
    sub_B16FFC(&StringLiteral_18423, v17);
    sub_B16FFC(&StringLiteral_6745, v18);
    sub_B16FFC(&StringLiteral_18424, v19);
    sub_B16FFC(&StringLiteral_18422, v20);
    sub_B16FFC(&StringLiteral_18426, v21);
    sub_B16FFC(&StringLiteral_6741, v22);
    sub_B16FFC(&StringLiteral_6739, v23);
    sub_B16FFC(&StringLiteral_18421, v24);
    sub_B16FFC(&StringLiteral_6740, v25);
    sub_B16FFC(&StringLiteral_6742, v26);
    sub_B16FFC(&StringLiteral_2193, v27);
    byte_40F68C4 = 1;
  }
  if ( !assetData )
    goto LABEL_29;
  _4__this = this->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_6740,
                                                            (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !_4__this )
    goto LABEL_29;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields,
    Object_WarBoardWaitTimeSetting,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.__4__this;
  v37 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_2193,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v36 )
    goto LABEL_29;
  v36->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->fields._autoFortificationButton_k__BackingField,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = this->fields.__4__this;
  v45 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_6742,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v44 )
    goto LABEL_29;
  v44->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v44->fields._organizationPanel_k__BackingField,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = this->fields.__4__this;
  eventId = this->fields.eventId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v54 = System_String__Format((System_String_o *)StringLiteral_18422, v53, 0LL);
  v55 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 v54,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v52 )
    goto LABEL_29;
  v52->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v52->fields._organizationBgTex_k__BackingField,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = this->fields.__4__this;
  v213 = this->fields.eventId;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v213);
  v64 = System_String__Format((System_String_o *)StringLiteral_18423, v63, 0LL);
  v65 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 v64,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v62 )
    goto LABEL_29;
  v62->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)v65;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v62->fields._organizationBgTex2_k__BackingField,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = this->fields.__4__this;
  v212 = this->fields.eventId;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v212);
  v74 = System_String__Format((System_String_o *)StringLiteral_18424, v73, 0LL);
  v75 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 v74,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v72 )
    goto LABEL_29;
  v72->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v72->fields._organizationBgTex3_k__BackingField,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = this->fields.__4__this;
  v211 = this->fields.eventId;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v211);
  v84 = System_String__Format((System_String_o *)StringLiteral_18425, v83, 0LL);
  v85 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 v84,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v82 )
    goto LABEL_29;
  v82->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v82->fields._organizationBgTex4_k__BackingField,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v92 = this->fields.__4__this;
  v210 = this->fields.eventId;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v210);
  v94 = System_String__Format((System_String_o *)StringLiteral_18426, v93, 0LL);
  v95 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 v94,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v92 )
    goto LABEL_29;
  v92->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)v95;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->fields._organizationBgTex5_k__BackingField,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = this->fields.__4__this;
  v209 = this->fields.eventId;
  v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v209);
  v104 = System_String__Format((System_String_o *)StringLiteral_18417, v103, 0LL);
  v105 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  v104,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v102 )
    goto LABEL_29;
  v102->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)v105;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v102->fields._organizationSlotBgTex_k__BackingField,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v112 = this->fields.__4__this;
  v208 = this->fields.eventId;
  v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208);
  v114 = System_String__Format((System_String_o *)StringLiteral_18418, v113, 0LL);
  v115 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  v114,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v112 )
    goto LABEL_29;
  v112->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)v115;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v112->fields._organizationSlotBgTex2_k__BackingField,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = this->fields.__4__this;
  v207 = this->fields.eventId;
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207);
  v124 = System_String__Format((System_String_o *)StringLiteral_18419, v123, 0LL);
  v125 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  v124,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v122 )
    goto LABEL_29;
  v122->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)v125;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v122->fields._organizationSlotBgTex3_k__BackingField,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  v132 = this->fields.__4__this;
  v206 = this->fields.eventId;
  v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206);
  v134 = System_String__Format((System_String_o *)StringLiteral_18420, v133, 0LL);
  v135 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  v134,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v132 )
    goto LABEL_29;
  v132->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)v135;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v132->fields._organizationSlotBgTex4_k__BackingField,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  v142 = this->fields.__4__this;
  v205 = this->fields.eventId;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
  v144 = System_String__Format((System_String_o *)StringLiteral_18421, v143, 0LL);
  v145 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  v144,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v142 )
    goto LABEL_29;
  v142->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)v145;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v142->fields._organizationSlotBgTex5_k__BackingField,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v152 = this->fields.__4__this;
  v153 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_6744,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v152 )
    goto LABEL_29;
  v152->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)v153;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v152->fields._eventFortificationWorkObj_k__BackingField,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v160 = this->fields.__4__this;
  v161 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_6745,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v160 )
    goto LABEL_29;
  v160->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)v161;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v160->fields._eventFortificationWorkMiniObj_k__BackingField,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  v168 = this->fields.__4__this;
  v169 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_6145,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v168 )
    goto LABEL_29;
  v168->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)v169;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v168->fields._eventFortificationListViewPanel_k__BackingField,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v176 = this->fields.__4__this;
  v177 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_6741,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v176
    || (v176->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v177,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v176->fields._fortificationConfirmDialog_k__BackingField,
          v177,
          v178,
          v179,
          v180,
          v181,
          v182,
          v183),
        v184 = this->fields.__4__this,
        v185 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                        assetData,
                                        (System_String_o *)StringLiteral_6739,
                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        !v184)
    || (v184->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v185,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v184->fields._fortificationAutomaticDialog_k__BackingField,
          v185,
          v186,
          v187,
          v188,
          v189,
          v190,
          v191),
        (v192 = this->fields.__4__this) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  FortificationAssetManager__AssertionCheck(v192, 0LL);
  _9__1 = this->fields.__9__1;
  v198 = this->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v193, v194, v195, v196);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v199,
      v200,
      v201,
      v202,
      v203,
      v204);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(v198, _9__1, 1, 0LL);
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