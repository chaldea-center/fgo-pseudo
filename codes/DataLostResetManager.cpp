void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct DataLostResetManager_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct DataLostResetManager_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FB40B & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11413/*"ResetConfirmDialog"*/, v8);
    sub_B16FFC(&StringLiteral_16726/*"bit_raidreset"*/, v9);
    sub_B16FFC(&StringLiteral_11416/*"ResetSelectDialog"*/, v10);
    byte_40FB40B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16726/*"bit_raidreset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16726/*"bit_raidreset"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = DataLostResetManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_11416/*"ResetSelectDialog"*/;
  v13->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11416/*"ResetSelectDialog"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v13->PREFAB_SELECT_DIALOG_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = DataLostResetManager_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_11413/*"ResetConfirmDialog"*/;
  v21->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11413/*"ResetConfirmDialog"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v21->PREFAB_CONFIRM_DIALOG_NAME, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall DataLostResetManager___ctor(DataLostResetManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataLostResetManager__GetEventAssetName(
        int32_t eventId,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF
  int v12; // [xsp+18h] [xbp-18h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40FB403 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&warId);
    sub_B16FFC(&StringLiteral_6189/*"EventUI/Prefabs/{0}"*/, v5);
    sub_B16FFC(&StringLiteral_6190/*"EventUI/Prefabs/{0}/{1}"*/, v6);
    byte_40FB403 = 1;
  }
  if ( eventId )
  {
    v13 = eventId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format((System_String_o *)StringLiteral_6189/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
  }
  else
  {
    v12 = 0;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v11 = warId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    return System_String__Format_43739268((System_String_o *)StringLiteral_6190/*"EventUI/Prefabs/{0}/{1}"*/, v9, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__OpenBattleResultResetDialog(
        int32_t eventId,
        int32_t warId,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v33; // x23
  DataLostResetManager_c *v34; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **Component_srcLineSprite; // x0
  UnityEngine_Component_o **v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Transform_o *transform; // x25
  WebViewManager_o *Instance; // x0
  UnityEngine_Component_o *basePanel; // x0
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_Transform_o *v55; // x25
  int v56; // s0
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v60; // x1
  UnityEngine_Component_o *v61; // x19
  System_String_o *v62; // x20
  System_String_o *v63; // x22
  System_String_o *v64; // x23
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  ResetSelectDialog_ClickDelegate_o *v69; // x24
  UnityEngine_Object_o *v70; // x19

  if ( (byte_40FB406 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&warId);
    sub_B16FFC(&AssetManager_TypeInfo, v8);
    sub_B16FFC(&ResetSelectDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v18);
    sub_B16FFC(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_5595/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v20);
    sub_B16FFC(&StringLiteral_5597/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v21);
    sub_B16FFC(&StringLiteral_5596/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v22);
    byte_40FB406 = 1;
  }
  v23 = sub_B170CC(DataLostResetManager___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&warId, closeAction, method, v4);
  DataLostResetManager___c__DisplayClass8_0___ctor((DataLostResetManager___c__DisplayClass8_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_47;
  *(_QWORD *)(v23 + 32) = closeAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v23 + 32),
    (System_Int32_array **)closeAction,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v30);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v33 = AssetStorage;
    v34 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v34 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v33,
                                                                                 v34->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
      v36 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v23 + 24) = v36;
      sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), v36, v37, v38, v39, v40, v41, v42);
      if ( !*(_QWORD *)(v23 + 24) )
        goto LABEL_47;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         *(UnityEngine_GameObject_o **)(v23 + 24),
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v23 + 16) = Component_srcLineSprite;
      v44 = (UnityEngine_Component_o **)(v23 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), Component_srcLineSprite, v45, v46, v47, v48, v49, v50);
      if ( !*(_QWORD *)(v23 + 16) )
        goto LABEL_47;
      ResetSelectDialog__Init(*(ResetSelectDialog_o **)(v23 + 16), 0LL);
      if ( !*v44 )
        goto LABEL_47;
      transform = UnityEngine_Component__get_transform(*v44, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_47;
      basePanel = (UnityEngine_Component_o *)Instance[1].fields.basePanel;
      if ( !basePanel )
        goto LABEL_47;
      v54 = UnityEngine_Component__get_transform(basePanel, 0LL);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Transform__SetParent(transform, v54, 0LL);
      if ( !*v44 )
        goto LABEL_47;
      v55 = UnityEngine_Component__get_transform(*v44, 0LL);
      *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_one(0LL);
      if ( !v55 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v55, *(UnityEngine_Vector3_o *)&v56, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_47;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(Master_WarQuestSelectionMaster, warId, eventId, 0LL) != -1 )
      {
        if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataLostResetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        }
        DataLostResetManager__SetTitleInfoTouchEnable(0, v60);
        v61 = *v44;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5595/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v69 = (ResetSelectDialog_ClickDelegate_o *)sub_B170CC(
                                                     ResetSelectDialog_ClickDelegate_TypeInfo,
                                                     v65,
                                                     v66,
                                                     v67,
                                                     v68);
        ResetSelectDialog_ClickDelegate___ctor(
          v69,
          (Il2CppObject *)v23,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          0LL);
        if ( v61 )
        {
          ResetSelectDialog__OpenSingleButton((ResetSelectDialog_o *)v61, v62, v63, v64, v69, 0LL);
          return;
        }
LABEL_47:
        sub_B170D4();
      }
      v70 = *(UnityEngine_Object_o **)(v23 + 24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v70, 0LL);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v23 + 32), 0LL);
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
  __int64 v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v35; // x20
  DataLostResetManager_c *v36; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_GameObject_o *v45; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  BaseDialog_o **v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  TerminalSceneComponent_c *v55; // x0
  TerminalSceneComponent_o *mInstance; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  bool v62; // w0
  BaseDialog_o *v63; // x21
  System_String_o *v64; // x20
  System_String_o *v65; // x0
  int v66; // w24
  System_String_o *v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  ResetConfirmDialog_ClickDelegate_o *v72; // x23
  int32_t v73; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v74; // 0:x2.16

  v73 = selectNo;
  if ( (byte_40FB405 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&warId);
    sub_B16FFC(&AssetManager_TypeInfo, v12);
    sub_B16FFC(&ResetConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v20);
    sub_B16FFC(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_5603/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v22);
    sub_B16FFC(&StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v23);
    sub_B16FFC(&StringLiteral_1/*""*/, v24);
    byte_40FB405 = 1;
  }
  v25 = sub_B170CC(
          DataLostResetManager___c__DisplayClass7_0_TypeInfo,
          *(_QWORD *)&warId,
          *(_QWORD *)&selectNo,
          *(_QWORD *)&resetIdx,
          isBackReturn);
  DataLostResetManager___c__DisplayClass7_0___ctor((DataLostResetManager___c__DisplayClass7_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_44;
  *(_QWORD *)(v25 + 32) = resetDelegate;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v25 + 32),
    (System_Int32_array **)resetDelegate,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(_DWORD *)(v25 + 40) = resetIdx;
  *(_DWORD *)(v25 + 48) = eventId;
  *(_DWORD *)(v25 + 52) = warId;
  *(_BYTE *)(v25 + 44) = isBackReturn;
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v32);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v35 = AssetStorage;
    v36 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v36 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v35,
                                                                                 v36->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
      v38 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v25 + 24) = v38;
      sub_B16F98((BattleServantConfConponent_o *)(v25 + 24), v38, v39, v40, v41, v42, v43, v44);
      v45 = *(UnityEngine_GameObject_o **)(v25 + 24);
      if ( v45 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v45,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v25 + 16) = Component_srcLineSprite;
        v47 = (BaseDialog_o **)(v25 + 16);
        sub_B16F98((BattleServantConfConponent_o *)(v25 + 16), Component_srcLineSprite, v48, v49, v50, v51, v52, v53);
        if ( *(_QWORD *)(v25 + 16) )
        {
          ResetConfirmDialog__Init(*(ResetConfirmDialog_o **)(v25 + 16), 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v54);
            byte_40F6042 = 1;
          }
          v55 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v55 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v55->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v74.fields.value.fields.x = 0LL;
            *(_QWORD *)&v74.fields.value.fields.z = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot(mInstance, *v47, v74, 0LL);
            v57 = System_Int32__ToString((int32_t)&v73, 0LL);
            v58 = System_String__Concat_43743732((System_String_o *)StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v57, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v59 = LocalizationManager__Get(v58, 0LL);
            v60 = System_Int32__ToString((int32_t)&v73, 0LL);
            v61 = System_String__Concat_43743732((System_String_o *)StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v60, 0LL);
            v62 = System_String__op_Equality(v59, v61, 0LL);
            v63 = *v47;
            v64 = v62 ? (System_String_o *)StringLiteral_1/*""*/ : v59;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v66 = *(unsigned __int8 *)(v25 + 44);
            v67 = v65;
            v72 = (ResetConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                          ResetConfirmDialog_ClickDelegate_TypeInfo,
                                                          v68,
                                                          v69,
                                                          v70,
                                                          v71);
            ResetConfirmDialog_ClickDelegate___ctor(
              v72,
              (Il2CppObject *)v25,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              0LL);
            if ( v63 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v63, v67, v64, v66 != 0, v72, 0LL);
              return;
            }
          }
        }
      }
LABEL_44:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__OpenResetSelectDialog(
        int32_t eventId,
        int32_t warId,
        bool isNoCancel,
        DataLostResetManager_ClickDelegate_o *resetDelegate,
        const MethodInfo *method)
{
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
  __int64 v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  int32_t v38; // w20
  int32_t v39; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v42; // x20
  DataLostResetManager_c *v43; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_GameObject_o *v52; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  BaseDialog_o **v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  TerminalSceneComponent_c *v62; // x0
  TerminalSceneComponent_o *mInstance; // x0
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v66; // x1
  int32_t v67; // w21
  EventDataLostBattleResetMaster_o *v68; // x0
  System_Collections_Generic_List_EventDataLostBattleResetEntity__o *DataLostBattleResetEntities; // x0
  __int64 v70; // x2
  System_Collections_Generic_List_EventDataLostBattleResetEntity__o *v71; // x22
  System_String_o *resetMessage; // x21
  System_Int32_array **v73; // x0
  __int64 *v74; // x24
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x23
  System_String_o *v84; // x25
  System_String_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  System_String_o *v88; // x23
  __int64 v89; // x24
  System_String_o *v90; // x25
  EventDataLostBattleResetEntity_o *v91; // x8
  struct EventDataLostBattleResetEntity_array *items; // x8
  EventDataLostBattleResetEntity_o *v93; // x9
  EventDataLostBattleResetEntity_o *v94; // x9
  __int64 v95; // x27
  EventDataLostBattleResetEntity_o *v96; // x8
  __int64 v97; // x24
  EventDataLostBattleResetEntity_o *v98; // x8
  BaseDialog_o *v99; // x20
  System_String_o *v100; // x0
  int v101; // w26
  System_String_o *v102; // x22
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  ResetSelectDialog_ClickDelegate_o *v107; // x24
  int32_t size; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v109; // 0:x2.16

  if ( (byte_40FB404 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&warId);
    sub_B16FFC(&AssetManager_TypeInfo, v9);
    sub_B16FFC(&ResetSelectDialog_ClickDelegate_TypeInfo, v10);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v22);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v23);
    sub_B16FFC(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_15960/*"_NO_CANCEL"*/, v25);
    sub_B16FFC(&StringLiteral_5605/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v26);
    sub_B16FFC(&StringLiteral_5606/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v27);
    sub_B16FFC(&StringLiteral_5607/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v28);
    sub_B16FFC(&StringLiteral_1/*""*/, v29);
    byte_40FB404 = 1;
  }
  size = 0;
  v30 = sub_B170CC(
          DataLostResetManager___c__DisplayClass6_0_TypeInfo,
          *(_QWORD *)&warId,
          isNoCancel,
          resetDelegate,
          method);
  DataLostResetManager___c__DisplayClass6_0___ctor((DataLostResetManager___c__DisplayClass6_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_87;
  *(_QWORD *)(v30 + 56) = resetDelegate;
  *(_DWORD *)(v30 + 32) = eventId;
  *(_DWORD *)(v30 + 36) = warId;
  *(_BYTE *)(v30 + 48) = isNoCancel;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v30 + 56),
    (System_Int32_array **)resetDelegate,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v39 = *(_DWORD *)(v30 + 32);
  v38 = *(_DWORD *)(v30 + 36);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(v39, v38, v37);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v42 = AssetStorage;
    v43 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v43 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v42,
                                                                                 v43->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
      v45 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v30 + 24) = v45;
      sub_B16F98((BattleServantConfConponent_o *)(v30 + 24), v45, v46, v47, v48, v49, v50, v51);
      v52 = *(UnityEngine_GameObject_o **)(v30 + 24);
      if ( !v52 )
        goto LABEL_87;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v52,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v30 + 16) = Component_srcLineSprite;
      v54 = (BaseDialog_o **)(v30 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), Component_srcLineSprite, v55, v56, v57, v58, v59, v60);
      if ( !*(_QWORD *)(v30 + 16) )
        goto LABEL_87;
      ResetSelectDialog__Init(*(ResetSelectDialog_o **)(v30 + 16), 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v61);
        byte_40F6042 = 1;
      }
      v62 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v62 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v62->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_87;
      *(_QWORD *)&v109.fields.value.fields.x = 0LL;
      *(_QWORD *)&v109.fields.value.fields.z = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot(mInstance, *v54, v109, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_87;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                Master_WarQuestSelectionMaster,
                                *(_DWORD *)(v30 + 36),
                                *(_DWORD *)(v30 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v67 = EventDataLostBattleId;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__SetTitleInfoTouchEnable(0, v66);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v68 = (EventDataLostBattleResetMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !v68 )
        goto LABEL_87;
      DataLostBattleResetEntities = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                                      v68,
                                      v67,
                                      *(_DWORD *)(v30 + 32),
                                      0LL);
      if ( !DataLostBattleResetEntities )
        goto LABEL_87;
      v71 = DataLostBattleResetEntities;
      resetMessage = (System_String_o *)StringLiteral_1/*""*/;
      size = DataLostBattleResetEntities->fields._size;
      v73 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v70);
      *(_QWORD *)(v30 + 40) = v73;
      v74 = (__int64 *)(v30 + 40);
      sub_B16F98((BattleServantConfConponent_o *)(v30 + 40), v73, v75, v76, v77, v78, v79, v80);
      v81 = System_Int32__ToString((int32_t)&size, 0LL);
      v82 = System_String__Concat_43743732((System_String_o *)StringLiteral_5606/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v81, 0LL);
      v83 = v82;
      if ( size >= 2 && *(_BYTE *)(v30 + 48) )
        v83 = System_String__Concat_43743732(v82, (System_String_o *)StringLiteral_15960/*"_NO_CANCEL"*/, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v84 = LocalizationManager__Get(v83, 0LL);
      v85 = (System_String_o *)System_String__op_Equality(v84, v83, 0LL);
      if ( ((unsigned __int8)v85 & 1) != 0 )
        v88 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v88 = v84;
      if ( size >= 2 )
      {
        if ( !v71->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        items = v71->fields._items;
        v93 = items->m_Items[0];
        if ( !v93 )
          goto LABEL_87;
        resetMessage = v93->fields.resetMessage;
        if ( v71->fields._size <= 1u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v94 = items->m_Items[1];
        if ( !v94 )
          goto LABEL_87;
        v90 = v94->fields.resetMessage;
        v95 = *v74;
        if ( !v71->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v96 = items->m_Items[0];
        if ( !v96 || !v95 )
          goto LABEL_87;
        if ( *(_DWORD *)(v95 + 24) )
        {
          *(_DWORD *)(v95 + 32) = v96->fields.idx;
          v97 = *v74;
          if ( v71->fields._size <= 1u )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v98 = v71->fields._items->m_Items[1];
          if ( !v98 || !v97 )
            goto LABEL_87;
          if ( *(_DWORD *)(v97 + 24) > 1u )
          {
            *(_DWORD *)(v97 + 36) = v98->fields.idx;
LABEL_81:
            v99 = *v54;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v100 = LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v101 = *(unsigned __int8 *)(v30 + 48);
            v102 = v100;
            v107 = (ResetSelectDialog_ClickDelegate_o *)sub_B170CC(
                                                          ResetSelectDialog_ClickDelegate_TypeInfo,
                                                          v103,
                                                          v104,
                                                          v105,
                                                          v106);
            ResetSelectDialog_ClickDelegate___ctor(
              v107,
              (Il2CppObject *)v30,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              0LL);
            if ( v99 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v99, v102, v88, resetMessage, v90, v101 != 0, v107, 0LL);
              return;
            }
LABEL_87:
            sub_B170D4();
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
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v89 = *v74;
        v90 = v85;
        if ( !v71->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v91 = v71->fields._items->m_Items[0];
        if ( !v91 || !v89 )
          goto LABEL_87;
        if ( *(_DWORD *)(v89 + 24) )
        {
          *(_DWORD *)(v89 + 32) = v91->fields.idx;
          goto LABEL_81;
        }
      }
      sub_B17100(v85, v86, v87);
      sub_B170A0();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DataLostResetManager__PlayGameOverAnimation(
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FB409 & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId);
    byte_40FB409 = 1;
  }
  v8 = sub_B170CC(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId, endAction, method, v4);
  DataLostResetManager__PlayGameOverAnimation_d__11___ctor(
    (DataLostResetManager__PlayGameOverAnimation_d__11_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_DWORD *)(v8 + 40) = eventId;
  *(_DWORD *)(v8 + 44) = warId;
  *(_QWORD *)(v8 + 32) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)endAction, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__PlayResetEffect(
        UnityEngine_MonoBehaviour_o *mono,
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v9; // x0

  if ( (byte_40FB408 & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FB408 = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(mono, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__RequestResetDataLostBattle(
        int32_t eventId,
        int32_t warId,
        int32_t resetIdx,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t EventDataLostBattleId; // w0
  int32_t v14; // w21
  EventResetDataLostBattleRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB407 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, *(_QWORD *)&warId);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    byte_40FB407 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            Master_WarQuestSelectionMaster,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v14 = EventDataLostBattleId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (EventResetDataLostBattleRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               callback,
                                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      EventResetDataLostBattleRequest__beginRequest(Request_WarBoardWallAttackRequest, v14, resetIdx, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FB40A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v3);
    byte_40FB40A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6086 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6086 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_40F6E27 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_40F6E27 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_40F6E25 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_40F6E25 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_40F6E26 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_40F6E26 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_40F604D = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_40F98AD )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F98AD = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_40F6E28 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_40F6E28 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_40F6E29 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_40F6E29 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *v8; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40FB402 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40FB402 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
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
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
      byte_40F6042 = 1;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    v8 = v7->static_fields->mInstance;
    if ( !v8 || (mTitleInfo = v8->fields.mTitleInfo) == 0LL )
      sub_B170D4();
    TitleInfoControl__SetTouchEnable(mTitleInfo, flag, 0LL);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F8B29 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&resetIdx);
    byte_40F8B29 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  DataLostResetManager_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  DataLostResetManager_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&resetIdx, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)resetIdx, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)resetIdx, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)resetIdx, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)resetIdx,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)resetIdx, v20);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  int32_t _1__state; // w8
  Il2CppObject *v28; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
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
  struct DataLostResetManager___c__DisplayClass11_0_o *v42; // x0
  System_Int32_array **endAction; // x1
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v48; // x21
  DataLostResetManager_c *v49; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v51; // x22
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  UnityEngine_GameObject_o *gameOverEffect; // x21
  TerminalSceneComponent_c *v61; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v70; // x8
  UnityEngine_GameObject_o *v71; // x0
  srcLineSprite_o *Component_srcLineSprite; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  float v79; // s8
  float v80; // s9
  struct System_String_o *mcMyTrans; // x1
  DataLostResetManager___c_c *v82; // x0
  struct DataLostResetManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v85; // x21
  struct DataLostResetManager___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_WaitWhile_o *v93; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v102; // x0
  System_Reflection_MethodBase_o *v103; // x0
  WebViewManager_o *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v107; // x19
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  System_Action_o *v112; // x20
  UnityEngine_GameObject_o *v113; // x0
  srcLineSprite_o *v114; // x0
  struct DataLostResetManager___c__DisplayClass11_0_o *v115; // x8
  UnityEngine_Animation_o *v116; // x20
  UnityEngine_GameObject_o *v117; // x0
  srcLineSprite_o *v118; // x21
  UnityEngine_AnimationClip_o *clip; // x0
  UnityEngine_Object_o *v120; // x0
  System_String_o *name; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  UnityEngine_AnimationClip_o *msSpriteName; // x0
  UnityEngine_Object_o *v127; // x0
  System_String_o *v128; // x0
  UnityEngine_WaitForSeconds_o *v129; // x20
  Il2CppObject **v130; // x19
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7

  if ( (byte_40F8B28 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v6);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v9);
    sub_B16FFC(&System_Func_bool__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&SoundManager_TypeInfo, v17);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v18);
    sub_B16FFC(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v19);
    sub_B16FFC(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v20);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v21);
    sub_B16FFC(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v22);
    sub_B16FFC(&DataLostResetManager___c_TypeInfo, v23);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v24);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_1/*""*/, v26);
    byte_40F8B28 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v102 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 75) & 2) != 0 )
        v102 = (_QWORD *)sub_B17004(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v103 = (System_Reflection_MethodBase_o *)sub_B16FE0(v102, v102[3]);
      OverwriteAssetSoundName__PlaySe(v103, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v107 = (CommonUI_o *)Instance;
    v112 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v108, v109, v110, v111);
    System_Action___ctor(
      v112,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v107 )
      goto LABEL_82;
    CommonUI__maskFadeout(v107, 2, whiteOutTime_5__2, v112, 0LL);
    goto LABEL_55;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v82 = DataLostResetManager___c_TypeInfo;
    if ( (BYTE3(DataLostResetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v82 = DataLostResetManager___c_TypeInfo;
    }
    static_fields = v82->static_fields;
    _9__11_0 = static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      }
      v85 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
      System_Func_bool____ctor(
        _9__11_0,
        v85,
        Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v86 = DataLostResetManager___c_TypeInfo->static_fields;
      v86->__9__11_0 = _9__11_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v86->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    v93 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitWhile___ctor(v93, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v93;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v93, v95, v96, v97, v98, v99, v100);
    *((_DWORD *)p__2__current - 2) = 2;
    LOBYTE(AssetStorage) = 1;
  }
  else
  {
    if ( _1__state )
      goto LABEL_55;
    this->fields.__1__state = -1;
    v28 = (Il2CppObject *)sub_B170CC(DataLostResetManager___c__DisplayClass11_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v28, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v28;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v28,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v42 = this->fields.__8__1;
    if ( !v42 )
      goto LABEL_82;
    endAction = (System_Int32_array **)this->fields.endAction;
    v42->fields.endAction = (struct System_Action_o *)endAction;
    sub_B16F98((BattleServantConfConponent_o *)&v42->fields.endAction, endAction, v36, v37, v38, v39, v40, v41);
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
      v48 = AssetStorage;
      v49 = DataLostResetManager_TypeInfo;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        v49 = DataLostResetManager_TypeInfo;
      }
      Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   v48,
                                                                                   v49->static_fields->PREFAB_EFFECT_NAME,
                                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v51 = *p__8__1;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v52 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       Object_WarBoardWaitTimeSetting,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v51 )
        {
          v51->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)v52;
          sub_B16F98((BattleServantConfConponent_o *)&v51->fields, v52, v53, v54, v55, v56, v57, v58);
          if ( *p__8__1 )
          {
            gameOverEffect = (*p__8__1)->fields.gameOverEffect;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_40F6042 )
            {
              sub_B16FFC(&TerminalSceneComponent_TypeInfo, v59);
              byte_40F6042 = 1;
            }
            v61 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v61 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v61->static_fields->mInstance;
            if ( mInstance )
            {
              GameObjectExtensions__SafeSetParent_27425996(gameOverEffect, mInstance->fields.mEffectPanel, 0LL);
              this->fields._whiteOutTime_5__2 = 1.5;
              v63 = (System_Int32_array **)StringLiteral_1/*""*/;
              this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68,
                v69);
              v70 = this->fields.__8__1;
              if ( v70 )
              {
                v71 = v70->fields.gameOverEffect;
                if ( v71 )
                {
                  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v71,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
                  {
                    if ( !Component_srcLineSprite )
                      goto LABEL_82;
                    v80 = *(float *)&Component_srcLineSprite->fields.mFSM;
                    v79 = *((float *)&Component_srcLineSprite->fields.mFSM + 1);
                    this->fields._whiteOutTime_5__2 = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
                    mcMyTrans = (struct System_String_o *)Component_srcLineSprite->fields.mcMyTrans;
                    this->fields._whiteOutSe_5__3 = mcMyTrans;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                      (System_Int32_array **)mcMyTrans,
                      v73,
                      v74,
                      v75,
                      v76,
                      v77,
                      v78);
                  }
                  else
                  {
                    v80 = 1.5;
                    v79 = 6.5;
                  }
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  SoundManager__fadeoutBgm(v80, 0LL);
                  if ( *p__8__1 )
                  {
                    v113 = (*p__8__1)->fields.gameOverEffect;
                    if ( v113 )
                    {
                      v114 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v113,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                      v115 = *p__8__1;
                      if ( *p__8__1 )
                      {
                        v116 = (UnityEngine_Animation_o *)v114;
                        v117 = v115->fields.gameOverEffect;
                        if ( v117 )
                        {
                          v118 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v117,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v116, 0LL, 0LL) )
                          {
                            if ( v116 )
                            {
                              clip = UnityEngine_Animation__get_clip(v116, 0LL);
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode(clip, 8, 0LL);
                                v120 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v116, 0LL);
                                if ( v120 )
                                {
                                  name = UnityEngine_Object__get_name(v120, 0LL);
                                  UnityEngine_Animation__Play_49744236(v116, name, 0LL);
LABEL_81:
                                  v129 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(
                                                                           UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v122,
                                                                           v123,
                                                                           v124,
                                                                           v125);
                                  UnityEngine_WaitForSeconds___ctor(v129, v79, 0LL);
                                  this->fields.__2__current = (Il2CppObject *)v129;
                                  v130 = &this->fields.__2__current;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)v130,
                                    (System_Int32_array **)v129,
                                    v131,
                                    v132,
                                    v133,
                                    v134,
                                    v135,
                                    v136);
                                  LOBYTE(AssetStorage) = 1;
                                  *((_DWORD *)v130 - 2) = 1;
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
                            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v118, 0LL, 0LL) )
                              goto LABEL_81;
                            if ( v118 )
                            {
                              msSpriteName = (UnityEngine_AnimationClip_o *)v118->fields.msSpriteName;
                              if ( msSpriteName )
                              {
                                UnityEngine_AnimationClip__set_wrapMode(msSpriteName, 8, 0LL);
                                v127 = (UnityEngine_Object_o *)v118->fields.msSpriteName;
                                if ( v127 )
                                {
                                  v128 = UnityEngine_Object__get_name(v127, 0LL);
                                  SimpleAnimation__Play_16380456((SimpleAnimation_o *)v118, v128, 0LL);
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
        sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B1F & 1) == 0 )
  {
    sub_B16FFC(&DataLostResetManager___c_TypeInfo, v1);
    byte_40F8B1F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DataLostResetManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8B20 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40F8B20 = 1;
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
  UnityEngine_Object_o *gameOverEffect; // x20
  System_Action_o *endAction; // x0

  if ( (byte_40F8B21 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8B21 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameOverEffect, 0LL);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v23; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  if ( (byte_40F8B22 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__, v8);
    byte_40F8B22 = 1;
  }
  _9__1 = this->fields.__9__1;
  selectDialog = this->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&selectNo, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !selectDialog )
    goto LABEL_17;
  ResetSelectDialog__Close_30971476(selectDialog, _9__1, 0LL);
  if ( selectNo )
  {
    idx = this->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
      {
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      eventId = this->fields.eventId;
      warId = this->fields.warId;
      v23 = idx->m_Items[selectNo];
      isNoCancel = this->fields.isNoCancel;
      resetDelegate = this->fields.resetDelegate;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v23, isNoCancel, resetDelegate, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
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
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_40F8B23 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8B23 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(selectDialogObj, 0LL);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *_9__1; // x22
  ResetConfirmDialog_o *confirmDialog; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x0
  int32_t resetIdx; // w1
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v22; // x19

  if ( (byte_40F8B24 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__, v8);
    byte_40F8B24 = 1;
  }
  _9__1 = this->fields.__9__1;
  confirmDialog = this->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !confirmDialog )
    sub_B170D4();
  ResetConfirmDialog__Close_30967748(confirmDialog, _9__1, 0LL);
  if ( isDecide )
  {
    resetDelegate = this->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = this->fields.resetIdx;
LABEL_19:
      DataLostResetManager_ClickDelegate__Invoke(resetDelegate, resetIdx, v17);
    }
  }
  else if ( this->fields.isBackReturn )
  {
    eventId = this->fields.eventId;
    warId = this->fields.warId;
    v22 = this->fields.resetDelegate;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v22, 0LL);
  }
  else
  {
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__SetTitleInfoTouchEnable(1, 0LL);
    resetDelegate = this->fields.resetDelegate;
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
  UnityEngine_Object_o *confirmDialogObj; // x19

  if ( (byte_40F8B25 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8B25 = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(confirmDialogObj, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__1; // x21
  ResetSelectDialog_o *selectDialog; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8B26 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    sub_B16FFC(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__, v6);
    byte_40F8B26 = 1;
  }
  _9__1 = this->fields.__9__1;
  selectDialog = this->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&selectNo, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !selectDialog )
    sub_B170D4();
  ResetSelectDialog__Close_30971476(selectDialog, _9__1, 0LL);
  ActionExtensions__Call(this->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_40F8B27 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8B27 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(selectDialogObj, 0LL);
}