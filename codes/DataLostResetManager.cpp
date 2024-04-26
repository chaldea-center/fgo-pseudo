void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct DataLostResetManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct DataLostResetManager_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4353109 & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&StringLiteral_11603/*"ResetConfirmDialog"*/);
    sub_B70694(&StringLiteral_17044/*"bit_raidreset"*/);
    sub_B70694(&StringLiteral_11606/*"ResetSelectDialog"*/);
    byte_4353109 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17044/*"bit_raidreset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17044/*"bit_raidreset"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = DataLostResetManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11606/*"ResetSelectDialog"*/;
  v9->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11606/*"ResetSelectDialog"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->PREFAB_SELECT_DIALOG_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = DataLostResetManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_11603/*"ResetConfirmDialog"*/;
  v17->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11603/*"ResetConfirmDialog"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->PREFAB_CONFIRM_DIALOG_NAME, v18, v19, v20, v21, v22, v23, v24);
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
  Il2CppObject *v5; // x0
  Il2CppObject *v7; // x20
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF
  int v11; // [xsp+18h] [xbp-18h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4353101 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_6299/*"EventUI/Prefabs/{0}"*/);
    sub_B70694(&StringLiteral_6300/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4353101 = 1;
  }
  if ( eventId )
  {
    v12 = eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method);
    return System_String__Format((System_String_o *)StringLiteral_6299/*"EventUI/Prefabs/{0}"*/, v5, 0LL);
  }
  else
  {
    v11 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method);
    v10 = warId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v8);
    return System_String__Format_44753704((System_String_o *)StringLiteral_6300/*"EventUI/Prefabs/{0}/{1}"*/, v7, v9, 0LL);
  }
}


void __fastcall DataLostResetManager__OpenBattleResultResetDialog(
        int32_t eventId,
        int32_t warId,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v19; // x23
  DataLostResetManager_c *v20; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x23
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4353104 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__);
    sub_B70694(&DataLostResetManager___c__DisplayClass8_0_TypeInfo);
    sub_B70694(&StringLiteral_5698/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/);
    sub_B70694(&StringLiteral_5700/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/);
    sub_B70694(&StringLiteral_5699/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/);
    byte_4353104 = 1;
  }
  v7 = sub_B70764(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  DataLostResetManager___c__DisplayClass8_0___ctor((DataLostResetManager___c__DisplayClass8_0_o *)v7, 0LL);
  if ( !v7 )
LABEL_24:
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = closeAction;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)closeAction,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v16);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v19 = AssetStorage;
    v20 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v20 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v19,
                                                                                 v20->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
      v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v7 + 24) = v22;
      sub_B70630((BattleServantConfConponent_o *)(v7 + 24), v22, v23, v24, v25, v26, v27, v28);
      v8 = *(_QWORD *)(v7 + 24);
      if ( v8 )
        JUMPOUT(0x1A7438CLL);
      goto LABEL_24;
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
}


void __fastcall DataLostResetManager__OpenConfirmDialog(
        int32_t eventId,
        int32_t warId,
        int32_t selectNo,
        int32_t resetIdx,
        bool isBackReturn,
        DataLostResetManager_ClickDelegate_o *resetDelegate,
        const MethodInfo *method)
{
  __int64 v12; // x19
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v24; // x20
  DataLostResetManager_c *v25; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **Component_srcLineSprite; // x0
  BaseDialog_o **v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  TerminalSceneComponent_c *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x21
  System_String_o *v45; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  bool v48; // w0
  BaseDialog_o *v49; // x21
  System_String_o *v50; // x20
  System_String_o *v51; // x0
  int v52; // w24
  System_String_o *v53; // x22
  ResetConfirmDialog_ClickDelegate_o *v54; // x23
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v56; // 0:x2.16

  v55 = selectNo;
  if ( (byte_4353103 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&ResetConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__);
    sub_B70694(&DataLostResetManager___c__DisplayClass7_0_TypeInfo);
    sub_B70694(&StringLiteral_5706/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/);
    sub_B70694(&StringLiteral_5705/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353103 = 1;
  }
  v12 = sub_B70764(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  DataLostResetManager___c__DisplayClass7_0___ctor((DataLostResetManager___c__DisplayClass7_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_44;
  *(_QWORD *)(v12 + 32) = resetDelegate;
  sub_B70630(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)resetDelegate,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_DWORD *)(v12 + 40) = resetIdx;
  *(_DWORD *)(v12 + 48) = eventId;
  *(_DWORD *)(v12 + 52) = warId;
  *(_BYTE *)(v12 + 44) = isBackReturn;
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v21);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v24 = AssetStorage;
    v25 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v25 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v24,
                                                                                 v25->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
      v27 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v12 + 24) = v27;
      sub_B70630((BattleServantConfConponent_o *)(v12 + 24), v27, v28, v29, v30, v31, v32, v33);
      mInstance = *(UnityEngine_GameObject_o **)(v12 + 24);
      if ( mInstance )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           mInstance,
                                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v12 + 16) = Component_srcLineSprite;
        v35 = (BaseDialog_o **)(v12 + 16);
        sub_B70630((BattleServantConfConponent_o *)(v12 + 16), Component_srcLineSprite, v36, v37, v38, v39, v40, v41);
        mInstance = *(UnityEngine_GameObject_o **)(v12 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          v42 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v42 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v42->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v56.fields.value.fields.x = 0LL;
            *(_QWORD *)&v56.fields.value.fields.z = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v35, v56, 0LL);
            v43 = System_Int32__ToString((int32_t)&v55, 0LL);
            v44 = System_String__Concat_44758168((System_String_o *)StringLiteral_5705/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v43, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v45 = LocalizationManager__Get(v44, 0LL);
            v46 = System_Int32__ToString((int32_t)&v55, 0LL);
            v47 = System_String__Concat_44758168((System_String_o *)StringLiteral_5705/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v46, 0LL);
            v48 = System_String__op_Equality(v45, v47, 0LL);
            v49 = *v35;
            v50 = v48 ? (System_String_o *)StringLiteral_1/*""*/ : v45;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v52 = *(unsigned __int8 *)(v12 + 44);
            v53 = v51;
            v54 = (ResetConfirmDialog_ClickDelegate_o *)sub_B70764(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v54,
              (Il2CppObject *)v12,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              0LL);
            if ( v49 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v49, v53, v50, v52 != 0, v54, 0LL);
              return;
            }
          }
        }
      }
LABEL_44:
      sub_B7076C(mInstance, v14);
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
  __int64 v9; // x19
  UnityEngine_GameObject_o *mInstance; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  int32_t v19; // w20
  int32_t v20; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v23; // x20
  DataLostResetManager_c *v24; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **Component_srcLineSprite; // x0
  BaseDialog_o **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  TerminalSceneComponent_c *v41; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v43; // x1
  int32_t v44; // w21
  UnityEngine_GameObject_o *v45; // x22
  System_String_o *v46; // x21
  System_Int32_array **v47; // x0
  __int64 *v48; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x23
  System_String_o *v58; // x25
  System_String_o *v59; // x23
  __int64 v60; // x24
  System_String_o *v61; // x25
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x9
  __int64 v65; // x9
  __int64 v66; // x27
  __int64 v67; // x8
  __int64 v68; // x24
  __int64 v69; // x8
  BaseDialog_o *v70; // x20
  System_String_o *v71; // x0
  int v72; // w26
  System_String_o *v73; // x22
  ResetSelectDialog_ClickDelegate_o *v74; // x24
  __int64 v75; // x0
  int klass; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v77; // 0:x2.16

  if ( (byte_4353102 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__);
    sub_B70694(&DataLostResetManager___c__DisplayClass6_0_TypeInfo);
    sub_B70694(&StringLiteral_16251/*"_NO_CANCEL"*/);
    sub_B70694(&StringLiteral_5708/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/);
    sub_B70694(&StringLiteral_5709/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/);
    sub_B70694(&StringLiteral_5710/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353102 = 1;
  }
  klass = 0;
  v9 = sub_B70764(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  DataLostResetManager___c__DisplayClass6_0___ctor((DataLostResetManager___c__DisplayClass6_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_87;
  *(_QWORD *)(v9 + 56) = resetDelegate;
  *(_DWORD *)(v9 + 32) = eventId;
  *(_DWORD *)(v9 + 36) = warId;
  *(_BYTE *)(v9 + 48) = isNoCancel;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)resetDelegate,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = *(_DWORD *)(v9 + 32);
  v19 = *(_DWORD *)(v9 + 36);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(v20, v19, v18);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v23 = AssetStorage;
    v24 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v24 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v23,
                                                                                 v24->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
      v26 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v9 + 24) = v26;
      sub_B70630((BattleServantConfConponent_o *)(v9 + 24), v26, v27, v28, v29, v30, v31, v32);
      mInstance = *(UnityEngine_GameObject_o **)(v9 + 24);
      if ( !mInstance )
        goto LABEL_87;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         mInstance,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v9 + 16) = Component_srcLineSprite;
      v34 = (BaseDialog_o **)(v9 + 16);
      sub_B70630((BattleServantConfConponent_o *)(v9 + 16), Component_srcLineSprite, v35, v36, v37, v38, v39, v40);
      mInstance = *(UnityEngine_GameObject_o **)(v9 + 16);
      if ( !mInstance )
        goto LABEL_87;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      v41 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v41 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_GameObject_o *)v41->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_87;
      *(_QWORD *)&v77.fields.value.fields.x = 0LL;
      *(_QWORD *)&v77.fields.value.fields.z = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v34, v77, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mInstance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_87;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v9 + 36),
                                *(_DWORD *)(v9 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v44 = EventDataLostBattleId;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__SetTitleInfoTouchEnable(0, v43);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mInstance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_87;
      mInstance = (UnityEngine_GameObject_o *)EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                                                (EventDataLostBattleResetMaster_o *)mInstance,
                                                v44,
                                                *(_DWORD *)(v9 + 32),
                                                0LL);
      if ( !mInstance )
        goto LABEL_87;
      v45 = mInstance;
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      klass = (int)mInstance[1].klass;
      v47 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 2LL);
      *(_QWORD *)(v9 + 40) = v47;
      v48 = (__int64 *)(v9 + 40);
      sub_B70630((BattleServantConfConponent_o *)(v9 + 40), v47, v49, v50, v51, v52, v53, v54);
      v55 = System_Int32__ToString((int32_t)&klass, 0LL);
      v56 = System_String__Concat_44758168((System_String_o *)StringLiteral_5709/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v55, 0LL);
      v57 = v56;
      if ( klass >= 2 && *(_BYTE *)(v9 + 48) )
        v57 = System_String__Concat_44758168(v56, (System_String_o *)StringLiteral_16251/*"_NO_CANCEL"*/, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v58 = LocalizationManager__Get(v57, 0LL);
      mInstance = (UnityEngine_GameObject_o *)System_String__op_Equality(v58, v57, 0LL);
      if ( ((unsigned __int8)mInstance & 1) != 0 )
        v59 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v59 = v58;
      if ( klass >= 2 )
      {
        if ( !LODWORD(v45[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v63 = *(_QWORD *)&v45->fields.m_CachedPtr;
        v64 = *(_QWORD *)(v63 + 32);
        if ( !v64 )
          goto LABEL_87;
        v46 = *(System_String_o **)(v64 + 32);
        if ( LODWORD(v45[1].klass) <= 1 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v65 = *(_QWORD *)(v63 + 40);
        if ( !v65 )
          goto LABEL_87;
        v61 = *(System_String_o **)(v65 + 32);
        v66 = *v48;
        if ( !LODWORD(v45[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v67 = *(_QWORD *)(v63 + 32);
        if ( !v67 || !v66 )
          goto LABEL_87;
        if ( *(_DWORD *)(v66 + 24) )
        {
          *(_DWORD *)(v66 + 32) = *(_DWORD *)(v67 + 20);
          v68 = *v48;
          if ( LODWORD(v45[1].klass) <= 1 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v69 = *(_QWORD *)(*(_QWORD *)&v45->fields.m_CachedPtr + 40LL);
          if ( !v69 || !v68 )
            goto LABEL_87;
          if ( *(_DWORD *)(v68 + 24) > 1u )
          {
            *(_DWORD *)(v68 + 36) = *(_DWORD *)(v69 + 20);
LABEL_81:
            v70 = *v34;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5710/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v72 = *(unsigned __int8 *)(v9 + 48);
            v73 = v71;
            v74 = (ResetSelectDialog_ClickDelegate_o *)sub_B70764(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v74,
              (Il2CppObject *)v9,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              0LL);
            if ( v70 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v70, v73, v59, v46, v61, v72 != 0, v74, 0LL);
              return;
            }
LABEL_87:
            sub_B7076C(mInstance, v11);
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
        mInstance = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v60 = *v48;
        v61 = (System_String_o *)mInstance;
        if ( !LODWORD(v45[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v62 = *(_QWORD *)(*(_QWORD *)&v45->fields.m_CachedPtr + 32LL);
        if ( !v62 || !v60 )
          goto LABEL_87;
        if ( *(_DWORD *)(v60 + 24) )
        {
          *(_DWORD *)(v60 + 32) = *(_DWORD *)(v62 + 20);
          goto LABEL_81;
        }
      }
      v75 = sub_B70798(mInstance);
      sub_B70738(v75, 0LL);
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

  if ( (byte_4353107 & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
    byte_4353107 = 1;
  }
  v7 = sub_B70764(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  DataLostResetManager__PlayGameOverAnimation_d__11___ctor(
    (DataLostResetManager__PlayGameOverAnimation_d__11_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)endAction, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4353106 & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager_TypeInfo);
    byte_4353106 = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_B7076C(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(mono, v9, 0LL);
}


void __fastcall DataLostResetManager__RequestResetDataLostBattle(
        int32_t eventId,
        int32_t warId,
        int32_t resetIdx,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  int32_t EventDataLostBattleId; // w0
  int32_t v12; // w21

  if ( (byte_4353105 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4353105 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            Master_WarQuestSelectionMaster,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v12 = EventDataLostBattleId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      callback,
                                                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_WarQuestSelectionMaster )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_WarQuestSelectionMaster,
        v12,
        resetIdx,
        0LL);
      return;
    }
LABEL_14:
    sub_B7076C(Master_WarQuestSelectionMaster, v10);
  }
}


void __fastcall DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4353108 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    byte_4353108 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEE5 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEE5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_434EFAD )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_434EFAD = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_434EFAB )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_434EFAB = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_434EFAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_434EFAC = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_434DEAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_434DEAC = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_4351894 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4351894 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_434EFAE )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_434EFAE = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_434EFAF )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_434EFAF = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4353100 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4353100 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
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
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
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
      sub_B7076C(genericContainerHandle, v5);
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
  sub_B70630(
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
  if ( (byte_434FB10 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434FB10 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&resetIdx);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v9);
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
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  void *clip; // x0
  System_Int32_array **endAction; // x1
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v25; // x21
  DataLostResetManager_c *v26; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v36; // x8
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v44; // x8
  srcLineSprite_o *Component_srcLineSprite; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  float v52; // s8
  float v53; // s9
  struct System_String_o *mcMyTrans; // x1
  DataLostResetManager___c_c *v55; // x0
  struct DataLostResetManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v58; // x21
  struct DataLostResetManager___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_WaitWhile_o *v66; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  WebViewManager_o *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v80; // x19
  System_Action_o *v81; // x20
  struct DataLostResetManager___c__DisplayClass11_0_o *v82; // x8
  UnityEngine_Object_o *v83; // x20
  srcLineSprite_o *v84; // x21
  System_String_o *name; // x0
  System_String_o *v86; // x0
  UnityEngine_WaitForSeconds_o *v87; // x20
  Il2CppObject **v88; // x19
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7

  if ( (byte_434FB0F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
    sub_B70694(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__);
    sub_B70694(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__);
    sub_B70694(&DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    sub_B70694(&DataLostResetManager___c_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B70694(&UnityEngine_WaitWhile_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FB0F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v75 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 75) & 2) != 0 )
        v75 = (_QWORD *)sub_B7069C(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v76 = (System_Reflection_MethodBase_o *)sub_B70678(v75, v75[3]);
      OverwriteAssetSoundName__PlaySe(v76, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v80 = (CommonUI_o *)Instance;
    v81 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v81,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v80 )
      goto LABEL_82;
    CommonUI__maskFadeout(v80, 2, whiteOutTime_5__2, v81, 0LL);
    goto LABEL_55;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v55 = DataLostResetManager___c_TypeInfo;
    if ( (BYTE3(DataLostResetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v55 = DataLostResetManager___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__11_0 = static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__11_0,
        v58,
        Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__,
        (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
      v59 = DataLostResetManager___c_TypeInfo->static_fields;
      v59->__9__11_0 = _9__11_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v59->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v66, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v66;
    p__2__current = &this->fields.__2__current;
    sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v66, v68, v69, v70, v71, v72, v73);
    *((_DWORD *)p__2__current - 2) = 2;
    LOBYTE(AssetStorage) = 1;
  }
  else
  {
    if ( _1__state )
      goto LABEL_55;
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_B70764(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor(v4, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v4;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v4,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    clip = this->fields.__8__1;
    if ( !clip )
      goto LABEL_82;
    endAction = (System_Int32_array **)this->fields.endAction;
    *((_QWORD *)clip + 3) = endAction;
    sub_B70630((BattleServantConfConponent_o *)((char *)clip + 24), endAction, v13, v14, v15, v16, v17, v18);
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
      v25 = AssetStorage;
      v26 = DataLostResetManager_TypeInfo;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        v26 = DataLostResetManager_TypeInfo;
      }
      Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   v25,
                                                                                   v26->static_fields->PREFAB_EFFECT_NAME,
                                                                                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v28 = *p__8__1;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        clip = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 Object_WarBoardWaitTimeSetting,
                 (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v28 )
        {
          v28->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
          sub_B70630(
            (BattleServantConfConponent_o *)&v28->fields,
            (System_Int32_array **)clip,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          if ( *p__8__1 )
          {
            gameOverEffect = (*p__8__1)->fields.gameOverEffect;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            clip = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              clip = TerminalSceneComponent_TypeInfo;
            }
            v36 = **((_QWORD **)clip + 23);
            if ( v36 )
            {
              GameObjectExtensions__SafeSetParent_32503456(
                gameOverEffect,
                *(UnityEngine_GameObject_o **)(v36 + 328),
                0LL);
              this->fields._whiteOutTime_5__2 = 1.5;
              v37 = (System_Int32_array **)StringLiteral_1/*""*/;
              this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              v44 = this->fields.__8__1;
              if ( v44 )
              {
                clip = v44->fields.gameOverEffect;
                if ( clip )
                {
                  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)clip,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                  clip = (void *)UnityEngine_Object__op_Inequality(
                                   (UnityEngine_Object_o *)Component_srcLineSprite,
                                   0LL,
                                   0LL);
                  if ( ((unsigned __int8)clip & 1) != 0 )
                  {
                    if ( !Component_srcLineSprite )
                      goto LABEL_82;
                    v53 = *(float *)&Component_srcLineSprite->fields.mFSM;
                    v52 = *((float *)&Component_srcLineSprite->fields.mFSM + 1);
                    this->fields._whiteOutTime_5__2 = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
                    mcMyTrans = (struct System_String_o *)Component_srcLineSprite->fields.mcMyTrans;
                    this->fields._whiteOutSe_5__3 = mcMyTrans;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                      (System_Int32_array **)mcMyTrans,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50,
                      v51);
                  }
                  else
                  {
                    v53 = 1.5;
                    v52 = 6.5;
                  }
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  SoundManager__fadeoutBgm(v53, 0LL);
                  if ( *p__8__1 )
                  {
                    clip = (*p__8__1)->fields.gameOverEffect;
                    if ( clip )
                    {
                      clip = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)clip,
                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                      v82 = *p__8__1;
                      if ( *p__8__1 )
                      {
                        v83 = (UnityEngine_Object_o *)clip;
                        clip = v82->fields.gameOverEffect;
                        if ( clip )
                        {
                          v84 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)clip,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          clip = (void *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
                          if ( ((unsigned __int8)clip & 1) != 0 )
                          {
                            if ( v83 )
                            {
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v83, 0LL);
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                                clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v83, 0LL);
                                if ( clip )
                                {
                                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                  UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)v83, name, 0LL);
LABEL_81:
                                  v87 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
                                  UnityEngine_WaitForSeconds___ctor(v87, v52, 0LL);
                                  this->fields.__2__current = (Il2CppObject *)v87;
                                  v88 = &this->fields.__2__current;
                                  sub_B70630(
                                    (BattleServantConfConponent_o *)v88,
                                    (System_Int32_array **)v87,
                                    v89,
                                    v90,
                                    v91,
                                    v92,
                                    v93,
                                    v94);
                                  LOBYTE(AssetStorage) = 1;
                                  *((_DWORD *)v88 - 2) = 1;
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
                            clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0LL, 0LL);
                            if ( ((unsigned __int8)clip & 1) == 0 )
                              goto LABEL_81;
                            if ( v84 )
                            {
                              clip = v84->fields.msSpriteName;
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                                clip = v84->fields.msSpriteName;
                                if ( clip )
                                {
                                  v86 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                  SimpleAnimation__Play_16672920((SimpleAnimation_o *)v84, v86, 0LL);
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
        sub_B7076C(clip, v12);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FB06 & 1) == 0 )
  {
    sub_B70694(&DataLostResetManager___c_TypeInfo);
    byte_434FB06 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FB07 & 1) == 0 )
  {
    sub_B70694(&CTouch_TypeInfo);
    byte_434FB07 = 1;
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

  if ( (byte_434FB08 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FB08 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameOverEffect, 0LL);
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
  DataLostResetManager___c__DisplayClass6_0_o *v4; // x20
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v16; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20
  __int64 v19; // x0

  v4 = this;
  if ( (byte_434FB09 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_B70694(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__);
    byte_434FB09 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !selectDialog )
    goto LABEL_17;
  ResetSelectDialog__Close_32351044(selectDialog, _9__1, 0LL);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
      {
        v19 = sub_B70798(this);
        sub_B70738(v19, 0LL);
      }
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v16 = idx->m_Items[selectNo];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v16, isNoCancel, resetDelegate, 0LL);
      return;
    }
LABEL_17:
    sub_B7076C(this, *(_QWORD *)&selectNo);
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

  if ( (byte_434FB0A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FB0A = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(selectDialogObj, 0LL);
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
  DataLostResetManager___c__DisplayClass7_0_o *v4; // x19
  System_Action_o *_9__1; // x22
  ResetConfirmDialog_o *confirmDialog; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x0
  int32_t resetIdx; // w1
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v18; // x19

  v4 = this;
  if ( (byte_434FB0B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_B70694(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__);
    byte_434FB0B = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !confirmDialog )
    sub_B7076C(this, isDecide);
  ResetConfirmDialog__Close_32347316(confirmDialog, _9__1, 0LL);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = v4->fields.resetIdx;
LABEL_19:
      DataLostResetManager_ClickDelegate__Invoke(resetDelegate, resetIdx, v13);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v18 = v4->fields.resetDelegate;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v18, 0LL);
  }
  else
  {
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__SetTitleInfoTouchEnable(1, 0LL);
    resetDelegate = v4->fields.resetDelegate;
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

  if ( (byte_434FB0C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FB0C = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(confirmDialogObj, 0LL);
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
  DataLostResetManager___c__DisplayClass8_0_o *v3; // x19
  System_Action_o *_9__1; // x21
  ResetSelectDialog_o *selectDialog; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v3 = this;
  if ( (byte_434FB0D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_B70694(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__);
    byte_434FB0D = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v3->fields.__9__1,
      (System_Int32_array **)_9__1,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !selectDialog )
    sub_B7076C(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_32351044(selectDialog, _9__1, 0LL);
  ActionExtensions__Call(v3->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_434FB0E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FB0E = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(selectDialogObj, 0LL);
}