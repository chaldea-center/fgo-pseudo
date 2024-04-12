void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_42B3179 & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_6245/*"EventUI/Prefabs/"*/);
    byte_42B3179 = 1;
  }
  v3 = sub_B5299C(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_6245/*"EventUI/Prefabs/"*/;
  if ( StringLiteral_6245/*"EventUI/Prefabs/"*/ )
  {
    v12 = sub_B52A44(StringLiteral_6245/*"EventUI/Prefabs/"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B52A7C(0LL);
      sub_B52A28(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6245/*"EventUI/Prefabs/"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B52A88(v12);
    sub_B52A28(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x0

  if ( (byte_42B3176 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_B52984(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_42B3176 = 1;
  }
  v7 = sub_B52A54(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  FortificationAssetManager___c__DisplayClass73_0___ctor((FortificationAssetManager___c__DisplayClass73_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_B52920(
          (BattleServantConfConponent_o *)(v7 + 32),
          (System_Int32_array **)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B52A5C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
  {
    v27 = sub_B52A88(v8);
    sub_B52A28(v27, 0LL);
  }
  v23 = loadAssetNames->m_Items[0];
  v24 = System_Int32__ToString((int)v7 + 24, 0LL);
  v25 = System_String__Concat_44568316(v23, v24, 0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_42B3177 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3177 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v10);
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

  if ( (byte_42B3178 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B3178 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28377088(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._autoFortificationButton_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationPanel_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex2_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex3_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex4_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationBgTex5_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  int32_t v45; // [xsp+8h] [xbp-58h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v47; // [xsp+10h] [xbp-50h] BYREF
  int32_t v48; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t v49; // [xsp+18h] [xbp-48h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-44h] BYREF
  int32_t v51; // [xsp+20h] [xbp-40h] BYREF
  int32_t v52; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v53; // [xsp+28h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42ACE22 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_B52984(&StringLiteral_18620/*"event_bg_little_{0}01"*/);
    sub_B52984(&StringLiteral_18628/*"event_bg_{0}04"*/);
    sub_B52984(&StringLiteral_18623/*"event_bg_little_{0}04"*/);
    sub_B52984(&StringLiteral_18621/*"event_bg_little_{0}02"*/);
    sub_B52984(&StringLiteral_18622/*"event_bg_little_{0}03"*/);
    sub_B52984(&StringLiteral_6206/*"EventFortificationListViewPanel"*/);
    sub_B52984(&StringLiteral_6814/*"FortificationWork"*/);
    sub_B52984(&StringLiteral_18626/*"event_bg_{0}02"*/);
    sub_B52984(&StringLiteral_6815/*"FortificationWorkMini"*/);
    sub_B52984(&StringLiteral_18627/*"event_bg_{0}03"*/);
    sub_B52984(&StringLiteral_18625/*"event_bg_{0}01"*/);
    sub_B52984(&StringLiteral_18629/*"event_bg_{0}05"*/);
    sub_B52984(&StringLiteral_6811/*"FortificationConfirmDialog"*/);
    sub_B52984(&StringLiteral_6809/*"FortificationAutomaticDialog"*/);
    sub_B52984(&StringLiteral_18624/*"event_bg_little_{0}05"*/);
    sub_B52984(&StringLiteral_6810/*"FortificationCamera"*/);
    sub_B52984(&StringLiteral_6812/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_B52984(&StringLiteral_2223/*"AutoFortificationButton"*/);
    byte_42ACE22 = 1;
  }
  if ( !assetData )
    goto LABEL_29;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6810/*"FortificationCamera"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !_4__this )
    goto LABEL_29;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(&_4__this->fields);
  v6 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2223/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v6 )
    goto LABEL_29;
  v6->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(&v6->fields._autoFortificationButton_k__BackingField);
  v7 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6812/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v7 )
    goto LABEL_29;
  v7->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(&v7->fields._organizationPanel_k__BackingField);
  v8 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v10 = System_String__Format((System_String_o *)StringLiteral_18625/*"event_bg_{0}01"*/, v9, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v10,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v8 )
    goto LABEL_29;
  v8->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v8->fields._organizationBgTex_k__BackingField);
  v11 = v4->fields.__4__this;
  v53 = v4->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v13 = System_String__Format((System_String_o *)StringLiteral_18626/*"event_bg_{0}02"*/, v12, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v13,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v11 )
    goto LABEL_29;
  v11->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v11->fields._organizationBgTex2_k__BackingField);
  v14 = v4->fields.__4__this;
  v52 = v4->fields.eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v16 = System_String__Format((System_String_o *)StringLiteral_18627/*"event_bg_{0}03"*/, v15, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v16,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v14 )
    goto LABEL_29;
  v14->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v14->fields._organizationBgTex3_k__BackingField);
  v17 = v4->fields.__4__this;
  v51 = v4->fields.eventId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v19 = System_String__Format((System_String_o *)StringLiteral_18628/*"event_bg_{0}04"*/, v18, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v19,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v17 )
    goto LABEL_29;
  v17->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v17->fields._organizationBgTex4_k__BackingField);
  v20 = v4->fields.__4__this;
  v50 = v4->fields.eventId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v22 = System_String__Format((System_String_o *)StringLiteral_18629/*"event_bg_{0}05"*/, v21, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v22,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v20 )
    goto LABEL_29;
  v20->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v20->fields._organizationBgTex5_k__BackingField);
  v23 = v4->fields.__4__this;
  v49 = v4->fields.eventId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v25 = System_String__Format((System_String_o *)StringLiteral_18620/*"event_bg_little_{0}01"*/, v24, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v25,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v23 )
    goto LABEL_29;
  v23->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v23->fields._organizationSlotBgTex_k__BackingField);
  v26 = v4->fields.__4__this;
  v48 = v4->fields.eventId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v28 = System_String__Format((System_String_o *)StringLiteral_18621/*"event_bg_little_{0}02"*/, v27, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v28,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v26 )
    goto LABEL_29;
  v26->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v26->fields._organizationSlotBgTex2_k__BackingField);
  v29 = v4->fields.__4__this;
  v47 = v4->fields.eventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v31 = System_String__Format((System_String_o *)StringLiteral_18622/*"event_bg_little_{0}03"*/, v30, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v31,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v29 )
    goto LABEL_29;
  v29->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v29->fields._organizationSlotBgTex3_k__BackingField);
  v32 = v4->fields.__4__this;
  v46 = v4->fields.eventId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v34 = System_String__Format((System_String_o *)StringLiteral_18623/*"event_bg_little_{0}04"*/, v33, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v34,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v32 )
    goto LABEL_29;
  v32->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v32->fields._organizationSlotBgTex4_k__BackingField);
  v35 = v4->fields.__4__this;
  v45 = v4->fields.eventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v37 = System_String__Format((System_String_o *)StringLiteral_18624/*"event_bg_little_{0}05"*/, v36, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                v37,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v35 )
    goto LABEL_29;
  v35->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_B52920(&v35->fields._organizationSlotBgTex5_k__BackingField);
  v38 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6814/*"FortificationWork"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v38 )
    goto LABEL_29;
  v38->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(&v38->fields._eventFortificationWorkObj_k__BackingField);
  v39 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6815/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v39 )
    goto LABEL_29;
  v39->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(&v39->fields._eventFortificationWorkMiniObj_k__BackingField);
  v40 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6206/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v40 )
    goto LABEL_29;
  v40->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(&v40->fields._eventFortificationListViewPanel_k__BackingField);
  v41 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6811/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v41
    || (v41->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B52920(&v41->fields._fortificationConfirmDialog_k__BackingField),
        v42 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6809/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952),
        !v42)
    || (v42->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B52920(&v42->fields._fortificationAutomaticDialog_k__BackingField),
        (this = (FortificationAssetManager___c__DisplayClass73_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(this, assetData);
  }
  FortificationAssetManager__AssertionCheck((FortificationAssetManager_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v44 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B52920(&v4->fields.__9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28376908(v44, _9__1, 1, 0LL);
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