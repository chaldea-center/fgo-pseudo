void FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_array *v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593259B & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_6520/*"EventUI/Prefabs/"*/);
    byte_593259B = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 1);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_21FFED4(v3);
  v12 = StringLiteral_6520/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6520/*"EventUI/Prefabs/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetNames,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2

  if ( (byte_5932598 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__);
    sub_21FFC50(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
    byte_5932598 = 1;
  }
  v7 = sub_21FFEBC(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v7 + 32),
          (int32_t)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_21FFECC(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_21FFED4(v8);
  v23 = loadAssetNames->m_Items[0];
  v24 = System_Int32__ToString((int)v7 + 24, 0);
  v25 = System_String__Concat_75438412(v23, v24, 0);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27, v28);
  AssetManager__loadAssetStorage(v25, v26, 1, 0, 0);
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
  int32_t EventRewardSlotBgId; // w0
  UnityEngine_Texture2D_o **p_organizationSlotBgTex_k__BackingField; // x8

  if ( (byte_5932599 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRewardBgMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932599 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v10);
  }
  EventRewardSlotBgId = EventRewardBgMaster__GetEventRewardSlotBgId((EventRewardBgMaster_o *)Instance, eventId, slot, 0);
  if ( EventRewardSlotBgId <= 8040002 )
  {
    if ( EventRewardSlotBgId != 8040002 )
    {
LABEL_14:
      if ( isSlotBg )
        p_organizationSlotBgTex_k__BackingField = &this->fields._organizationSlotBgTex_k__BackingField;
      else
        p_organizationSlotBgTex_k__BackingField = &this->fields._organizationBgTex_k__BackingField;
      return *p_organizationSlotBgTex_k__BackingField;
    }
    if ( isSlotBg )
      p_organizationSlotBgTex_k__BackingField = &this->fields._organizationSlotBgTex2_k__BackingField;
    else
      p_organizationSlotBgTex_k__BackingField = &this->fields._organizationBgTex2_k__BackingField;
  }
  else
  {
    switch ( EventRewardSlotBgId )
    {
      case 8040003:
        if ( isSlotBg )
          p_organizationSlotBgTex_k__BackingField = &this->fields._organizationSlotBgTex3_k__BackingField;
        else
          p_organizationSlotBgTex_k__BackingField = &this->fields._organizationBgTex3_k__BackingField;
        break;
      case 8040004:
        if ( isSlotBg )
          p_organizationSlotBgTex_k__BackingField = &this->fields._organizationSlotBgTex4_k__BackingField;
        else
          p_organizationSlotBgTex_k__BackingField = &this->fields._organizationBgTex4_k__BackingField;
        break;
      case 8040005:
        if ( isSlotBg )
          p_organizationSlotBgTex_k__BackingField = &this->fields._organizationSlotBgTex5_k__BackingField;
        else
          p_organizationSlotBgTex_k__BackingField = &this->fields._organizationBgTex5_k__BackingField;
        return *p_organizationSlotBgTex_k__BackingField;
      default:
        goto LABEL_14;
    }
  }
  return *p_organizationSlotBgTex_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void FortificationAssetManager__Release(FortificationAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7

  if ( (byte_593259A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593259A = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
  AtlasManager__ReleaseEventUI_47538200(eventId, 0);
  this->fields._fortificationCamera_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v5, v6, v7, v8, v9, v10);
  this->fields._autoFortificationButton_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._autoFortificationButton_k__BackingField,
    0,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._organizationPanel_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationPanel_k__BackingField,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._organizationBgTex_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._organizationBgTex2_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex2_k__BackingField,
    0,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._organizationBgTex3_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex3_k__BackingField,
    0,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._organizationBgTex4_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex4_k__BackingField,
    0,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._organizationBgTex5_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex5_k__BackingField,
    0,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._organizationSlotBgTex_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    0,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._organizationSlotBgTex2_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    0,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._organizationSlotBgTex3_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    0,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._organizationSlotBgTex4_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    0,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._organizationSlotBgTex5_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    0,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._eventFortificationWorkObj_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._fortificationConfirmDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    0,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._autoFortificationButton_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._autoFortificationButton_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._fortificationCamera_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationBgTex_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationBgTex2_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex2_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationBgTex3_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex3_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationBgTex4_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex4_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationBgTex5_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationBgTex5_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationPanel_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationPanel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct FortificationAssetManager_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct FortificationAssetManager_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct FortificationAssetManager_o *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct FortificationAssetManager_o *v35; // x21
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct FortificationAssetManager_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct FortificationAssetManager_o *v53; // x21
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct FortificationAssetManager_o *v62; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct FortificationAssetManager_o *v71; // x21
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct FortificationAssetManager_o *v80; // x21
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct FortificationAssetManager_o *v89; // x21
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct FortificationAssetManager_o *v98; // x21
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct FortificationAssetManager_o *v107; // x21
  Il2CppObject *v108; // x0
  System_String_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  struct FortificationAssetManager_o *v116; // x21
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  struct FortificationAssetManager_o *v123; // x21
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  struct FortificationAssetManager_o *v130; // x21
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  struct FortificationAssetManager_o *v137; // x21
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  struct FortificationAssetManager_o *v144; // x21
  System_String_o *v145; // x2
  System_String_o *v146; // x3
  int32_t v147; // w4
  int32_t v148; // w5
  bool v149; // w6
  bool v150; // w7
  __int64 v151; // x2
  System_Action_o *_9__1; // x21
  int32_t v153; // w20
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  int32_t v160; // [xsp+8h] [xbp-68h] BYREF
  int32_t v161; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v162; // [xsp+10h] [xbp-60h] BYREF
  int32_t v163; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v164; // [xsp+18h] [xbp-58h] BYREF
  int32_t v165; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v166; // [xsp+20h] [xbp-50h] BYREF
  int32_t v167; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v168; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_593259C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__);
    sub_21FFC50(&StringLiteral_20012/*"event_bg_little_{0}01"*/);
    sub_21FFC50(&StringLiteral_20020/*"event_bg_{0}04"*/);
    sub_21FFC50(&StringLiteral_20015/*"event_bg_little_{0}04"*/);
    sub_21FFC50(&StringLiteral_20013/*"event_bg_little_{0}02"*/);
    sub_21FFC50(&StringLiteral_20014/*"event_bg_little_{0}03"*/);
    sub_21FFC50(&StringLiteral_6468/*"EventFortificationListViewPanel"*/);
    sub_21FFC50(&StringLiteral_7116/*"FortificationWork"*/);
    sub_21FFC50(&StringLiteral_20018/*"event_bg_{0}02"*/);
    sub_21FFC50(&StringLiteral_7117/*"FortificationWorkMini"*/);
    sub_21FFC50(&StringLiteral_20019/*"event_bg_{0}03"*/);
    sub_21FFC50(&StringLiteral_20017/*"event_bg_{0}01"*/);
    sub_21FFC50(&StringLiteral_20021/*"event_bg_{0}05"*/);
    sub_21FFC50(&StringLiteral_7112/*"FortificationConfirmDialog"*/);
    sub_21FFC50(&StringLiteral_7110/*"FortificationAutomaticDialog"*/);
    sub_21FFC50(&StringLiteral_20016/*"event_bg_little_{0}05"*/);
    sub_21FFC50(&StringLiteral_7111/*"FortificationCamera"*/);
    sub_21FFC50(&StringLiteral_7114/*"FortificationOrganizationPanel"*/);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_21FFC50(&StringLiteral_2599/*"AutoFortificationButton"*/);
    byte_593259C = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_7111/*"FortificationCamera"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields, (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2599/*"AutoFortificationButton"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v12 )
    goto LABEL_28;
  v12->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields._autoFortificationButton_k__BackingField,
    (int32_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_7114/*"FortificationOrganizationPanel"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v19 )
    goto LABEL_28;
  v19->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->fields._organizationPanel_k__BackingField,
    (int32_t)this,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
  v28 = System_String__Format((System_String_o *)StringLiteral_20017/*"event_bg_{0}01"*/, v27, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v28,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v26 )
    goto LABEL_28;
  v26->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v26->fields._organizationBgTex_k__BackingField,
    (int32_t)this,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = v4->fields.__4__this;
  v168 = v4->fields.eventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v168);
  v37 = System_String__Format((System_String_o *)StringLiteral_20018/*"event_bg_{0}02"*/, v36, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v37,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v35 )
    goto LABEL_28;
  v35->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v35->fields._organizationBgTex2_k__BackingField,
    (int32_t)this,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = v4->fields.__4__this;
  v167 = v4->fields.eventId;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v167);
  v46 = System_String__Format((System_String_o *)StringLiteral_20019/*"event_bg_{0}03"*/, v45, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v46,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v44 )
    goto LABEL_28;
  v44->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v44->fields._organizationBgTex3_k__BackingField,
    (int32_t)this,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = v4->fields.__4__this;
  v166 = v4->fields.eventId;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v166);
  v55 = System_String__Format((System_String_o *)StringLiteral_20020/*"event_bg_{0}04"*/, v54, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v55,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v53 )
    goto LABEL_28;
  v53->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v53->fields._organizationBgTex4_k__BackingField,
    (int32_t)this,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = v4->fields.__4__this;
  v165 = v4->fields.eventId;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v165);
  v64 = System_String__Format((System_String_o *)StringLiteral_20021/*"event_bg_{0}05"*/, v63, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v64,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v62 )
    goto LABEL_28;
  v62->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v62->fields._organizationBgTex5_k__BackingField,
    (int32_t)this,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = v4->fields.__4__this;
  v164 = v4->fields.eventId;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v164);
  v73 = System_String__Format((System_String_o *)StringLiteral_20012/*"event_bg_little_{0}01"*/, v72, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v73,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v71 )
    goto LABEL_28;
  v71->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v71->fields._organizationSlotBgTex_k__BackingField,
    (int32_t)this,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = v4->fields.__4__this;
  v163 = v4->fields.eventId;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v163);
  v82 = System_String__Format((System_String_o *)StringLiteral_20013/*"event_bg_little_{0}02"*/, v81, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v82,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v80 )
    goto LABEL_28;
  v80->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v80->fields._organizationSlotBgTex2_k__BackingField,
    (int32_t)this,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = v4->fields.__4__this;
  v162 = v4->fields.eventId;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v162);
  v91 = System_String__Format((System_String_o *)StringLiteral_20014/*"event_bg_little_{0}03"*/, v90, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v91,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v89 )
    goto LABEL_28;
  v89->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v89->fields._organizationSlotBgTex3_k__BackingField,
    (int32_t)this,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  v98 = v4->fields.__4__this;
  v161 = v4->fields.eventId;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v161);
  v100 = System_String__Format((System_String_o *)StringLiteral_20015/*"event_bg_little_{0}04"*/, v99, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v100,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v98 )
    goto LABEL_28;
  v98->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v98->fields._organizationSlotBgTex4_k__BackingField,
    (int32_t)this,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v107 = v4->fields.__4__this;
  v160 = v4->fields.eventId;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v160);
  v109 = System_String__Format((System_String_o *)StringLiteral_20016/*"event_bg_little_{0}05"*/, v108, 0);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                v109,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
  if ( !v107 )
    goto LABEL_28;
  v107->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v107->fields._organizationSlotBgTex5_k__BackingField,
    (int32_t)this,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v116 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_7116/*"FortificationWork"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v116 )
    goto LABEL_28;
  v116->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v116->fields._eventFortificationWorkObj_k__BackingField,
    (int32_t)this,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  v123 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_7117/*"FortificationWorkMini"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v123 )
    goto LABEL_28;
  v123->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v123->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int32_t)this,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v130 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6468/*"EventFortificationListViewPanel"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v130 )
    goto LABEL_28;
  v130->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v130->fields._eventFortificationListViewPanel_k__BackingField,
    (int32_t)this,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  v137 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_7112/*"FortificationConfirmDialog"*/,
                                                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v137
    || (v137->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v137->fields._fortificationConfirmDialog_k__BackingField,
          (int32_t)this,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143),
        v144 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__58323140(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_7110/*"FortificationAutomaticDialog"*/,
                                                                      (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112),
        !v144)
    || (v144->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v144->fields._fortificationAutomaticDialog_k__BackingField,
          (int32_t)this,
          v145,
          v146,
          v147,
          v148,
          v149,
          v150),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_21FFECC(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v153 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1,
      (int32_t)_9__1,
      v154,
      v155,
      v156,
      v157,
      v158,
      v159);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, assetData, v151);
  AtlasManager__LoadEventUI_47538036(v153, _9__1, 1, 0);
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