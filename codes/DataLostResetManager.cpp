void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct DataLostResetManager_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct DataLostResetManager_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42EA34D & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_11582/*"ResetConfirmDialog"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16998/*"bit_raidreset"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11585/*"ResetSelectDialog"*/, v14, v15, v16);
    byte_42EA34D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_16998/*"bit_raidreset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16998/*"bit_raidreset"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = DataLostResetManager_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_11585/*"ResetSelectDialog"*/;
  v19->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11585/*"ResetSelectDialog"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->PREFAB_SELECT_DIALOG_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = DataLostResetManager_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_11582/*"ResetConfirmDialog"*/;
  v27->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11582/*"ResetConfirmDialog"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->PREFAB_CONFIRM_DIALOG_NAME, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall DataLostResetManager___ctor(DataLostResetManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall DataLostResetManager__GetEventAssetName(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppObject *v12; // x0
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF
  int v17; // [xsp+18h] [xbp-18h] BYREF
  int32_t v18; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42EA345 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, warId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6287/*"EventUI/Prefabs/{0}/{1}"*/, v9, v10, v11);
    byte_42EA345 = 1;
  }
  if ( eventId )
  {
    v18 = eventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v12, 0LL);
  }
  else
  {
    v17 = 0;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v16 = warId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    return System_String__Format_44573324((System_String_o *)StringLiteral_6287/*"EventUI/Prefabs/{0}/{1}"*/, v14, v15, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__OpenBattleResultResetDialog(
        int32_t eventId,
        int32_t warId,
        System_Action_o *closeAction,
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  __int64 v52; // x21
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v64; // x23
  DataLostResetManager_c *v65; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **Component_srcLineSprite; // x0
  UnityEngine_GameObject_o **v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v83; // x25
  int v84; // s0
  const MethodInfo *v87; // x1
  ResetSelectDialog_o *v88; // x19
  System_String_o *v89; // x20
  System_String_o *v90; // x22
  System_String_o *v91; // x23
  ResetSelectDialog_ClickDelegate_o *v92; // x24
  UnityEngine_Object_o *v93; // x19

  if ( (byte_42EA348 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, warId, (_DWORD)closeAction, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ResetSelectDialog_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v37, v38, v39);
    sub_B5D5C4(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_5687/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_5689/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_5688/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v49, v50, v51);
    byte_42EA348 = 1;
  }
  v52 = sub_B5D694(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  DataLostResetManager___c__DisplayClass8_0___ctor((DataLostResetManager___c__DisplayClass8_0_o *)v52, 0LL);
  if ( !v52 )
    goto LABEL_47;
  *(_QWORD *)(v52 + 32) = closeAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v52 + 32),
    (System_Int32_array **)closeAction,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v61);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v64 = AssetStorage;
    v65 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v65 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v64,
                                                                                 v65->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v67 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v52 + 24) = v67;
      sub_B5D560((BattleServantConfConponent_o *)(v52 + 24), v67, v68, v69, v70, v71, v72, v73);
      Instance = *(UnityEngine_GameObject_o **)(v52 + 24);
      if ( !Instance )
        goto LABEL_47;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         Instance,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v52 + 16) = Component_srcLineSprite;
      v75 = (UnityEngine_GameObject_o **)(v52 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v52 + 16), Component_srcLineSprite, v76, v77, v78, v79, v80, v81);
      Instance = *(UnityEngine_GameObject_o **)(v52 + 16);
      if ( !Instance )
        goto LABEL_47;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, 0LL);
      Instance = *v75;
      if ( !*v75 )
        goto LABEL_47;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)Instance[5].monitor;
      if ( !Instance )
        goto LABEL_47;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = *v75;
      if ( !*v75 )
        goto LABEL_47;
      v83 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      *(UnityEngine_Vector3_o *)&v84 = UnityEngine_Vector3__get_one(0LL);
      if ( !v83 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v83, *(UnityEngine_Vector3_o *)&v84, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Instance )
        goto LABEL_47;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(
             (EventDataLostBattleMaster_o *)Instance,
             warId,
             eventId,
             0LL) != -1 )
      {
        if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataLostResetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        }
        DataLostResetManager__SetTitleInfoTouchEnable(0, v87);
        v88 = (ResetSelectDialog_o *)*v75;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v90 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v92 = (ResetSelectDialog_ClickDelegate_o *)sub_B5D694(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v92,
          (Il2CppObject *)v52,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          0LL);
        if ( v88 )
        {
          ResetSelectDialog__OpenSingleButton(v88, v89, v90, v91, v92, 0LL);
          return;
        }
LABEL_47:
        sub_B5D69C(Instance, v54);
      }
      v93 = *(UnityEngine_Object_o **)(v52 + 24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v93, 0LL);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v52 + 32), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__OpenConfirmDialog(
        int32_t eventId,
        int32_t warId,
        int32_t selectNo,
        int32_t resetIdx,
        bool isBackReturn,
        DataLostResetManager_ClickDelegate_o *resetDelegate,
        const MethodInfo *method)
{
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
  __int64 v51; // x19
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v63; // x20
  DataLostResetManager_c *v64; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **Component_srcLineSprite; // x0
  BaseDialog_o **v74; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int v81; // w2
  __int64 v82; // x3
  TerminalSceneComponent_c *v83; // x0
  System_String_o *v84; // x0
  System_String_o *v85; // x21
  System_String_o *v86; // x22
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  bool v89; // w0
  BaseDialog_o *v90; // x21
  System_String_o *v91; // x20
  System_String_o *v92; // x0
  int v93; // w24
  System_String_o *v94; // x22
  ResetConfirmDialog_ClickDelegate_o *v95; // x23
  int32_t v96; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v97; // 0:x2.16

  v96 = selectNo;
  if ( (byte_42EA347 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, warId, selectNo, *(_QWORD *)&resetIdx);
    sub_B5D5C4(&AssetManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ResetConfirmDialog_ClickDelegate_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v36, v37, v38);
    sub_B5D5C4(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_5695/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_5694/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1/*""*/, v48, v49, v50);
    byte_42EA347 = 1;
  }
  v51 = sub_B5D694(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  DataLostResetManager___c__DisplayClass7_0___ctor((DataLostResetManager___c__DisplayClass7_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_44;
  *(_QWORD *)(v51 + 32) = resetDelegate;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v51 + 32),
    (System_Int32_array **)resetDelegate,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  *(_DWORD *)(v51 + 40) = resetIdx;
  *(_DWORD *)(v51 + 48) = eventId;
  *(_DWORD *)(v51 + 52) = warId;
  *(_BYTE *)(v51 + 44) = isBackReturn;
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v60);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v63 = AssetStorage;
    v64 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v64 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v63,
                                                                                 v64->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v66 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v51 + 24) = v66;
      sub_B5D560((BattleServantConfConponent_o *)(v51 + 24), v66, v67, v68, v69, v70, v71, v72);
      mInstance = *(UnityEngine_GameObject_o **)(v51 + 24);
      if ( mInstance )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           mInstance,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v51 + 16) = Component_srcLineSprite;
        v74 = (BaseDialog_o **)(v51 + 16);
        sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), Component_srcLineSprite, v75, v76, v77, v78, v79, v80);
        mInstance = *(UnityEngine_GameObject_o **)(v51 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v53, v81, v82);
            byte_42E4B1E = 1;
          }
          v83 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v83 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v83->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v97.fields.value.fields.x = 0LL;
            *(_QWORD *)&v97.fields.value.fields.z = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v74, v97, 0LL);
            v84 = System_Int32__ToString((int32_t)&v96, 0LL);
            v85 = System_String__Concat_44577788((System_String_o *)StringLiteral_5694/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v84, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v86 = LocalizationManager__Get(v85, 0LL);
            v87 = System_Int32__ToString((int32_t)&v96, 0LL);
            v88 = System_String__Concat_44577788((System_String_o *)StringLiteral_5694/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v87, 0LL);
            v89 = System_String__op_Equality(v86, v88, 0LL);
            v90 = *v74;
            v91 = v89 ? (System_String_o *)StringLiteral_1/*""*/ : v86;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v92 = LocalizationManager__Get((System_String_o *)StringLiteral_5695/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v93 = *(unsigned __int8 *)(v51 + 44);
            v94 = v92;
            v95 = (ResetConfirmDialog_ClickDelegate_o *)sub_B5D694(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v95,
              (Il2CppObject *)v51,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              0LL);
            if ( v90 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v90, v94, v91, v93 != 0, v95, 0LL);
              return;
            }
          }
        }
      }
LABEL_44:
      sub_B5D69C(mInstance, v53);
    }
  }
}


void __fastcall DataLostResetManager__OpenResetSelectDialog(
        int32_t eventId,
        int32_t warId,
        bool isNoCancel,
        DataLostResetManager_ClickDelegate_o *resetDelegate,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  int v66; // w1
  char v67; // w2
  __int64 v68; // x3
  int v69; // w1
  char v70; // w2
  __int64 v71; // x3
  __int64 v72; // x19
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  const MethodInfo *v81; // x2
  int32_t v82; // w20
  int32_t v83; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v86; // x20
  DataLostResetManager_c *v87; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **Component_srcLineSprite; // x0
  BaseDialog_o **v97; // x20
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  char v104; // w2
  __int64 v105; // x3
  TerminalSceneComponent_c *v106; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v108; // x1
  int32_t v109; // w21
  UnityEngine_GameObject_o *v110; // x22
  System_String_o *v111; // x21
  System_Int32_array **v112; // x0
  __int64 *v113; // x24
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x23
  System_String_o *v123; // x25
  System_String_o *v124; // x23
  __int64 v125; // x24
  System_String_o *v126; // x25
  __int64 v127; // x8
  __int64 v128; // x8
  __int64 v129; // x9
  __int64 v130; // x9
  __int64 v131; // x27
  __int64 v132; // x8
  __int64 v133; // x24
  __int64 v134; // x8
  BaseDialog_o *v135; // x20
  System_String_o *v136; // x0
  int v137; // w26
  System_String_o *v138; // x22
  ResetSelectDialog_ClickDelegate_o *v139; // x24
  __int64 v140; // x0
  int klass; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v142; // 0:x2.16

  if ( (byte_42EA346 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, warId, isNoCancel, resetDelegate);
    sub_B5D5C4(&AssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ResetSelectDialog_ClickDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v21, v22, v23);
    sub_B5D5C4(&DataManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v27, v28, v29);
    sub_B5D5C4(&int___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v36, v37, v38);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v51, v52, v53);
    sub_B5D5C4(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_16215/*"_NO_CANCEL"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_5697/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_5698/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_5699/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_1/*""*/, v69, v70, v71);
    byte_42EA346 = 1;
  }
  klass = 0;
  v72 = sub_B5D694(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  DataLostResetManager___c__DisplayClass6_0___ctor((DataLostResetManager___c__DisplayClass6_0_o *)v72, 0LL);
  if ( !v72 )
    goto LABEL_87;
  *(_QWORD *)(v72 + 56) = resetDelegate;
  *(_DWORD *)(v72 + 32) = eventId;
  *(_DWORD *)(v72 + 36) = warId;
  *(_BYTE *)(v72 + 48) = isNoCancel;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v72 + 56),
    (System_Int32_array **)resetDelegate,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v83 = *(_DWORD *)(v72 + 32);
  v82 = *(_DWORD *)(v72 + 36);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(v83, v82, v81);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v86 = AssetStorage;
    v87 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v87 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v86,
                                                                                 v87->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v89 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v72 + 24) = v89;
      sub_B5D560((BattleServantConfConponent_o *)(v72 + 24), v89, v90, v91, v92, v93, v94, v95);
      mInstance = *(UnityEngine_GameObject_o **)(v72 + 24);
      if ( !mInstance )
        goto LABEL_87;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         mInstance,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v72 + 16) = Component_srcLineSprite;
      v97 = (BaseDialog_o **)(v72 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v72 + 16), Component_srcLineSprite, v98, v99, v100, v101, v102, v103);
      mInstance = *(UnityEngine_GameObject_o **)(v72 + 16);
      if ( !mInstance )
        goto LABEL_87;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v74, v104, v105);
        byte_42E4B1E = 1;
      }
      v106 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v106 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_GameObject_o *)v106->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_87;
      *(_QWORD *)&v142.fields.value.fields.x = 0LL;
      *(_QWORD *)&v142.fields.value.fields.z = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v97, v142, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mInstance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_87;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v72 + 36),
                                *(_DWORD *)(v72 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v109 = EventDataLostBattleId;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__SetTitleInfoTouchEnable(0, v108);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mInstance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_87;
      mInstance = (UnityEngine_GameObject_o *)EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                                                (EventDataLostBattleResetMaster_o *)mInstance,
                                                v109,
                                                *(_DWORD *)(v72 + 32),
                                                0LL);
      if ( !mInstance )
        goto LABEL_87;
      v110 = mInstance;
      v111 = (System_String_o *)StringLiteral_1/*""*/;
      klass = (int)mInstance[1].klass;
      v112 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 2LL);
      *(_QWORD *)(v72 + 40) = v112;
      v113 = (__int64 *)(v72 + 40);
      sub_B5D560((BattleServantConfConponent_o *)(v72 + 40), v112, v114, v115, v116, v117, v118, v119);
      v120 = System_Int32__ToString((int32_t)&klass, 0LL);
      v121 = System_String__Concat_44577788((System_String_o *)StringLiteral_5698/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v120, 0LL);
      v122 = v121;
      if ( klass >= 2 && *(_BYTE *)(v72 + 48) )
        v122 = System_String__Concat_44577788(v121, (System_String_o *)StringLiteral_16215/*"_NO_CANCEL"*/, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v123 = LocalizationManager__Get(v122, 0LL);
      mInstance = (UnityEngine_GameObject_o *)System_String__op_Equality(v123, v122, 0LL);
      if ( ((unsigned __int8)mInstance & 1) != 0 )
        v124 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v124 = v123;
      if ( klass >= 2 )
      {
        if ( !LODWORD(v110[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v128 = *(_QWORD *)&v110->fields.m_CachedPtr;
        v129 = *(_QWORD *)(v128 + 32);
        if ( !v129 )
          goto LABEL_87;
        v111 = *(System_String_o **)(v129 + 32);
        if ( LODWORD(v110[1].klass) <= 1 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v130 = *(_QWORD *)(v128 + 40);
        if ( !v130 )
          goto LABEL_87;
        v126 = *(System_String_o **)(v130 + 32);
        v131 = *v113;
        if ( !LODWORD(v110[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v132 = *(_QWORD *)(v128 + 32);
        if ( !v132 || !v131 )
          goto LABEL_87;
        if ( *(_DWORD *)(v131 + 24) )
        {
          *(_DWORD *)(v131 + 32) = *(_DWORD *)(v132 + 20);
          v133 = *v113;
          if ( LODWORD(v110[1].klass) <= 1 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v134 = *(_QWORD *)(*(_QWORD *)&v110->fields.m_CachedPtr + 40LL);
          if ( !v134 || !v133 )
            goto LABEL_87;
          if ( *(_DWORD *)(v133 + 24) > 1u )
          {
            *(_DWORD *)(v133 + 36) = *(_DWORD *)(v134 + 20);
LABEL_81:
            v135 = *v97;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v136 = LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v137 = *(unsigned __int8 *)(v72 + 48);
            v138 = v136;
            v139 = (ResetSelectDialog_ClickDelegate_o *)sub_B5D694(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v139,
              (Il2CppObject *)v72,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              0LL);
            if ( v135 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v135, v138, v124, v111, v126, v137 != 0, v139, 0LL);
              return;
            }
LABEL_87:
            sub_B5D69C(mInstance, v74);
          }
        }
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        mInstance = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5697/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v125 = *v113;
        v126 = (System_String_o *)mInstance;
        if ( !LODWORD(v110[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v127 = *(_QWORD *)(*(_QWORD *)&v110->fields.m_CachedPtr + 32LL);
        if ( !v127 || !v125 )
          goto LABEL_87;
        if ( *(_DWORD *)(v125 + 24) )
        {
          *(_DWORD *)(v125 + 32) = *(_DWORD *)(v127 + 20);
          goto LABEL_81;
        }
      }
      v140 = sub_B5D6C8(mInstance);
      sub_B5D668(v140, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall DataLostResetManager__PlayGameOverAnimation(
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EA34B & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, warId, (_DWORD)endAction, method);
    byte_42EA34B = 1;
  }
  v7 = sub_B5D694(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  DataLostResetManager__PlayGameOverAnimation_d__11___ctor(
    (DataLostResetManager__PlayGameOverAnimation_d__11_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)endAction, v10, v11, v12, v13, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall DataLostResetManager__PlayResetEffect(
        UnityEngine_MonoBehaviour_o *mono,
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_42EA34A & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager_TypeInfo, eventId, warId, endAction);
    byte_42EA34A = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_B5D69C(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(mono, v9, 0LL);
}


void __fastcall DataLostResetManager__RequestResetDataLostBattle(
        int32_t eventId,
        int32_t warId,
        int32_t resetIdx,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  int32_t EventDataLostBattleId; // w0
  int32_t v21; // w21

  if ( (byte_42EA349 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, warId, resetIdx, callback);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    byte_42EA349 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            Master_WarQuestSelectionMaster,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v21 = EventDataLostBattleId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      callback,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_WarQuestSelectionMaster )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_WarQuestSelectionMaster,
        v21,
        resetIdx,
        0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
  }
}


void __fastcall DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v16; // x1

  if ( (byte_42EA34C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v7, v8, v9);
    byte_42EA34C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B62 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B62 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_42E5CC5 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v10 = TerminalPramsManager_TypeInfo;
    byte_42E5CC5 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_42E5CC3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v10 = TerminalPramsManager_TypeInfo;
    byte_42E5CC3 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_42E5CC4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v10 = TerminalPramsManager_TypeInfo;
    byte_42E5CC4 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v10 = TerminalPramsManager_TypeInfo;
    byte_42E4B29 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_42E816C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E816C = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_42E5CC6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_42E5CC6 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_42E5CC7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_42E5CC7 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v16);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalSceneComponent_c *v8; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v10; // x1
  int v11; // w2
  __int64 v12; // x3
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_42EA344 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42EA344 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v8->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v10, v11, v12);
      byte_42E4B1E = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
      sub_B5D69C(genericContainerHandle, v10);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager_ClickDelegate___ctor(
        DataLostResetManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall DataLostResetManager_ClickDelegate__BeginInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = resetIdx;
  if ( (byte_42E6D5E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, resetIdx, (_DWORD)callback, object);
    byte_42E6D5E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager_ClickDelegate__Invoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  DataLostResetManager_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  DataLostResetManager_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  DataLostResetManager_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (DataLostResetManager_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&resetIdx, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)resetIdx, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)resetIdx, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)resetIdx, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)resetIdx,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)resetIdx, v21);
    goto LABEL_37;
  }
}


void __fastcall DataLostResetManager__PlayGameOverAnimation_d__11___ctor(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataLostResetManager__PlayGameOverAnimation_d__11__MoveNext(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int32_t _1__state; // w8
  Il2CppObject *v69; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  void *clip; // x0
  System_Int32_array **endAction; // x1
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v90; // x21
  DataLostResetManager_c *v91; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v93; // x22
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  int v100; // w2
  __int64 v101; // x3
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v103; // x8
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v111; // x8
  srcLineSprite_o *Component_srcLineSprite; // x22
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  float v119; // s8
  float v120; // s9
  struct System_String_o *mcMyTrans; // x1
  DataLostResetManager___c_c *v122; // x0
  struct DataLostResetManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v125; // x21
  struct DataLostResetManager___c_StaticFields *v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  UnityEngine_WaitWhile_o *v133; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v142; // x0
  System_Reflection_MethodBase_o *v143; // x0
  WebViewManager_o *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v147; // x19
  System_Action_o *v148; // x20
  struct DataLostResetManager___c__DisplayClass11_0_o *v149; // x8
  UnityEngine_Object_o *v150; // x20
  srcLineSprite_o *v151; // x21
  System_String_o *name; // x0
  System_String_o *v153; // x0
  UnityEngine_WaitForSeconds_o *v154; // x20
  Il2CppObject **v155; // x19
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7

  if ( (byte_42E6D5D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v5, v6, v7);
    sub_B5D5C4(&AssetManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SoundManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v44, v45, v46);
    sub_B5D5C4(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v47, v48, v49);
    sub_B5D5C4(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v50, v51, v52);
    sub_B5D5C4(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&DataLostResetManager___c_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_1/*""*/, v65, v66, v67);
    byte_42E6D5D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v142 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 75) & 2) != 0 )
        v142 = (_QWORD *)sub_B5D5CC(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v143 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v142, v142[3]);
      OverwriteAssetSoundName__PlaySe(v143, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v147 = (CommonUI_o *)Instance;
    v148 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v148,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v147 )
      goto LABEL_82;
    CommonUI__maskFadeout(v147, 2, whiteOutTime_5__2, v148, 0LL);
    goto LABEL_55;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v122 = DataLostResetManager___c_TypeInfo;
    if ( (BYTE3(DataLostResetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v122 = DataLostResetManager___c_TypeInfo;
    }
    static_fields = v122->static_fields;
    _9__11_0 = static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v122->vtable._0_Equals.methodPtr) & 4) != 0 && !v122->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v122);
        static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      }
      v125 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__11_0,
        v125,
        Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v126 = DataLostResetManager___c_TypeInfo->static_fields;
      v126->__9__11_0 = _9__11_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v126->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v127,
        v128,
        v129,
        v130,
        v131,
        v132);
    }
    v133 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v133, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v133;
    p__2__current = &this->fields.__2__current;
    sub_B5D560(
      (BattleServantConfConponent_o *)p__2__current,
      (System_Int32_array **)v133,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
    *((_DWORD *)p__2__current - 2) = 2;
    LOBYTE(AssetStorage) = 1;
  }
  else
  {
    if ( _1__state )
      goto LABEL_55;
    this->fields.__1__state = -1;
    v69 = (Il2CppObject *)sub_B5D694(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor(v69, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v69;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v69,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    clip = this->fields.__8__1;
    if ( !clip )
      goto LABEL_82;
    endAction = (System_Int32_array **)this->fields.endAction;
    *((_QWORD *)clip + 3) = endAction;
    sub_B5D560((BattleServantConfConponent_o *)((char *)clip + 24), endAction, v78, v79, v80, v81, v82, v83);
    eventId = this->fields.eventId;
    warId = this->fields.warId;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
    if ( AssetStorage )
    {
      v90 = AssetStorage;
      v91 = DataLostResetManager_TypeInfo;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        v91 = DataLostResetManager_TypeInfo;
      }
      Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   v90,
                                                                                   v91->static_fields->PREFAB_EFFECT_NAME,
                                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v93 = *p__8__1;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        clip = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 Object_WarBoardWaitTimeSetting,
                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v93 )
        {
          v93->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v93->fields,
            (System_Int32_array **)clip,
            v94,
            v95,
            v96,
            v97,
            v98,
            v99);
          if ( *p__8__1 )
          {
            gameOverEffect = (*p__8__1)->fields.gameOverEffect;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_42E4B1E )
            {
              sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v77, v100, v101);
              byte_42E4B1E = 1;
            }
            clip = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              clip = TerminalSceneComponent_TypeInfo;
            }
            v103 = **((_QWORD **)clip + 23);
            if ( v103 )
            {
              GameObjectExtensions__SafeSetParent_32436524(
                gameOverEffect,
                *(UnityEngine_GameObject_o **)(v103 + 328),
                0LL);
              this->fields._whiteOutTime_5__2 = 1.5;
              v104 = (System_Int32_array **)StringLiteral_1/*""*/;
              this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109,
                v110);
              v111 = this->fields.__8__1;
              if ( v111 )
              {
                clip = v111->fields.gameOverEffect;
                if ( clip )
                {
                  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)clip,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                  clip = (void *)UnityEngine_Object__op_Inequality(
                                   (UnityEngine_Object_o *)Component_srcLineSprite,
                                   0LL,
                                   0LL);
                  if ( ((unsigned __int8)clip & 1) != 0 )
                  {
                    if ( !Component_srcLineSprite )
                      goto LABEL_82;
                    v120 = *(float *)&Component_srcLineSprite->fields.mFSM;
                    v119 = *((float *)&Component_srcLineSprite->fields.mFSM + 1);
                    this->fields._whiteOutTime_5__2 = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
                    mcMyTrans = (struct System_String_o *)Component_srcLineSprite->fields.mcMyTrans;
                    this->fields._whiteOutSe_5__3 = mcMyTrans;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                      (System_Int32_array **)mcMyTrans,
                      v113,
                      v114,
                      v115,
                      v116,
                      v117,
                      v118);
                  }
                  else
                  {
                    v120 = 1.5;
                    v119 = 6.5;
                  }
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  SoundManager__fadeoutBgm(v120, 0LL);
                  if ( *p__8__1 )
                  {
                    clip = (*p__8__1)->fields.gameOverEffect;
                    if ( clip )
                    {
                      clip = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)clip,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                      v149 = *p__8__1;
                      if ( *p__8__1 )
                      {
                        v150 = (UnityEngine_Object_o *)clip;
                        clip = v149->fields.gameOverEffect;
                        if ( clip )
                        {
                          v151 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)clip,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          clip = (void *)UnityEngine_Object__op_Inequality(v150, 0LL, 0LL);
                          if ( ((unsigned __int8)clip & 1) != 0 )
                          {
                            if ( v150 )
                            {
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v150, 0LL);
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                                clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v150, 0LL);
                                if ( clip )
                                {
                                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                  UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v150, name, 0LL);
LABEL_81:
                                  v154 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
                                  UnityEngine_WaitForSeconds___ctor(v154, v119, 0LL);
                                  this->fields.__2__current = (Il2CppObject *)v154;
                                  v155 = &this->fields.__2__current;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)v155,
                                    (System_Int32_array **)v154,
                                    v156,
                                    v157,
                                    v158,
                                    v159,
                                    v160,
                                    v161);
                                  LOBYTE(AssetStorage) = 1;
                                  *((_DWORD *)v155 - 2) = 1;
                                  return (char)AssetStorage;
                                }
                              }
                            }
                          }
                          else
                          {
                            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            }
                            clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v151, 0LL, 0LL);
                            if ( ((unsigned __int8)clip & 1) == 0 )
                              goto LABEL_81;
                            if ( v151 )
                            {
                              clip = v151->fields.msSpriteName;
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                                clip = v151->fields.msSpriteName;
                                if ( clip )
                                {
                                  v153 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                  SimpleAnimation__Play_16676044((SimpleAnimation_o *)v151, v153, 0LL);
                                  goto LABEL_81;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_82:
        sub_B5D69C(clip, v77);
      }
LABEL_55:
      LOBYTE(AssetStorage) = 0;
    }
  }
  return (char)AssetStorage;
}


Il2CppObject *__fastcall DataLostResetManager__PlayGameOverAnimation_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataLostResetManager__PlayGameOverAnimation_d__11__System_Collections_IEnumerator_Reset(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall DataLostResetManager__PlayGameOverAnimation_d__11__System_Collections_IEnumerator_get_Current(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataLostResetManager__PlayGameOverAnimation_d__11__System_IDisposable_Dispose(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataLostResetManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D54 & 1) == 0 )
  {
    sub_B5D5C4(&DataLostResetManager___c_TypeInfo, v1, v2, v3);
    byte_42E6D54 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6D55 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6D55 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return !CTouch__isTouchPush(0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass11_0___ctor(
        DataLostResetManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass11_0___PlayGameOverAnimation_b__1(
        DataLostResetManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameOverEffect; // x20
  System_Action_o *endAction; // x0

  if ( (byte_42E6D56 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6D56 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameOverEffect, 0LL);
  endAction = this->fields.endAction;
  if ( endAction )
    System_Action__Invoke(endAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass6_0___ctor(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__0(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        int32_t selectNo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataLostResetManager___c__DisplayClass6_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v23; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20
  __int64 v26; // x0

  v5 = this;
  if ( (byte_42E6D57 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, selectNo, (_DWORD)method, v3);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v6, v7, v8);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_B5D5C4(
                                                            &Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
                                                            v9,
                                                            v10,
                                                            v11);
    byte_42E6D57 = 1;
  }
  _9__1 = v5->fields.__9__1;
  selectDialog = v5->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !selectDialog )
    goto LABEL_17;
  ResetSelectDialog__Close_32376728(selectDialog, _9__1, 0LL);
  if ( selectNo )
  {
    idx = v5->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
      {
        v26 = sub_B5D6C8(this);
        sub_B5D668(v26, 0LL);
      }
      eventId = v5->fields.eventId;
      warId = v5->fields.warId;
      v23 = idx->m_Items[selectNo];
      isNoCancel = v5->fields.isNoCancel;
      resetDelegate = v5->fields.resetDelegate;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v23, isNoCancel, resetDelegate, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&selectNo);
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__SetTitleInfoTouchEnable(1, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_42E6D58 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6D58 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(selectDialogObj, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass7_0___ctor(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__0(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataLostResetManager___c__DisplayClass7_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  ResetConfirmDialog_o *confirmDialog; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x0
  int32_t resetIdx; // w1
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v25; // x19

  v5 = this;
  if ( (byte_42E6D59 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v6, v7, v8);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_B5D5C4(
                                                            &Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
                                                            v9,
                                                            v10,
                                                            v11);
    byte_42E6D59 = 1;
  }
  _9__1 = v5->fields.__9__1;
  confirmDialog = v5->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !confirmDialog )
    sub_B5D69C(this, isDecide);
  ResetConfirmDialog__Close_32373000(confirmDialog, _9__1, 0LL);
  if ( isDecide )
  {
    resetDelegate = v5->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = v5->fields.resetIdx;
LABEL_19:
      DataLostResetManager_ClickDelegate__Invoke(resetDelegate, resetIdx, v20);
    }
  }
  else if ( v5->fields.isBackReturn )
  {
    eventId = v5->fields.eventId;
    warId = v5->fields.warId;
    v25 = v5->fields.resetDelegate;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v25, 0LL);
  }
  else
  {
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__SetTitleInfoTouchEnable(1, 0LL);
    resetDelegate = v5->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = -1;
      goto LABEL_19;
    }
  }
}


void __fastcall DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__1(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *confirmDialogObj; // x19

  if ( (byte_42E6D5A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6D5A = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(confirmDialogObj, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___ctor(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__0(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        int32_t selectNo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataLostResetManager___c__DisplayClass8_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *_9__1; // x21
  ResetSelectDialog_o *selectDialog; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v4 = this;
  if ( (byte_42E6D5B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, selectNo, (_DWORD)method, v3);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_B5D5C4(
                                                            &Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
                                                            v5,
                                                            v6,
                                                            v7);
    byte_42E6D5B = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !selectDialog )
    sub_B5D69C(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_32376728(selectDialog, _9__1, 0LL);
  ActionExtensions__Call(v4->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_42E6D5C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6D5C = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(selectDialogObj, 0LL);
}