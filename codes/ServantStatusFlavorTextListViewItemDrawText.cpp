void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4219D07 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1);
    byte_4219D07 = 1;
  }
  ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 154;
  ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -83;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  System_Int32_array **v31; // x1
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x20
  __int64 v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x20
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x1
  __int64 v94; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v95; // x20
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7

  if ( (byte_4219D06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16745/*"bg(Clone)/bg10500"*/, v11);
    sub_B0D8A4(&StringLiteral_13199/*"SummonBgRoot"*/, v12);
    sub_B0D8A4(&StringLiteral_13347/*"SystemUICamera"*/, v13);
    sub_B0D8A4(&StringLiteral_2815/*"Bg/10500"*/, v14);
    sub_B0D8A4(&StringLiteral_6075/*"EquipGraphListMenuPrefab(Clone)"*/, v15);
    sub_B0D8A4(&StringLiteral_12769/*"ServantStatusDialogPrefab(Clone)"*/, v16);
    sub_B0D8A4(&StringLiteral_2887/*"BtnBg"*/, v17);
    sub_B0D8A4(&StringLiteral_14576/*"TouchCamera"*/, v18);
    sub_B0D8A4(&StringLiteral_3972/*"ChoiceButton"*/, v19);
    sub_B0D8A4(&StringLiteral_2818/*"BgCamera"*/, v20);
    sub_B0D8A4(&StringLiteral_4199/*"CommonUI"*/, v21);
    sub_B0D8A4(&StringLiteral_6832/*"FrontCommonUICamera"*/, v22);
    sub_B0D8A4(&StringLiteral_16744/*"bg"*/, v23);
    sub_B0D8A4(&StringLiteral_4206/*"CommonUICamera"*/, v24);
    sub_B0D8A4(&StringLiteral_13215/*"SupportServantEquipListMenuPrefab(Clone)"*/, v25);
    sub_B0D8A4(&StringLiteral_8597/*"LockButton"*/, v26);
    sub_B0D8A4(&StringLiteral_12753/*"ServantEquipStatusDialogPrefab(Clone)"*/, v27);
    sub_B0D8A4(&StringLiteral_13117/*"StatusButton"*/, v28);
    sub_B0D8A4(&StringLiteral_19563/*"img_index_02"*/, v29);
    sub_B0D8A4(&StringLiteral_7028/*"Ground/Field/bg(Clone)"*/, v30);
    byte_4219D06 = 1;
  }
  v31 = (System_Int32_array **)StringLiteral_19563/*"img_index_02"*/;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = StringLiteral_19563/*"img_index_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.BASE_SPRITE_ADD_POS_Y, v31, v2, v3, v4, v5, v6, v7);
  this->fields.ambientLight.fields.r = -45.0;
  *(_QWORD *)&this->fields.MESSAGE_LABEL_ADD_POS_Y = 0xC25C0000C2080000LL;
  v32 = (System_Int32_array **)StringLiteral_4199/*"CommonUI"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_4199/*"CommonUI"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.BATTLE_BG_OBJECT, v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Int32_array **)StringLiteral_7028/*"Ground/Field/bg(Clone)"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_7028/*"Ground/Field/bg(Clone)"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_OBJECT, v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Int32_array **)StringLiteral_16745/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_16745/*"bg(Clone)/bg10500"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_ROOT, v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Int32_array **)StringLiteral_13199/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_13199/*"SummonBgRoot"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_ASSET_NAME, v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Int32_array **)StringLiteral_2815/*"Bg/10500"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_2815/*"Bg/10500"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v60, v61, v62, v63, v64, v65, v66);
  v67 = (System_Int32_array **)StringLiteral_16744/*"bg"*/;
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)StringLiteral_16744/*"bg"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.INACTIVE_PREFABS, v67, v68, v69, v70, v71, v72, v73);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v74,
                                                                                                  v75);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v76 )
    goto LABEL_7;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v76,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_12769/*"ServantStatusDialogPrefab(Clone)"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v76,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_12753/*"ServantEquipStatusDialogPrefab(Clone)"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v76,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6075/*"EquipGraphListMenuPrefab(Clone)"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v76,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13215/*"SupportServantEquipListMenuPrefab(Clone)"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v76;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SCRIPT_CAMERAS,
    (System_Int32_array **)v76,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v84,
                                                                                                  v85);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v86,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v86 )
    goto LABEL_7;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v86,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2818/*"BgCamera"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v86,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_4206/*"CommonUICamera"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v86,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6832/*"FrontCommonUICamera"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v86,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13347/*"SystemUICamera"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v86,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_14576/*"TouchCamera"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v86;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.TARGET_BUTTON_NAME,
    (System_Int32_array **)v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v95 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v93,
                                                                                                  v94);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v95,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v95 )
LABEL_7:
    sub_B0D97C(v77);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2887/*"BtnBg"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13117/*"StatusButton"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_8597/*"LockButton"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_3972/*"ChoiceButton"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.baseButton = (struct UICommonButton_o *)v95;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseButton,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  LOBYTE(this[1].klass) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__Awake(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText__GetKind(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__OnClickPlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  __int64 v21; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SCRIPT_CAMERAS; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_GameObject_o *v41; // x23
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x24
  System_Collections_Generic_List_Camera__o **v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int max_length; // w8
  unsigned int v54; // w26
  Il2CppClass **v55; // x8
  UnityEngine_Behaviour_o *v56; // x24
  UnityEngine_GameObject_o *v57; // x22
  struct System_String_o *Deep; // x0
  struct System_String_o **p_COMMON_UI; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Object_o *v66; // x24
  struct UnityEngine_GameObject_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *v74; // x22
  const MethodInfo *v75; // x3
  UnityEngine_Object_o *summonBgRoot; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  System_String_o *SUMMON_BG_OBJECT_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v80; // x21
  __int64 v81; // x0
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4219D03 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Camera___TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Camera__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Camera___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_Camera__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&SoundManager_TypeInfo, v18);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__, v19);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, v20);
    byte_4219D03 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v21 = sub_B0D974(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, method, v2);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_55;
  *(_QWORD *)(v21 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  if ( HIDWORD(this[1].klass) && !LOBYTE(this->fields.ambientLight.fields.g) )
  {
    LOBYTE(this->fields.ambientLight.fields.g) = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v30 = (UnityEngine_Camera_array *)sub_B0D8BC(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v30, 0LL);
    v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    v31,
                                                                                                    v32);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v33,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v21 + 32) = v33;
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v21 + 32);
    sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
    SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SCRIPT_CAMERAS;
    if ( !SCRIPT_CAMERAS )
      goto LABEL_55;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v82,
      SCRIPT_CAMERAS,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v83 = v82;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v83,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v41 = UnityEngine_GameObject__Find((System_String_o *)v83.fields.current, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v41, 0, v42);
        if ( !*v34 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *v34,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v83,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_Camera__TypeInfo,
                                                                                                    v43,
                                                                                                    v44);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v45,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v21 + 24) = v45;
    v46 = (System_Collections_Generic_List_Camera__o **)(v21 + 24);
    sub_B0D840((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)v45, v47, v48, v49, v50, v51, v52);
    if ( !v30 )
      goto LABEL_55;
    max_length = v30->max_length;
    if ( max_length >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( v54 >= max_length )
        {
          v81 = sub_B0D9A8(SCRIPT_CAMERAS);
          sub_B0D948(v81, 0LL);
        }
        v55 = &v30->obj.klass + (int)v54;
        v56 = (UnityEngine_Behaviour_o *)v55[4];
        if ( !v56 )
          break;
        SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55[4], 0LL);
        if ( !SCRIPT_CAMERAS )
          break;
        SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)SCRIPT_CAMERAS, 0LL);
        if ( !this->fields.TARGET_BUTTON_NAME )
          break;
        SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains((System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.TARGET_BUTTON_NAME, (WarBoardManager_TaskList_o *)SCRIPT_CAMERAS, (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)SCRIPT_CAMERAS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v56, 0, 0LL);
          SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*v46;
          if ( !*v46 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SCRIPT_CAMERAS,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Camera__Add__);
        }
        max_length = v30->max_length;
        if ( (int)++v54 >= max_length )
          goto LABEL_29;
      }
LABEL_55:
      sub_B0D97C(SCRIPT_CAMERAS);
    }
LABEL_29:
    v57 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
    {
      Deep = (struct System_String_o *)GameObjectExtensions__FindDeep(v57, this->fields.SUMMON_BG_ASSET_NAME, 1, 0LL);
      p_COMMON_UI = &this->fields.COMMON_UI;
      this->fields.COMMON_UI = Deep;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.COMMON_UI,
        (System_Int32_array **)Deep,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    else
    {
      p_COMMON_UI = &this->fields.COMMON_UI;
    }
    v66 = (UnityEngine_Object_o *)*p_COMMON_UI;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
    {
      SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_COMMON_UI;
      if ( !*p_COMMON_UI )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SCRIPT_CAMERAS, 1, 0LL);
    }
    v67 = UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    this->fields.summonBg = v67;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.summonBg,
      (System_Int32_array **)v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    v74 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_ROOT, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
      goto LABEL_49;
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
    {
LABEL_49:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        this,
        *v46,
        (System_Collections_Generic_List_GameObject__o *)*v34,
        v75);
    }
    else
    {
      SUMMON_BG_OBJECT_NAME = this->fields.SUMMON_BG_OBJECT_NAME;
      v80 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v77, v78);
      AssetLoader_LoadEndDataHandler___ctor(
        v80,
        (Il2CppObject *)v21,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(SUMMON_BG_OBJECT_NAME, v80, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4219D04 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, inactiveCameras);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__, v9);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo, v10);
    byte_4219D04 = 1;
  }
  v11 = sub_B0D974(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = inactivePrefabs;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)inactivePrefabs,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v11 + 32) = inactiveCameras;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 32),
    (System_Int32_array **)inactiveCameras,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4219D05 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, inactiveCameras);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__, v9);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo, v10);
    byte_4219D05 = 1;
  }
  v11 = sub_B0D974(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = inactiveCameras;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)inactiveCameras,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v11 + 32) = inactivePrefabs;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v11 + 32),
    (System_Int32_array **)inactivePrefabs,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UICommonButton_o *baseButton; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v15; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  _BOOL8 v17; // x0
  UnityEngine_Object_o *v18; // x21
  _BOOL8 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4219D02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4219D02 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseButton,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v21.fields.current,
                                     1,
                                     0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !Deep )
        sub_B0D97C(v15);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Deep,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( v17 )
      {
        if ( !Component_srcLineSprite )
          sub_B0D97C(v17);
        ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
          Component_srcLineSprite,
          isEnable,
          Component_srcLineSprite->klass[1]._1.byval_arg.data);
      }
      v18 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Deep,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v19 = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( v19 )
      {
        if ( !v18 )
          sub_B0D97C(v19);
        ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))v18->klass[1]._1.namespaze)(
          v18,
          isEnable,
          v18->klass[1]._1.byval_arg.data);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *titleEquipBase; // x0
  UISprite_o *Component_srcLineSprite; // x21
  float v11; // s8
  struct UICommonButton_o *playScriptButton; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v15; // s8
  float v16; // s8
  struct UICommonButton_o *v17; // x19

  if ( (byte_4219D01 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v6);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4219D01 = 1;
  }
  titleEquipBase = this->fields.titleEquipBase;
  if ( !titleEquipBase )
    goto LABEL_53;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            titleEquipBase,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)titleEquipBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      titleEquipBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( Component_srcLineSprite )
      {
        UISprite__set_spriteName(
          Component_srcLineSprite,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_53:
      sub_B0D97C(titleEquipBase);
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      titleEquipBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( !Component_srcLineSprite )
        goto LABEL_53;
      UISprite__set_spriteName(
        Component_srcLineSprite,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    UILabel__set_overflowMethod((UILabel_o *)titleEquipBase, 2, 0LL);
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    UILabel__set_alignment((UILabel_o *)titleEquipBase, 2, 0LL);
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)titleEquipBase, title, 0LL);
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleEquipBase->klass[2]._1.typeMetadataHandle)(
      titleEquipBase,
      titleEquipBase->klass[2]._1.interopData);
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    LODWORD(v11) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleEquipBase->klass[1]._2.naturalAligment)(
                       titleEquipBase,
                       titleEquipBase->klass[1].vtable._0_Equals.methodPtr));
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    }
    titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
    if ( !titleEquipBase )
      goto LABEL_53;
    if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleEquipBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)titleEquipBase,
                                                     0LL);
      if ( !titleEquipBase )
        goto LABEL_53;
      LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleEquipBase, 0LL);
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      }
      titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
      if ( !titleEquipBase )
        goto LABEL_53;
      v16 = (float)(1.0 - v15)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleEquipBase, 0LL);
      TITLE_NAME_LEFT_POS = v16
                          + (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleEquipBase, 0, 0LL);
      titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
      if ( !titleEquipBase )
        goto LABEL_53;
      UILabel__set_alignment((UILabel_o *)titleEquipBase, 1, 0LL);
      titleEquipBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
      playScriptButton = this->fields.playScriptButton;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      }
      if ( !playScriptButton )
        goto LABEL_53;
      UIWidget__set_width(
        (UIWidget_o *)playScriptButton,
        ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
      if ( !titleEquipBase )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleEquipBase, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleEquipBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
    v17 = this->fields.playScriptButton;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    }
    if ( !v17 )
      goto LABEL_53;
    UILabel__SetCondensedScale(
      (UILabel_o *)v17,
      ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetItem(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *newIcon; // x0
  int v19; // w28
  struct ShiningIconComponent_o *v20; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *v22; // x27
  __int64 v23; // x1
  __int64 v24; // x2
  RubyLabelHelper_o *v25; // x24
  float v26; // s8
  double v27; // d9
  ServantVoiceMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v29; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v32; // x21
  _BOOL4 v33; // w26
  UnityEngine_Object_o *baseSprite; // x24
  int32_t v35; // w21
  int v36; // w27
  int v37; // s0
  float v38; // s1
  float v40; // s1
  UnityEngine_Object_o *titleBase; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v43; // w24
  float v44; // s0
  float v45; // s2
  float v46; // s9
  float v47; // s10
  float v48; // s11
  float v49; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v51; // s1
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  float v55; // s0
  float v56; // s2
  float v57; // s8
  float v58; // s9
  UnityEngine_Object_o *titleName; // x21
  UIWidget_o *Component_srcLineSprite; // x23
  int v61; // s0
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219D00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantVoiceMaster___, item);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&RubyLabelHelper_TypeInfo, v17);
    byte_4219D00 = 1;
  }
  LODWORD(this->fields.TITLE_SPRITE_NAME) = mode;
  if ( !item || !mode || !LOBYTE(this[1].klass) )
    return;
  newIcon = this->fields.newIcon;
  LOBYTE(this[1].klass) = 0;
  if ( !newIcon )
    goto LABEL_90;
  if ( !text )
    goto LABEL_90;
  v19 = *((_DWORD *)newIcon + 41);
  UIWidget__set_height((UIWidget_o *)newIcon, *((_DWORD *)newIcon + 104) * text->fields.m_stringLength, 0LL);
  v20 = this->fields.newIcon;
  mainPrefab = this->fields.mainPrefab;
  v22 = *(UnityEngine_GameObject_o **)&this->fields.isFirst;
  v25 = (RubyLabelHelper_o *)sub_B0D974(RubyLabelHelper_TypeInfo, v23, v24);
  RubyLabelHelper___ctor(v25, (UILabel_o *)v20, v22, mainPrefab, 0LL);
  if ( !v25 )
    goto LABEL_90;
  RubyLabelHelper__SetText(v25, text, 0LL);
  LODWORD(v26) = HIDWORD(*(unsigned __int64 *)&RubyLabelHelper__get_Size(v25, 0LL));
  if ( v26 == INFINITY )
    v27 = -v26;
  else
    v27 = v26;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v29);
  newIcon = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  HIDWORD(this[1].klass) = (_DWORD)newIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          Master_WarQuestSelectionMaster,
                          (int32_t)newIcon,
                          0LL);
  v33 = item->fields.svtEntity
     && (v32 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v32 != 0LL;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v35 = (int)v27;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = v35 - v19;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    newIcon = this->fields.baseSprite;
    if ( !newIcon )
      goto LABEL_90;
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)newIcon, 0LL);
    newIcon = this->fields.baseSprite;
    if ( !newIcon )
      goto LABEL_90;
    v40 = v38 + (float)v36;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)newIcon, *(UnityEngine_Vector3_o *)&v37, 0LL);
  }
  titleBase = (UnityEngine_Object_o *)this->fields.titleBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleBase, 0LL, 0LL) )
  {
    newIcon = this->fields.titleBase;
    if ( !newIcon )
      goto LABEL_90;
    UIWidget__set_height((UIWidget_o *)newIcon, *((_DWORD *)newIcon + 41) + v36, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v43 = 0;
  else
    v43 = v33;
  if ( commandCodeEntity )
  {
    newIcon = this->fields.messageLabel;
    if ( !newIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 1, 0LL);
    newIcon = this->fields.titleEquipBase;
    if ( !newIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 0, 0LL);
    newIcon = this->fields.titleCommandCodeBase;
    if ( !newIcon )
      goto LABEL_90;
    goto LABEL_46;
  }
  newIcon = item->fields.svtEntity;
  if ( !newIcon
    || (newIcon = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)newIcon, 0LL),
        !this->fields.titleEquipBase) )
  {
LABEL_90:
    sub_B0D97C(newIcon);
  }
  if ( ((unsigned __int8)newIcon & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.titleEquipBase, 1, 0LL);
    newIcon = this->fields.titleCommandCodeBase;
    if ( newIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 0, 0LL);
      newIcon = this->fields.messageLabel;
      if ( newIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 0, 0LL);
        newIcon = this->fields.titleEquipBase;
        if ( newIcon )
        {
          Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)newIcon,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            if ( isOpen )
            {
              *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
              v33 = v43;
              if ( !Component_srcLineSprite )
                goto LABEL_90;
            }
            else
            {
              *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_gray(0LL);
              if ( !Component_srcLineSprite )
                goto LABEL_90;
            }
            UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v61, 0LL);
          }
          else
          {
            v33 = v43;
          }
          goto LABEL_47;
        }
      }
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive(this->fields.titleEquipBase, 0, 0LL);
  newIcon = this->fields.titleCommandCodeBase;
  if ( !newIcon )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 1, 0LL);
  newIcon = this->fields.messageLabel;
  if ( !newIcon )
    goto LABEL_90;
LABEL_46:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 0, 0LL);
LABEL_47:
  newIcon = this->fields.titleServantBase;
  if ( !newIcon )
    goto LABEL_90;
  newIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)newIcon, 0LL);
  if ( !newIcon )
    goto LABEL_90;
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)newIcon, 0LL);
  newIcon = this->fields.titleServantBase;
  if ( !newIcon )
    goto LABEL_90;
  v46 = v44;
  v47 = v45;
  newIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)newIcon, 0LL);
  if ( !newIcon )
    goto LABEL_90;
  v48 = v26 * 0.5;
  v49 = (float)(v26 * 0.5) + 20.0;
  v65.fields.x = v46;
  v65.fields.y = v49;
  v65.fields.z = v47;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)newIcon, v65, 0LL);
  if ( v33 )
  {
    newIcon = this->fields.rubyPrefab;
    if ( !newIcon )
      goto LABEL_90;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v49 + *(float *)&this->fields.isScriptPlaying, 0LL);
    newIcon = this->fields.rubyPrefab;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    if ( !newIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)newIcon, 1, 0LL);
    newIcon = this->fields.rubyPrefab;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_Component__get_transform((UnityEngine_Component_o *)newIcon, 0LL);
    if ( !newIcon )
      goto LABEL_90;
    *(UnityEngine_Vector3_o *)(&v51 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)newIcon,
                                             0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    v52 = v51;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(v53, v52 + this->fields.ambientLight.fields.r, 0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    UIWidget__set_height((UIWidget_o *)newIcon, v35, 0LL);
    newIcon = this->fields.titleBase;
    if ( !newIcon )
      goto LABEL_90;
    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(v54, this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    newIcon = this->fields.titleBase;
    if ( !newIcon )
      goto LABEL_90;
    UIWidget__set_height((UIWidget_o *)newIcon, *((_DWORD *)newIcon + 41) + 64, 0LL);
    newIcon = this->fields.titleCommandCodeBase;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)newIcon,
                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !newIcon )
      goto LABEL_90;
    UISprite__set_spriteName((UISprite_o *)newIcon, *(System_String_o **)&this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
  }
  else
  {
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_Component__get_transform((UnityEngine_Component_o *)newIcon, 0LL);
    if ( !newIcon )
      goto LABEL_90;
    *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)newIcon, 0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    v57 = v55;
    v58 = v56;
    UIWidget__set_height((UIWidget_o *)newIcon, v35, 0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_Component__get_transform((UnityEngine_Component_o *)newIcon, 0LL);
    if ( !newIcon )
      goto LABEL_90;
    v66.fields.y = v48 + -14.0;
    v66.fields.x = v57;
    v66.fields.z = v58;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)newIcon, v66, 0LL);
  }
  titleName = (UnityEngine_Object_o *)this->fields.titleName;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleName, 0LL, 0LL) )
  {
    newIcon = this->fields.titleName;
    if ( !newIcon )
      goto LABEL_90;
    ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)newIcon, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0

  if ( (byte_421226D & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1);
    byte_421226D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___PlayScript_b__41_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___RefreshUI_b__42_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___OnClickPlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v9; // x0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v10; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v11; // x8
  UnityEngine_Transform_o *v12; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v13; // x8
  UnityEngine_Transform_o *transform; // x20
  int v15; // s0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v18; // x8
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0

  v4 = this;
  if ( (byte_421226E & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_B0D8A4(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    v6);
    byte_421226E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)_4__this->fields.INACTIVE_PREFABS,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
         Object_WarBoardWaitTimeSetting,
         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBgRoot = (struct UnityEngine_GameObject_o *)v9;
  sub_B0D840(&_4__this->fields.summonBgRoot, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v10->fields.summonBgRoot;
  if ( !this )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_21;
  v12 = (UnityEngine_Transform_o *)this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v11->fields.COMMON_UI;
  if ( !this )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v12 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)this, 0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v13->fields.summonBgRoot;
  if ( !this )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v15, 0LL),
        (v18 = v4->fields.__4__this) == 0LL)
    || (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v18->fields.summonBgRoot) == 0LL
    || (v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19)
    || (UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(this);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  float v16; // s0
  float v17; // s1
  int v18; // s2
  int v19; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v20; // x8
  UnityEngine_Object_o *summonBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x8
  System_Action_o *_9__41_1; // x21
  Il2CppObject *v31; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  struct ServantStatusFlavorTextListViewItemDrawText_o *v35; // x8
  int32_t klass_high; // w20
  System_Action_o *_9__2; // x21
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421226F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&ScriptManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, v11);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__, v12);
    sub_B0D8A4(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v13);
    byte_421226F = 1;
  }
  memset(&v39, 0, sizeof(v39));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_39;
  _4__this->fields.ambientLight.fields.b = v16;
  _4__this->fields.ambientLight.fields.a = v17;
  LODWORD(_4__this->fields.battleBg) = v18;
  HIDWORD(_4__this->fields.battleBg) = v19;
  white = UnityEngine_Color__get_white(0LL);
  UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_39;
  summonBg = (UnityEngine_Object_o *)v20->fields.summonBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_39;
    inactivePrefabs = v22->fields.summonBg;
    if ( !inactivePrefabs )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)inactivePrefabs,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v39.fields.current )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v39.fields.current, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  static_fields = (struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *)*((_QWORD *)inactivePrefabs + 23);
  _9__41_1 = static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (*((_BYTE *)inactivePrefabs + 307) & 4) != 0 && !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__41_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(
      _9__41_1,
      v31,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__,
      0LL);
    v32 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    v32->__9__41_1 = _9__41_1;
    sub_B0D840(&v32->__9__41_1, _9__41_1);
  }
  if ( !Instance
    || (inactivePrefabs = (void *)CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__41_1, 0LL),
        (v35 = this->fields.__4__this) == 0LL) )
  {
LABEL_39:
    sub_B0D97C(inactivePrefabs);
  }
  klass_high = HIDWORD(v35[1].klass);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayGacha(klass_high, 0, 0, _9__2, 0, -1, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
    _4__this,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___RefreshUI_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v21; // x8
  System_String_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v23; // x8
  UnityEngine_Object_o *v24; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v25; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v26; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  UnityEngine_Object_o *inactivePrefabs; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v29; // x8
  ServantStatusFlavorTextListViewItemDrawText_o *v30; // x0
  Il2CppObject *current; // x20
  __int64 v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v34; // w20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  void *inactiveCameras; // x8
  System_Action_o *v42; // x20
  Il2CppObject *v43; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-98h] BYREF
  int v46[2]; // [xsp+20h] [xbp-80h]
  int v47; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4212270 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, v15);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_B0D8A4(
                                                                                    &ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo,
                                                                                    v16);
    byte_4212270 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  v17 = v2[2];
  if ( !v17 )
    goto LABEL_70;
  klass = (UnityEngine_Object_o *)v17[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v2[2];
    if ( !v19 )
      goto LABEL_70;
    v20 = (UnityEngine_Object_o *)v19[2].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v20, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_70;
    this[2].klass = 0LL;
    sub_B0D840(&this[2], 0LL);
  }
  v21 = v2[2];
  if ( !v21 )
    goto LABEL_70;
  monitor = (System_String_o *)v21[3].monitor;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(monitor, 0LL);
  v23 = v2[2];
  if ( !v23 )
    goto LABEL_70;
  v24 = (UnityEngine_Object_o *)v23[2].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v24,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v25 = v2[2];
    if ( !v25 )
      goto LABEL_70;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v25[2].monitor;
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_70;
    this[2].monitor = 0LL;
    sub_B0D840(&this[2].monitor, 0LL);
  }
  v26 = v2[2];
  if ( !v26 )
    goto LABEL_70;
  UnityEngine_RenderSettings__set_ambientLight(*(UnityEngine_Color_o *)&v26[1].fields.__4__this, 0LL);
  v27 = v2[2];
  if ( !v27 )
    goto LABEL_70;
  inactivePrefabs = (UnityEngine_Object_o *)v27[1].fields.inactivePrefabs;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  inactivePrefabs,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v29 = v2[2];
    if ( !v29 )
      goto LABEL_70;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v29[1].fields.inactivePrefabs;
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_70;
    this[1].fields.inactivePrefabs = 0LL;
    sub_B0D840(&this[1].fields.inactivePrefabs, 0LL);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_70;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v45;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields.current, 1, 0LL) )
  {
    if ( !i.fields.current )
      sub_B0D97C(0LL);
  }
  v46[0] = 227;
  v47 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  v47 = 0;
  this = v2[4];
  if ( !this )
    goto LABEL_70;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v30 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v30 )
      sub_B0D97C(0LL);
    current = v48.fields.current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v30,
      (UnityEngine_GameObject_o *)v48.fields.current,
      1,
      0LL);
    if ( !current )
      sub_B0D97C(v32);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v46[0] = 299;
  v34 = ++v47;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v34 && v46[v34 - 1] == 299 )
    v47 = v34 - 1;
  v35 = v2[2];
  if ( !v35 )
    goto LABEL_70;
  BYTE4(v35[1].monitor) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v39 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  inactiveCameras = this[4].fields.inactiveCameras;
  v42 = (System_Action_o *)*((_QWORD *)inactiveCameras + 2);
  if ( !v42 )
  {
    if ( (BYTE3(this[7].fields.inactiveCameras) & 4) != 0 && !LODWORD(this[5].fields.inactiveCameras) )
    {
      j_il2cpp_runtime_class_init_0(this);
      inactiveCameras = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    }
    v43 = *(Il2CppObject **)inactiveCameras;
    v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
    System_Action___ctor(v42, v43, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = v42;
    sub_B0D840(&static_fields->__9__42_1, v42);
  }
  if ( !Instance )
LABEL_70:
    sub_B0D97C(this);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v42, 0LL);
}