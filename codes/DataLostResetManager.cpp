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

  if ( (byte_421606B & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11476/*"ResetConfirmDialog"*/, v8);
    sub_B0D8A4(&StringLiteral_16841/*"bit_raidreset"*/, v9);
    sub_B0D8A4(&StringLiteral_11479/*"ResetSelectDialog"*/, v10);
    byte_421606B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16841/*"bit_raidreset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16841/*"bit_raidreset"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = DataLostResetManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_11479/*"ResetSelectDialog"*/;
  v13->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11479/*"ResetSelectDialog"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->PREFAB_SELECT_DIALOG_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = DataLostResetManager_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_11476/*"ResetConfirmDialog"*/;
  v21->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11476/*"ResetConfirmDialog"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->PREFAB_CONFIRM_DIALOG_NAME, v22, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4216063 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&warId);
    sub_B0D8A4(&StringLiteral_6224/*"EventUI/Prefabs/{0}"*/, v5);
    sub_B0D8A4(&StringLiteral_6225/*"EventUI/Prefabs/{0}/{1}"*/, v6);
    byte_4216063 = 1;
  }
  if ( eventId )
  {
    v13 = eventId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format((System_String_o *)StringLiteral_6224/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
  }
  else
  {
    v12 = 0;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v11 = warId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    return System_String__Format_43845440((System_String_o *)StringLiteral_6225/*"EventUI/Prefabs/{0}/{1}"*/, v9, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager__OpenBattleResultResetDialog(
        int32_t eventId,
        int32_t warId,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
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
  __int64 v22; // x21
  UnityEngine_GameObject_o *Instance; // x0
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
  UnityEngine_GameObject_o **v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v52; // x25
  int v53; // s0
  const MethodInfo *v56; // x1
  ResetSelectDialog_o *v57; // x19
  System_String_o *v58; // x20
  System_String_o *v59; // x22
  System_String_o *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  ResetSelectDialog_ClickDelegate_o *v63; // x24
  UnityEngine_Object_o *v64; // x19

  if ( (byte_4216066 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&warId);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&ResetSelectDialog_ClickDelegate_TypeInfo, v8);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v17);
    sub_B0D8A4(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_5626/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v19);
    sub_B0D8A4(&StringLiteral_5628/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v20);
    sub_B0D8A4(&StringLiteral_5627/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v21);
    byte_4216066 = 1;
  }
  v22 = sub_B0D974(DataLostResetManager___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&warId, closeAction);
  DataLostResetManager___c__DisplayClass8_0___ctor((DataLostResetManager___c__DisplayClass8_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_47;
  *(_QWORD *)(v22 + 32) = closeAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v22 + 32),
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
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v22 + 24) = v36;
      sub_B0D840((BattleServantConfConponent_o *)(v22 + 24), v36, v37, v38, v39, v40, v41, v42);
      Instance = *(UnityEngine_GameObject_o **)(v22 + 24);
      if ( !Instance )
        goto LABEL_47;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         Instance,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v22 + 16) = Component_srcLineSprite;
      v44 = (UnityEngine_GameObject_o **)(v22 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), Component_srcLineSprite, v45, v46, v47, v48, v49, v50);
      Instance = *(UnityEngine_GameObject_o **)(v22 + 16);
      if ( !Instance )
        goto LABEL_47;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, 0LL);
      Instance = *v44;
      if ( !*v44 )
        goto LABEL_47;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = *v44;
      if ( !*v44 )
        goto LABEL_47;
      v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
      if ( !v52 )
        goto LABEL_47;
      UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
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
        DataLostResetManager__SetTitleInfoTouchEnable(0, v56);
        v57 = (ResetSelectDialog_o *)*v44;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_5628/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v63 = (ResetSelectDialog_ClickDelegate_o *)sub_B0D974(ResetSelectDialog_ClickDelegate_TypeInfo, v61, v62);
        ResetSelectDialog_ClickDelegate___ctor(
          v63,
          (Il2CppObject *)v22,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          0LL);
        if ( v57 )
        {
          ResetSelectDialog__OpenSingleButton(v57, v58, v59, v60, v63, 0LL);
          return;
        }
LABEL_47:
        sub_B0D97C(Instance);
      }
      v64 = *(UnityEngine_Object_o **)(v22 + 24);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v64, 0LL);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v22 + 32), 0LL);
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
  UnityEngine_GameObject_o *mInstance; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v36; // x20
  DataLostResetManager_c *v37; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
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
  System_String_o *v56; // x0
  System_String_o *v57; // x21
  System_String_o *v58; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  bool v61; // w0
  BaseDialog_o *v62; // x21
  System_String_o *v63; // x20
  System_String_o *v64; // x0
  int v65; // w24
  System_String_o *v66; // x22
  __int64 v67; // x1
  __int64 v68; // x2
  ResetConfirmDialog_ClickDelegate_o *v69; // x23
  int32_t v70; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v71; // 0:x2.16

  v70 = selectNo;
  if ( (byte_4216065 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&warId);
    sub_B0D8A4(&AssetManager_TypeInfo, v12);
    sub_B0D8A4(&ResetConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v19);
    sub_B0D8A4(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v20);
    sub_B0D8A4(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_5634/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_5633/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v23);
    sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    byte_4216065 = 1;
  }
  v25 = sub_B0D974(DataLostResetManager___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&selectNo);
  DataLostResetManager___c__DisplayClass7_0___ctor((DataLostResetManager___c__DisplayClass7_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_44;
  *(_QWORD *)(v25 + 32) = resetDelegate;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v25 + 32),
    (System_Int32_array **)resetDelegate,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_DWORD *)(v25 + 40) = resetIdx;
  *(_DWORD *)(v25 + 48) = eventId;
  *(_DWORD *)(v25 + 52) = warId;
  *(_BYTE *)(v25 + 44) = isBackReturn;
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v33);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v36 = AssetStorage;
    v37 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v37 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v36,
                                                                                 v37->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
      v39 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v25 + 24) = v39;
      sub_B0D840((BattleServantConfConponent_o *)(v25 + 24), v39, v40, v41, v42, v43, v44, v45);
      mInstance = *(UnityEngine_GameObject_o **)(v25 + 24);
      if ( mInstance )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           mInstance,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v25 + 16) = Component_srcLineSprite;
        v47 = (BaseDialog_o **)(v25 + 16);
        sub_B0D840((BattleServantConfConponent_o *)(v25 + 16), Component_srcLineSprite, v48, v49, v50, v51, v52, v53);
        mInstance = *(UnityEngine_GameObject_o **)(v25 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v54);
            byte_421083D = 1;
          }
          v55 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v55 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v55->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v71.fields.value.fields.x = 0LL;
            *(_QWORD *)&v71.fields.value.fields.z = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v47, v71, 0LL);
            v56 = System_Int32__ToString((int32_t)&v70, 0LL);
            v57 = System_String__Concat_43849904((System_String_o *)StringLiteral_5633/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v56, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v58 = LocalizationManager__Get(v57, 0LL);
            v59 = System_Int32__ToString((int32_t)&v70, 0LL);
            v60 = System_String__Concat_43849904((System_String_o *)StringLiteral_5633/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v59, 0LL);
            v61 = System_String__op_Equality(v58, v60, 0LL);
            v62 = *v47;
            v63 = v61 ? (System_String_o *)StringLiteral_1/*""*/ : v58;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v65 = *(unsigned __int8 *)(v25 + 44);
            v66 = v64;
            v69 = (ResetConfirmDialog_ClickDelegate_o *)sub_B0D974(ResetConfirmDialog_ClickDelegate_TypeInfo, v67, v68);
            ResetConfirmDialog_ClickDelegate___ctor(
              v69,
              (Il2CppObject *)v25,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              0LL);
            if ( v62 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v62, v66, v63, v65 != 0, v69, 0LL);
              return;
            }
          }
        }
      }
LABEL_44:
      sub_B0D97C(mInstance);
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
  UnityEngine_GameObject_o *mInstance; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  int32_t v39; // w20
  int32_t v40; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v43; // x20
  DataLostResetManager_c *v44; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
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
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v64; // x1
  int32_t v65; // w21
  UnityEngine_GameObject_o *v66; // x22
  System_String_o *v67; // x21
  System_Int32_array **v68; // x0
  __int64 *v69; // x24
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  System_String_o *v78; // x23
  System_String_o *v79; // x25
  System_String_o *v80; // x23
  __int64 v81; // x24
  System_String_o *v82; // x25
  __int64 v83; // x8
  __int64 v84; // x8
  __int64 v85; // x9
  __int64 v86; // x9
  __int64 v87; // x27
  __int64 v88; // x8
  __int64 v89; // x24
  __int64 v90; // x8
  BaseDialog_o *v91; // x20
  System_String_o *v92; // x0
  int v93; // w26
  System_String_o *v94; // x22
  __int64 v95; // x1
  __int64 v96; // x2
  ResetSelectDialog_ClickDelegate_o *v97; // x24
  __int64 v98; // x0
  int klass; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v100; // 0:x2.16

  if ( (byte_4216064 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&warId);
    sub_B0D8A4(&AssetManager_TypeInfo, v9);
    sub_B0D8A4(&ResetSelectDialog_ClickDelegate_TypeInfo, v10);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v15);
    sub_B0D8A4(&int___TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v22);
    sub_B0D8A4(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v23);
    sub_B0D8A4(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_16071/*"_NO_CANCEL"*/, v25);
    sub_B0D8A4(&StringLiteral_5636/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v26);
    sub_B0D8A4(&StringLiteral_5637/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v27);
    sub_B0D8A4(&StringLiteral_5638/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v28);
    sub_B0D8A4(&StringLiteral_1/*""*/, v29);
    byte_4216064 = 1;
  }
  klass = 0;
  v30 = sub_B0D974(DataLostResetManager___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&warId, isNoCancel);
  DataLostResetManager___c__DisplayClass6_0___ctor((DataLostResetManager___c__DisplayClass6_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_87;
  *(_QWORD *)(v30 + 56) = resetDelegate;
  *(_DWORD *)(v30 + 32) = eventId;
  *(_DWORD *)(v30 + 36) = warId;
  *(_BYTE *)(v30 + 48) = isNoCancel;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v30 + 56),
    (System_Int32_array **)resetDelegate,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v40 = *(_DWORD *)(v30 + 32);
  v39 = *(_DWORD *)(v30 + 36);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  EventAssetName = DataLostResetManager__GetEventAssetName(v40, v39, v38);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v43 = AssetStorage;
    v44 = DataLostResetManager_TypeInfo;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v44 = DataLostResetManager_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 v43,
                                                                                 v44->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
      v46 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v30 + 24) = v46;
      sub_B0D840((BattleServantConfConponent_o *)(v30 + 24), v46, v47, v48, v49, v50, v51, v52);
      mInstance = *(UnityEngine_GameObject_o **)(v30 + 24);
      if ( !mInstance )
        goto LABEL_87;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         mInstance,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v30 + 16) = Component_srcLineSprite;
      v54 = (BaseDialog_o **)(v30 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v30 + 16), Component_srcLineSprite, v55, v56, v57, v58, v59, v60);
      mInstance = *(UnityEngine_GameObject_o **)(v30 + 16);
      if ( !mInstance )
        goto LABEL_87;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v61);
        byte_421083D = 1;
      }
      v62 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v62 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_GameObject_o *)v62->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_87;
      *(_QWORD *)&v100.fields.value.fields.x = 0LL;
      *(_QWORD *)&v100.fields.value.fields.z = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v54, v100, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mInstance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_87;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v30 + 36),
                                *(_DWORD *)(v30 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v65 = EventDataLostBattleId;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__SetTitleInfoTouchEnable(0, v64);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mInstance = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_87;
      mInstance = (UnityEngine_GameObject_o *)EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                                                (EventDataLostBattleResetMaster_o *)mInstance,
                                                v65,
                                                *(_DWORD *)(v30 + 32),
                                                0LL);
      if ( !mInstance )
        goto LABEL_87;
      v66 = mInstance;
      v67 = (System_String_o *)StringLiteral_1/*""*/;
      klass = (int)mInstance[1].klass;
      v68 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 2LL);
      *(_QWORD *)(v30 + 40) = v68;
      v69 = (__int64 *)(v30 + 40);
      sub_B0D840((BattleServantConfConponent_o *)(v30 + 40), v68, v70, v71, v72, v73, v74, v75);
      v76 = System_Int32__ToString((int32_t)&klass, 0LL);
      v77 = System_String__Concat_43849904((System_String_o *)StringLiteral_5637/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v76, 0LL);
      v78 = v77;
      if ( klass >= 2 && *(_BYTE *)(v30 + 48) )
        v78 = System_String__Concat_43849904(v77, (System_String_o *)StringLiteral_16071/*"_NO_CANCEL"*/, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v79 = LocalizationManager__Get(v78, 0LL);
      mInstance = (UnityEngine_GameObject_o *)System_String__op_Equality(v79, v78, 0LL);
      if ( ((unsigned __int8)mInstance & 1) != 0 )
        v80 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v80 = v79;
      if ( klass >= 2 )
      {
        if ( !LODWORD(v66[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v84 = *(_QWORD *)&v66->fields.m_CachedPtr;
        v85 = *(_QWORD *)(v84 + 32);
        if ( !v85 )
          goto LABEL_87;
        v67 = *(System_String_o **)(v85 + 32);
        if ( LODWORD(v66[1].klass) <= 1 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v86 = *(_QWORD *)(v84 + 40);
        if ( !v86 )
          goto LABEL_87;
        v82 = *(System_String_o **)(v86 + 32);
        v87 = *v69;
        if ( !LODWORD(v66[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v88 = *(_QWORD *)(v84 + 32);
        if ( !v88 || !v87 )
          goto LABEL_87;
        if ( *(_DWORD *)(v87 + 24) )
        {
          *(_DWORD *)(v87 + 32) = *(_DWORD *)(v88 + 20);
          v89 = *v69;
          if ( LODWORD(v66[1].klass) <= 1 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v90 = *(_QWORD *)(*(_QWORD *)&v66->fields.m_CachedPtr + 40LL);
          if ( !v90 || !v89 )
            goto LABEL_87;
          if ( *(_DWORD *)(v89 + 24) > 1u )
          {
            *(_DWORD *)(v89 + 36) = *(_DWORD *)(v90 + 20);
LABEL_81:
            v91 = *v54;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v92 = LocalizationManager__Get((System_String_o *)StringLiteral_5638/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v93 = *(unsigned __int8 *)(v30 + 48);
            v94 = v92;
            v97 = (ResetSelectDialog_ClickDelegate_o *)sub_B0D974(ResetSelectDialog_ClickDelegate_TypeInfo, v95, v96);
            ResetSelectDialog_ClickDelegate___ctor(
              v97,
              (Il2CppObject *)v30,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              0LL);
            if ( v91 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v91, v94, v80, v67, v82, v93 != 0, v97, 0LL);
              return;
            }
LABEL_87:
            sub_B0D97C(mInstance);
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
        mInstance = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5636/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v81 = *v69;
        v82 = (System_String_o *)mInstance;
        if ( !LODWORD(v66[1].klass) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v83 = *(_QWORD *)(*(_QWORD *)&v66->fields.m_CachedPtr + 32LL);
        if ( !v83 || !v81 )
          goto LABEL_87;
        if ( *(_DWORD *)(v81 + 24) )
        {
          *(_DWORD *)(v81 + 32) = *(_DWORD *)(v83 + 20);
          goto LABEL_81;
        }
      }
      v98 = sub_B0D9A8(mInstance);
      sub_B0D948(v98, 0LL);
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
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4216069 & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId);
    byte_4216069 = 1;
  }
  v7 = sub_B0D974(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId, endAction);
  DataLostResetManager__PlayGameOverAnimation_d__11___ctor(
    (DataLostResetManager__PlayGameOverAnimation_d__11_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)endAction, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v7;
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

  if ( (byte_4216068 & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4216068 = 1;
  }
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_B0D97C(v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(mono, v9, 0LL);
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

  if ( (byte_4216067 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, *(_QWORD *)&warId);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    byte_4216067 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
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
    Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      callback,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_WarQuestSelectionMaster )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_WarQuestSelectionMaster,
        v14,
        resetIdx,
        0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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

  if ( (byte_421606A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&TopHomeRequest_TypeInfo, v3);
    byte_421606A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210881 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210881 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4211AC3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4211AC3 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4211AC1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4211AC1 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4211AC2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4211AC2 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210848 = 1;
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
  if ( !byte_4213B89 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4213B89 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_4211AC4 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4211AC4 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_4211AC5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4211AC5 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4216062 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4216062 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
      byte_421083D = 1;
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
      sub_B0D97C(genericContainerHandle);
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
  sub_B0D840(
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
  if ( (byte_42131A3 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&resetIdx);
    byte_42131A3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager_ClickDelegate__Invoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  DataLostResetManager_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  DataLostResetManager_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (DataLostResetManager_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&resetIdx, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)resetIdx, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)resetIdx, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t _1__state; // w8
  Il2CppObject *v26; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  void *clip; // x0
  System_Int32_array **endAction; // x1
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v46; // x21
  DataLostResetManager_c *v47; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v58; // x8
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v66; // x8
  srcLineSprite_o *Component_srcLineSprite; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  float v74; // s8
  float v75; // s9
  struct System_String_o *mcMyTrans; // x1
  DataLostResetManager___c_c *v77; // x0
  struct DataLostResetManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v80; // x21
  struct DataLostResetManager___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UnityEngine_WaitWhile_o *v88; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  WebViewManager_o *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v102; // x19
  __int64 v103; // x1
  __int64 v104; // x2
  System_Action_o *v105; // x20
  struct DataLostResetManager___c__DisplayClass11_0_o *v106; // x8
  UnityEngine_Object_o *v107; // x20
  srcLineSprite_o *v108; // x21
  System_String_o *name; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  System_String_o *v112; // x0
  UnityEngine_WaitForSeconds_o *v113; // x20
  Il2CppObject **v114; // x19
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7

  if ( (byte_42131A2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v4);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v7);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v16);
    sub_B0D8A4(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v17);
    sub_B0D8A4(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v18);
    sub_B0D8A4(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v19);
    sub_B0D8A4(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v20);
    sub_B0D8A4(&DataLostResetManager___c_TypeInfo, v21);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    byte_42131A2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v97 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 75) & 2) != 0 )
        v97 = (_QWORD *)sub_B0D8AC(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v98 = (System_Reflection_MethodBase_o *)sub_B0D888(v97, v97[3]);
      OverwriteAssetSoundName__PlaySe(v98, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v102 = (CommonUI_o *)Instance;
    v105 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v103, v104);
    System_Action___ctor(
      v105,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v102 )
      goto LABEL_82;
    CommonUI__maskFadeout(v102, 2, whiteOutTime_5__2, v105, 0LL);
    goto LABEL_55;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v77 = DataLostResetManager___c_TypeInfo;
    if ( (BYTE3(DataLostResetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v77 = DataLostResetManager___c_TypeInfo;
    }
    static_fields = v77->static_fields;
    _9__11_0 = static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      }
      v80 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, method, v2);
      System_Func_bool____ctor(
        _9__11_0,
        v80,
        Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__,
        (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
      v81 = DataLostResetManager___c_TypeInfo->static_fields;
      v81->__9__11_0 = _9__11_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v81->__9__11_0,
        (System_Int32_array **)_9__11_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    v88 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, method, v2);
    UnityEngine_WaitWhile___ctor(v88, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v88;
    p__2__current = &this->fields.__2__current;
    sub_B0D840((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v88, v90, v91, v92, v93, v94, v95);
    *((_DWORD *)p__2__current - 2) = 2;
    LOBYTE(AssetStorage) = 1;
  }
  else
  {
    if ( _1__state )
      goto LABEL_55;
    this->fields.__1__state = -1;
    v26 = (Il2CppObject *)sub_B0D974(DataLostResetManager___c__DisplayClass11_0_TypeInfo, method, v2);
    System_Object___ctor(v26, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v26;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v26,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    clip = this->fields.__8__1;
    if ( !clip )
      goto LABEL_82;
    endAction = (System_Int32_array **)this->fields.endAction;
    *((_QWORD *)clip + 3) = endAction;
    sub_B0D840((BattleServantConfConponent_o *)((char *)clip + 24), endAction, v34, v35, v36, v37, v38, v39);
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
      v46 = AssetStorage;
      v47 = DataLostResetManager_TypeInfo;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        v47 = DataLostResetManager_TypeInfo;
      }
      Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   v46,
                                                                                   v47->static_fields->PREFAB_EFFECT_NAME,
                                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v49 = *p__8__1;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        clip = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                 Object_WarBoardWaitTimeSetting,
                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v49 )
        {
          v49->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v49->fields,
            (System_Int32_array **)clip,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          if ( *p__8__1 )
          {
            gameOverEffect = (*p__8__1)->fields.gameOverEffect;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_421083D )
            {
              sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v56);
              byte_421083D = 1;
            }
            clip = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              clip = TerminalSceneComponent_TypeInfo;
            }
            v58 = **((_QWORD **)clip + 23);
            if ( v58 )
            {
              GameObjectExtensions__SafeSetParent_31184716(
                gameOverEffect,
                *(UnityEngine_GameObject_o **)(v58 + 328),
                0LL);
              this->fields._whiteOutTime_5__2 = 1.5;
              v59 = (System_Int32_array **)StringLiteral_1/*""*/;
              this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                v59,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
              v66 = this->fields.__8__1;
              if ( v66 )
              {
                clip = v66->fields.gameOverEffect;
                if ( clip )
                {
                  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)clip,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                  clip = (void *)UnityEngine_Object__op_Inequality(
                                   (UnityEngine_Object_o *)Component_srcLineSprite,
                                   0LL,
                                   0LL);
                  if ( ((unsigned __int8)clip & 1) != 0 )
                  {
                    if ( !Component_srcLineSprite )
                      goto LABEL_82;
                    v75 = *(float *)&Component_srcLineSprite->fields.mFSM;
                    v74 = *((float *)&Component_srcLineSprite->fields.mFSM + 1);
                    this->fields._whiteOutTime_5__2 = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
                    mcMyTrans = (struct System_String_o *)Component_srcLineSprite->fields.mcMyTrans;
                    this->fields._whiteOutSe_5__3 = mcMyTrans;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&this->fields._whiteOutSe_5__3,
                      (System_Int32_array **)mcMyTrans,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72,
                      v73);
                  }
                  else
                  {
                    v75 = 1.5;
                    v74 = 6.5;
                  }
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  SoundManager__fadeoutBgm(v75, 0LL);
                  if ( *p__8__1 )
                  {
                    clip = (*p__8__1)->fields.gameOverEffect;
                    if ( clip )
                    {
                      clip = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)clip,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                      v106 = *p__8__1;
                      if ( *p__8__1 )
                      {
                        v107 = (UnityEngine_Object_o *)clip;
                        clip = v106->fields.gameOverEffect;
                        if ( clip )
                        {
                          v108 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)clip,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          clip = (void *)UnityEngine_Object__op_Inequality(v107, 0LL, 0LL);
                          if ( ((unsigned __int8)clip & 1) != 0 )
                          {
                            if ( v107 )
                            {
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v107, 0LL);
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                                clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v107, 0LL);
                                if ( clip )
                                {
                                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                  UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v107, name, 0LL);
LABEL_81:
                                  v113 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(
                                                                           UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v110,
                                                                           v111);
                                  UnityEngine_WaitForSeconds___ctor(v113, v74, 0LL);
                                  this->fields.__2__current = (Il2CppObject *)v113;
                                  v114 = &this->fields.__2__current;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)v114,
                                    (System_Int32_array **)v113,
                                    v115,
                                    v116,
                                    v117,
                                    v118,
                                    v119,
                                    v120);
                                  LOBYTE(AssetStorage) = 1;
                                  *((_DWORD *)v114 - 2) = 1;
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
                            clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v108, 0LL, 0LL);
                            if ( ((unsigned __int8)clip & 1) == 0 )
                              goto LABEL_81;
                            if ( v108 )
                            {
                              clip = v108->fields.msSpriteName;
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                                clip = v108->fields.msSpriteName;
                                if ( clip )
                                {
                                  v112 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                  SimpleAnimation__Play_50482404((SimpleAnimation_o *)v108, v112, 0LL);
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
        sub_B0D97C(clip);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213199 & 1) == 0 )
  {
    sub_B0D8A4(&DataLostResetManager___c_TypeInfo, v1);
    byte_4213199 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DataLostResetManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataLostResetManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_421319A & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_421319A = 1;
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

  if ( (byte_421319B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421319B = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameOverEffect, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v18; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20
  __int64 v21; // x0

  v4 = this;
  if ( (byte_421319C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_B0D8A4(
                                                            &Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
                                                            v6);
    byte_421319C = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, *(_QWORD *)&selectNo, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !selectDialog )
    goto LABEL_17;
  ResetSelectDialog__Close_30450116(selectDialog, _9__1, 0LL);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
      {
        v21 = sub_B0D9A8(this);
        sub_B0D948(v21, 0LL);
      }
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v18 = idx->m_Items[selectNo];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataLostResetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      }
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v18, isNoCancel, resetDelegate, 0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(this);
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

  if ( (byte_421319D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421319D = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(selectDialogObj, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  ResetConfirmDialog_o *confirmDialog; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x0
  int32_t resetIdx; // w1
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v20; // x19

  v4 = this;
  if ( (byte_421319E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_B0D8A4(
                                                            &Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
                                                            v6);
    byte_421319E = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !confirmDialog )
    sub_B0D97C(this);
  ResetConfirmDialog__Close_30446388(confirmDialog, _9__1, 0LL);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = v4->fields.resetIdx;
LABEL_19:
      DataLostResetManager_ClickDelegate__Invoke(resetDelegate, resetIdx, v15);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v20 = v4->fields.resetDelegate;
    if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    }
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v20, 0LL);
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

  if ( (byte_421319F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421319F = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(confirmDialogObj, 0LL);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x21
  ResetSelectDialog_o *selectDialog; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v3 = this;
  if ( (byte_42131A0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_B0D8A4(
                                                            &Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
                                                            v4);
    byte_42131A0 = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, *(_QWORD *)&selectNo, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !selectDialog )
    sub_B0D97C(this);
  ResetSelectDialog__Close_30450116(selectDialog, _9__1, 0LL);
  ActionExtensions__Call(v3->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_42131A1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42131A1 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(selectDialogObj, 0LL);
}