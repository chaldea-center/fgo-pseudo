void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  if ( (byte_439290F & 1) == 0 )
  {
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    byte_439290F = 1;
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
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_439290E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&StringLiteral_17028/*"bg(Clone)/bg10500"*/);
    sub_B775C4(&StringLiteral_13403/*"SummonBgRoot"*/);
    sub_B775C4(&StringLiteral_13551/*"SystemUICamera"*/);
    sub_B775C4(&StringLiteral_2914/*"Bg/10500"*/);
    sub_B775C4(&StringLiteral_6206/*"EquipGraphListMenuPrefab(Clone)"*/);
    sub_B775C4(&StringLiteral_12966/*"ServantStatusDialogPrefab(Clone)"*/);
    sub_B775C4(&StringLiteral_2986/*"BtnBg"*/);
    sub_B775C4(&StringLiteral_14782/*"TouchCamera"*/);
    sub_B775C4(&StringLiteral_4086/*"ChoiceButton"*/);
    sub_B775C4(&StringLiteral_2917/*"BgCamera"*/);
    sub_B775C4(&StringLiteral_4316/*"CommonUI"*/);
    sub_B775C4(&StringLiteral_6964/*"FrontCommonUICamera"*/);
    sub_B775C4(&StringLiteral_17027/*"bg"*/);
    sub_B775C4(&StringLiteral_4323/*"CommonUICamera"*/);
    sub_B775C4(&StringLiteral_13419/*"SupportServantEquipListMenuPrefab(Clone)"*/);
    sub_B775C4(&StringLiteral_8733/*"LockButton"*/);
    sub_B775C4(&StringLiteral_12950/*"ServantEquipStatusDialogPrefab(Clone)"*/);
    sub_B775C4(&StringLiteral_13318/*"StatusButton"*/);
    sub_B775C4(&StringLiteral_19897/*"img_index_02"*/);
    sub_B775C4(&StringLiteral_7162/*"Ground/Field/bg(Clone)"*/);
    byte_439290E = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19897/*"img_index_02"*/;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = StringLiteral_19897/*"img_index_02"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.BASE_SPRITE_ADD_POS_Y, v9, v2, v3, v4, v5, v6, v7);
  this->fields.ambientLight.fields.r = -45.0;
  *(_QWORD *)&this->fields.MESSAGE_LABEL_ADD_POS_Y = 0xC25C0000C2080000LL;
  v10 = (System_Int32_array **)StringLiteral_4316/*"CommonUI"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_4316/*"CommonUI"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.BATTLE_BG_OBJECT, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_7162/*"Ground/Field/bg(Clone)"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_7162/*"Ground/Field/bg(Clone)"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_OBJECT, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_17028/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_17028/*"bg(Clone)/bg10500"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_ROOT, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)StringLiteral_13403/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_13403/*"SummonBgRoot"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_ASSET_NAME, v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Int32_array **)StringLiteral_2914/*"Bg/10500"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_2914/*"Bg/10500"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_17027/*"bg"*/;
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)StringLiteral_17027/*"bg"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.INACTIVE_PREFABS, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( !v52 )
    goto LABEL_7;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v52,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_12966/*"ServantStatusDialogPrefab(Clone)"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v52,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_12950/*"ServantEquipStatusDialogPrefab(Clone)"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v52,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6206/*"EquipGraphListMenuPrefab(Clone)"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v52,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13419/*"SupportServantEquipListMenuPrefab(Clone)"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v52;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.SCRIPT_CAMERAS,
    (System_Int32_array **)v52,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( !v61 )
    goto LABEL_7;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v61,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2917/*"BgCamera"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v61,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_4323/*"CommonUICamera"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v61,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6964/*"FrontCommonUICamera"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v61,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13551/*"SystemUICamera"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v61,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_14782/*"TouchCamera"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v61;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.TARGET_BUTTON_NAME,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( !v68 )
LABEL_7:
    sub_B7769C(v53, v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v68,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2986/*"BtnBg"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v68,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13318/*"StatusButton"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v68,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_8733/*"LockButton"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v68,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_4086/*"ChoiceButton"*/,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.baseButton = (struct UICommonButton_o *)v68;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseButton,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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
  __int64 v3; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SCRIPT_CAMERAS; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v13; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *v22; // x23
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  System_Collections_Generic_List_Camera__o **v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int max_length; // w8
  unsigned int v34; // w26
  Il2CppClass **v35; // x8
  UnityEngine_Behaviour_o *v36; // x24
  UnityEngine_GameObject_o *v37; // x22
  struct System_String_o *Deep; // x0
  struct System_String_o **p_COMMON_UI; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *v46; // x24
  struct UnityEngine_GameObject_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Object_o *v54; // x22
  const MethodInfo *v55; // x3
  UnityEngine_Object_o *summonBgRoot; // x22
  System_String_o *SUMMON_BG_OBJECT_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v58; // x21
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_439290B & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Camera___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Camera__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_Camera___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_Camera__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
    byte_439290B = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v3 = sub_B77694(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_55;
  *(_QWORD *)(v3 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    v13 = (UnityEngine_Camera_array *)sub_B775DC(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v13, 0LL);
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v3 + 32) = v14;
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v3 + 32);
    sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
    SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SCRIPT_CAMERAS;
    if ( !SCRIPT_CAMERAS )
      goto LABEL_55;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v60,
      SCRIPT_CAMERAS,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v61 = v60;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v61,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v22 = UnityEngine_GameObject__Find((System_String_o *)v61.fields.current, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v22, 0, v23);
        if ( !*v15 )
          sub_B7769C(0LL, v24);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v61,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_Camera__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v3 + 24) = v25;
    v26 = (System_Collections_Generic_List_Camera__o **)(v3 + 24);
    sub_B77560((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
    if ( !v13 )
      goto LABEL_55;
    max_length = v13->max_length;
    if ( max_length >= 1 )
    {
      v34 = 0;
      while ( 1 )
      {
        if ( v34 >= max_length )
        {
          v59 = sub_B776C8(SCRIPT_CAMERAS);
          sub_B77668(v59, 0LL);
        }
        v35 = &v13->obj.klass + (int)v34;
        v36 = (UnityEngine_Behaviour_o *)v35[4];
        if ( !v36 )
          break;
        SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35[4], 0LL);
        if ( !SCRIPT_CAMERAS )
          break;
        SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)SCRIPT_CAMERAS, 0LL);
        if ( !this->fields.TARGET_BUTTON_NAME )
          break;
        SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains((System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.TARGET_BUTTON_NAME, (WarBoardManager_TaskList_o *)SCRIPT_CAMERAS, (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)SCRIPT_CAMERAS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v36, 0, 0LL);
          SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*v26;
          if ( !*v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SCRIPT_CAMERAS,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_Camera__Add__);
        }
        max_length = v13->max_length;
        if ( (int)++v34 >= max_length )
          goto LABEL_29;
      }
LABEL_55:
      sub_B7769C(SCRIPT_CAMERAS, v5);
    }
LABEL_29:
    v37 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
    {
      Deep = (struct System_String_o *)GameObjectExtensions__FindDeep(v37, this->fields.SUMMON_BG_ASSET_NAME, 1, 0LL);
      p_COMMON_UI = &this->fields.COMMON_UI;
      this->fields.COMMON_UI = Deep;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.COMMON_UI,
        (System_Int32_array **)Deep,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    else
    {
      p_COMMON_UI = &this->fields.COMMON_UI;
    }
    v46 = (UnityEngine_Object_o *)*p_COMMON_UI;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    {
      SCRIPT_CAMERAS = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*p_COMMON_UI;
      if ( !*p_COMMON_UI )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SCRIPT_CAMERAS, 1, 0LL);
    }
    v47 = UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    this->fields.summonBg = v47;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.summonBg,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_ROOT, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
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
        *v26,
        (System_Collections_Generic_List_GameObject__o *)*v15,
        v55);
    }
    else
    {
      SUMMON_BG_OBJECT_NAME = this->fields.SUMMON_BG_OBJECT_NAME;
      v58 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v58,
        (Il2CppObject *)v3,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(SUMMON_BG_OBJECT_NAME, v58, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_439290C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
    byte_439290C = 1;
  }
  v7 = sub_B77694(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = inactivePrefabs;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)inactivePrefabs,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 32) = inactiveCameras;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)inactiveCameras,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7769C(v8, v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_439290D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
    byte_439290D = 1;
  }
  v7 = sub_B77694(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = inactiveCameras;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)inactiveCameras,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 32) = inactivePrefabs;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)inactivePrefabs,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7769C(v8, v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *baseButton; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_439290A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_439290A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    sub_B7769C(0LL, gameObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseButton,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v18.fields.current,
                                     1,
                                     0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Deep )
        sub_B7769C(v9, v10);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Deep,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( v12 )
      {
        if ( !Component_srcLineSprite )
          sub_B7769C(v12, v13);
        ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
          Component_srcLineSprite,
          isEnable,
          Component_srcLineSprite->klass[1]._1.byval_arg.data);
      }
      v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Deep,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( v15 )
      {
        if ( !v14 )
          sub_B7769C(v15, v16);
        ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))v14->klass[1]._1.namespaze)(
          v14,
          isEnable,
          v14->klass[1]._1.byval_arg.data);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *titleEquipBase; // x0
  UISprite_o *Component_srcLineSprite; // x21
  float v7; // s8
  struct UICommonButton_o *playScriptButton; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v11; // s8
  float v12; // s8
  struct UICommonButton_o *v13; // x19

  if ( (byte_4392909 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4392909 = 1;
  }
  titleEquipBase = this->fields.titleEquipBase;
  if ( !titleEquipBase )
    goto LABEL_53;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            titleEquipBase,
                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      sub_B7769C(titleEquipBase, title);
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
    LODWORD(v7) = COERCE_UNSIGNED_INT128(
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
    if ( v7 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleEquipBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)titleEquipBase,
                                                     0LL);
      if ( !titleEquipBase )
        goto LABEL_53;
      LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleEquipBase, 0LL);
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      }
      titleEquipBase = (UnityEngine_GameObject_o *)this->fields.playScriptButton;
      if ( !titleEquipBase )
        goto LABEL_53;
      v12 = (float)(1.0 - v11)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleEquipBase, 0LL);
      TITLE_NAME_LEFT_POS = v12
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
    v13 = this->fields.playScriptButton;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    }
    if ( !v13 )
      goto LABEL_53;
    UILabel__SetCondensedScale(
      (UILabel_o *)v13,
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
  void *newIcon; // x0
  int v15; // w28
  struct ShiningIconComponent_o *v16; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *v18; // x27
  RubyLabelHelper_o *v19; // x24
  float v20; // s8
  double v21; // d9
  ServantVoiceMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v23; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v26; // x21
  _BOOL4 v27; // w26
  UnityEngine_Object_o *baseSprite; // x24
  int32_t v29; // w21
  int v30; // w27
  int v31; // s0
  float v32; // s1
  float v34; // s1
  UnityEngine_Object_o *titleBase; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v37; // w24
  float v38; // s0
  float v39; // s2
  float v40; // s9
  float v41; // s10
  float v42; // s11
  float v43; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v45; // s1
  float v46; // s8
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  float v49; // s0
  float v50; // s2
  float v51; // s8
  float v52; // s9
  UnityEngine_Object_o *titleName; // x21
  UIWidget_o *Component_srcLineSprite; // x23
  int v55; // s0
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4392908 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&RubyLabelHelper_TypeInfo);
    byte_4392908 = 1;
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
  v15 = *((_DWORD *)newIcon + 41);
  UIWidget__set_height((UIWidget_o *)newIcon, *((_DWORD *)newIcon + 104) * text->fields.m_stringLength, 0LL);
  v16 = this->fields.newIcon;
  mainPrefab = this->fields.mainPrefab;
  v18 = *(UnityEngine_GameObject_o **)&this->fields.isFirst;
  v19 = (RubyLabelHelper_o *)sub_B77694(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v19, (UILabel_o *)v16, v18, mainPrefab, 0LL);
  if ( !v19 )
    goto LABEL_90;
  RubyLabelHelper__SetText(v19, text, 0LL);
  LODWORD(v20) = HIDWORD(*(unsigned __int64 *)&RubyLabelHelper__get_Size(v19, 0LL));
  if ( v20 == INFINITY )
    v21 = -v20;
  else
    v21 = v20;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v23);
  newIcon = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  HIDWORD(this[1].klass) = (_DWORD)newIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          Master_WarQuestSelectionMaster,
                          (int32_t)newIcon,
                          0LL);
  v27 = item->fields.svtEntity
     && (v26 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v26 != 0LL;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v29 = (int)v21;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v30 = v29 - v15;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    newIcon = this->fields.baseSprite;
    if ( !newIcon )
      goto LABEL_90;
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)newIcon, 0LL);
    newIcon = this->fields.baseSprite;
    if ( !newIcon )
      goto LABEL_90;
    v34 = v32 + (float)v30;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)newIcon, *(UnityEngine_Vector3_o *)&v31, 0LL);
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
    UIWidget__set_height((UIWidget_o *)newIcon, *((_DWORD *)newIcon + 41) + v30, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v37 = 0;
  else
    v37 = v27;
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
    sub_B7769C(newIcon, item);
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
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            if ( isOpen )
            {
              *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
              v27 = v37;
              if ( !Component_srcLineSprite )
                goto LABEL_90;
            }
            else
            {
              *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_gray(0LL);
              if ( !Component_srcLineSprite )
                goto LABEL_90;
            }
            UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v55, 0LL);
          }
          else
          {
            v27 = v37;
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
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)newIcon, 0LL);
  newIcon = this->fields.titleServantBase;
  if ( !newIcon )
    goto LABEL_90;
  v40 = v38;
  v41 = v39;
  newIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)newIcon, 0LL);
  if ( !newIcon )
    goto LABEL_90;
  v42 = v20 * 0.5;
  v43 = (float)(v20 * 0.5) + 20.0;
  v59.fields.x = v40;
  v59.fields.y = v43;
  v59.fields.z = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)newIcon, v59, 0LL);
  if ( v27 )
  {
    newIcon = this->fields.rubyPrefab;
    if ( !newIcon )
      goto LABEL_90;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v43 + *(float *)&this->fields.isScriptPlaying, 0LL);
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
    *(UnityEngine_Vector3_o *)(&v45 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)newIcon,
                                             0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    v46 = v45;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, v46 + this->fields.ambientLight.fields.r, 0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    UIWidget__set_height((UIWidget_o *)newIcon, v29, 0LL);
    newIcon = this->fields.titleBase;
    if ( !newIcon )
      goto LABEL_90;
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)newIcon, 0LL);
    GameObjectExtensions__SetLocalPositionY(v48, this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    newIcon = this->fields.titleBase;
    if ( !newIcon )
      goto LABEL_90;
    UIWidget__set_height((UIWidget_o *)newIcon, *((_DWORD *)newIcon + 41) + 64, 0LL);
    newIcon = this->fields.titleCommandCodeBase;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)newIcon,
                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)newIcon, 0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    v51 = v49;
    v52 = v50;
    UIWidget__set_height((UIWidget_o *)newIcon, v29, 0LL);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_90;
    newIcon = UnityEngine_Component__get_transform((UnityEngine_Component_o *)newIcon, 0LL);
    if ( !newIcon )
      goto LABEL_90;
    v60.fields.y = v42 + -14.0;
    v60.fields.x = v51;
    v60.fields.z = v52;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)newIcon, v60, 0LL);
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
    ShiningIconComponent__Set_34095244((ShiningIconComponent_o *)newIcon, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E52 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4388E52 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v14; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v15; // x8
  UnityEngine_Transform_o *v16; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v17; // x8
  UnityEngine_Transform_o *transform; // x20
  int v19; // s0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v22; // x8
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0

  v4 = this;
  if ( (byte_4388E53 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388E53 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)_4__this->fields.INACTIVE_PREFABS,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBgRoot = (struct UnityEngine_GameObject_o *)v7;
  sub_B77560((BattleServantConfConponent_o *)&_4__this->fields.summonBgRoot, v7, v8, v9, v10, v11, v12, v13);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v14->fields.summonBgRoot;
  if ( !this )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_21;
  v16 = (UnityEngine_Transform_o *)this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v15->fields.COMMON_UI;
  if ( !this )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v16 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)this, 0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_21;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v17->fields.summonBgRoot;
  if ( !this )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        (v22 = v4->fields.__4__this) == 0LL)
    || (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v22->fields.summonBgRoot) == 0LL
    || (v23 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL),
        !v23)
    || (UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_21:
    sub_B7769C(this, data);
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
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  int v8; // s2
  int v9; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v10; // x8
  UnityEngine_Object_o *summonBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v12; // x8
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x8
  System_Action_o *_9__41_1; // x21
  Il2CppObject *v21; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v29; // x8
  int32_t klass_high; // w20
  System_Action_o *_9__2; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4388E54 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__);
    sub_B775C4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4388E54 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_39;
  _4__this->fields.ambientLight.fields.b = v6;
  _4__this->fields.ambientLight.fields.a = v7;
  LODWORD(_4__this->fields.battleBg) = v8;
  HIDWORD(_4__this->fields.battleBg) = v9;
  white = UnityEngine_Color__get_white(0LL);
  UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_39;
  summonBg = (UnityEngine_Object_o *)v10->fields.summonBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_39;
    inactivePrefabs = v12->fields.summonBg;
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
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v39.fields.current )
      sub_B7769C(0LL, v13);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v39.fields.current, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v15);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
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
    v21 = (Il2CppObject *)static_fields->__9;
    _9__41_1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__41_1,
      v21,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__,
      0LL);
    v22 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    v22->__9__41_1 = _9__41_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !Instance
    || (inactivePrefabs = (void *)CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__41_1, 0LL),
        (v29 = this->fields.__4__this) == 0LL) )
  {
LABEL_39:
    sub_B7769C(inactivePrefabs, v5);
  }
  klass_high = HIDWORD(v29[1].klass);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
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
    sub_B7769C(0LL, method);
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
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v3; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v5; // x8
  UnityEngine_Object_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v13; // x8
  System_String_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v15; // x8
  UnityEngine_Object_o *v16; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v24; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v25; // x8
  UnityEngine_Object_o *inactivePrefabs; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x1
  ServantStatusFlavorTextListViewItemDrawText_o *v36; // x0
  Il2CppObject *current; // x20
  __int64 v38; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  int v42; // w20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v43; // x8
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v45; // x8
  float DEFAULT_FADE_TIME; // s8
  void *inactiveCameras; // x8
  System_Action_o *v48; // x20
  Il2CppObject *v49; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-98h] BYREF
  int v58[2]; // [xsp+20h] [xbp-80h]
  int v59; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4388E55 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_Camera__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4388E55 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v60, 0, sizeof(v60));
  v59 = 0;
  v3 = v2[2];
  if ( !v3 )
    goto LABEL_70;
  klass = (UnityEngine_Object_o *)v3[2].klass;
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
    v5 = v2[2];
    if ( !v5 )
      goto LABEL_70;
    v6 = (UnityEngine_Object_o *)v5[2].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v6, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_70;
    this[2].klass = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this[2], 0LL, v7, v8, v9, v10, v11, v12);
  }
  v13 = v2[2];
  if ( !v13 )
    goto LABEL_70;
  monitor = (System_String_o *)v13[3].monitor;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(monitor, 0LL);
  v15 = v2[2];
  if ( !v15 )
    goto LABEL_70;
  v16 = (UnityEngine_Object_o *)v15[2].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v16,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v2[2];
    if ( !v17 )
      goto LABEL_70;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v17[2].monitor;
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_70;
    this[2].monitor = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this[2].monitor, 0LL, v18, v19, v20, v21, v22, v23);
  }
  v24 = v2[2];
  if ( !v24 )
    goto LABEL_70;
  UnityEngine_RenderSettings__set_ambientLight(*(UnityEngine_Color_o *)&v24[1].fields.__4__this, 0LL);
  v25 = v2[2];
  if ( !v25 )
    goto LABEL_70;
  inactivePrefabs = (UnityEngine_Object_o *)v25[1].fields.inactivePrefabs;
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
    v27 = v2[2];
    if ( !v27 )
      goto LABEL_70;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v27[1].fields.inactivePrefabs;
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_70;
    this[1].fields.inactivePrefabs = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this[1].fields.inactivePrefabs, 0LL, v28, v29, v30, v31, v32, v33);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_70;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v57;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields.current, 1, 0LL) )
  {
    if ( !i.fields.current )
      sub_B7769C(0LL, v34);
  }
  v58[0] = 227;
  v59 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  v59 = 0;
  this = v2[4];
  if ( !this )
    goto LABEL_70;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v60 = v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v36 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v36 )
      sub_B7769C(0LL, v35);
    current = v60.fields.current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v36,
      (UnityEngine_GameObject_o *)v60.fields.current,
      1,
      0LL);
    if ( !current )
      sub_B7769C(v38, v39);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v41);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v58[0] = 299;
  v42 = ++v59;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v42 && v58[v42 - 1] == 299 )
    v59 = v42 - 1;
  v43 = v2[2];
  if ( !v43 )
    goto LABEL_70;
  BYTE4(v43[1].monitor) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v45 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v45->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  inactiveCameras = this[4].fields.inactiveCameras;
  v48 = (System_Action_o *)*((_QWORD *)inactiveCameras + 2);
  if ( !v48 )
  {
    if ( (BYTE3(this[7].fields.inactiveCameras) & 4) != 0 && !LODWORD(this[5].fields.inactiveCameras) )
    {
      j_il2cpp_runtime_class_init_0(this);
      inactiveCameras = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    }
    v49 = *(Il2CppObject **)inactiveCameras;
    v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v48, v49, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = v48;
    sub_B77560(
      (BattleServantConfConponent_o *)&static_fields->__9__42_1,
      (System_Int32_array **)v48,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !Instance )
LABEL_70:
    sub_B7769C(this, method);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v48, 0LL);
}