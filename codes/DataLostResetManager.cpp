void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct DataLostResetManager_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BC7203 & 1) == 0 )
  {
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_11538/*"ResetConfirmDialog"*/, v8);
    sub_1C1ABD4(&StringLiteral_17542/*"bit_raidreset"*/, v9);
    sub_1C1ABD4(&StringLiteral_11541/*"ResetSelectDialog"*/, v10);
    byte_4BC7203 = 1;
  }
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17542/*"bit_raidreset"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)DataLostResetManager_TypeInfo->static_fields,
    StringLiteral_17542/*"bit_raidreset"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_11541/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11541/*"ResetSelectDialog"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_11538/*"ResetConfirmDialog"*/;
  v20 = DataLostResetManager_TypeInfo->static_fields;
  v20->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11538/*"ResetConfirmDialog"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v20->PREFAB_CONFIRM_DIALOG_NAME, v19, v21, v22, v23, v24, v25, v26);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+4h] [xbp-2Ch] BYREF
  int v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BC71FB & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&warId);
    sub_1C1ABD4(&StringLiteral_6392/*"EventUI/Prefabs/{0}"*/, v7);
    sub_1C1ABD4(&StringLiteral_6393/*"EventUI/Prefabs/{0}/{1}"*/, v8);
    byte_4BC71FB = 1;
  }
  if ( eventId )
  {
    v18 = eventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, method, v3, v4);
    return System_String__Format((System_String_o *)StringLiteral_6392/*"EventUI/Prefabs/{0}"*/, v9, 0LL);
  }
  else
  {
    v17 = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, method, v3, v4);
    v16 = warId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v12, v13, v14);
    return System_String__Format_63054740((System_String_o *)StringLiteral_6393/*"EventUI/Prefabs/{0}/{1}"*/, v11, v15, 0LL);
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
  __int64 Instance; // x0
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v34; // x23
  DataLostResetManager_c *v35; // x0
  Il2CppObject *Object_object__49812820; // x23
  Il2CppObject *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *Component_object; // x0
  __int64 *v45; // x24
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v53; // x25
  const MethodInfo *v54; // x1
  ResetSelectDialog_o *v55; // x19
  System_String_o *v56; // x20
  System_String_o *v57; // x22
  System_String_o *v58; // x23
  ResetSelectDialog_ClickDelegate_o *v59; // x24
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x5
  UnityEngine_Object_o *v62; // x19

  if ( (byte_4BC71FE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, *(_QWORD *)&warId);
    sub_1C1ABD4(&AssetManager_TypeInfo, v7);
    sub_1C1ABD4(&ResetSelectDialog_ClickDelegate_TypeInfo, v8);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v10);
    sub_1C1ABD4(&DataManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v12);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1C1ABD4(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v17);
    sub_1C1ABD4(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v18);
    sub_1C1ABD4(&StringLiteral_5715/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v19);
    sub_1C1ABD4(&StringLiteral_5717/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v20);
    sub_1C1ABD4(&StringLiteral_5716/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v21);
    byte_4BC71FE = 1;
  }
  v22 = sub_1C1AE20(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_40;
  *(_QWORD *)(v22 + 32) = closeAction;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)closeAction, v25, v26, v27, v28, v29, v30);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v31);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v34 = AssetStorage;
    v35 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v35 = DataLostResetManager_TypeInfo;
    }
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                v34,
                                v35->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v37 = UnityEngine_Object__Instantiate_object_(
              Object_object__49812820,
              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v22 + 24) = v37;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)v37, v38, v39, v40, v41, v42, v43);
      Instance = *(_QWORD *)(v22 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Instance,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v22 + 16) = Component_object;
      v45 = (__int64 *)(v22 + 16);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)Component_object, v46, v47, v48, v49, v50, v51);
      Instance = *(_QWORD *)(v22 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v24);
      Instance = *v45;
      if ( !*v45 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = *(_QWORD *)(Instance + 136);
      if ( !Instance )
        goto LABEL_40;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !transform )
        goto LABEL_40;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = *v45;
      if ( !*v45 )
        goto LABEL_40;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      v53 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4BC2146 )
      {
        Instance = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v24);
        byte_4BC2146 = 1;
      }
      if ( !v53 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(
             (EventDataLostBattleMaster_o *)Instance,
             warId,
             eventId,
             0LL) != -1 )
      {
        if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        DataLostResetManager__SetTitleInfoTouchEnable(0, v54);
        v55 = (ResetSelectDialog_o *)*v45;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_5715/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v59 = (ResetSelectDialog_ClickDelegate_o *)sub_1C1AE20(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v59,
          (Il2CppObject *)v22,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v60);
        if ( v55 )
        {
          ResetSelectDialog__OpenSingleButton(v55, v56, v57, v58, v59, v61);
          return;
        }
LABEL_40:
        sub_1C1AE30(Instance, v24);
      }
      v62 = *(UnityEngine_Object_o **)(v22 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70794412(v62, 0LL);
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
  const MethodInfo *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v37; // x20
  DataLostResetManager_c *v38; // x0
  Il2CppObject *Object_object__49812820; // x20
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
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
  ResetConfirmDialog_ClickDelegate_o *v67; // x23
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x5
  int32_t v70; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v71; // 0:x2.16

  v70 = selectNo;
  if ( (byte_4BC71FD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, *(_QWORD *)&warId);
    sub_1C1ABD4(&AssetManager_TypeInfo, v12);
    sub_1C1ABD4(&ResetConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v15);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v16);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v18);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v19);
    sub_1C1ABD4(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v20);
    sub_1C1ABD4(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v21);
    sub_1C1ABD4(&StringLiteral_5723/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v22);
    sub_1C1ABD4(&StringLiteral_5722/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v23);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v24);
    byte_4BC71FD = 1;
  }
  v25 = sub_1C1AE20(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_35;
  *(_QWORD *)(v25 + 32) = resetDelegate;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)resetDelegate, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v25 + 40) = resetIdx;
  *(_BYTE *)(v25 + 44) = isBackReturn;
  *(_DWORD *)(v25 + 48) = eventId;
  *(_DWORD *)(v25 + 52) = warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v34);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v37 = AssetStorage;
    v38 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v38 = DataLostResetManager_TypeInfo;
    }
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                v37,
                                v38->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v40 = UnityEngine_Object__Instantiate_object_(
              Object_object__49812820,
              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v25 + 24) = v40;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)v40, v41, v42, v43, v44, v45, v46);
      mInstance = *(UnityEngine_GameObject_o **)(v25 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v25 + 16) = Component_object;
        v48 = (BaseDialog_o **)(v25 + 16);
        sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)Component_object, v49, v50, v51, v52, v53, v54);
        mInstance = *(UnityEngine_GameObject_o **)(v25 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v27);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v27);
            byte_4BC2713 = 1;
          }
          v55 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v55 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v55->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v71.fields.hasValue = 0LL;
            *(_QWORD *)&v71.fields.value.fields.y = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v48, v71, 0LL);
            v56 = System_Int32__ToString((int32_t)&v70, 0LL);
            v57 = System_String__Concat_63040368((System_String_o *)StringLiteral_5722/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v56, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v58 = LocalizationManager__Get(v57, 0LL);
            v59 = System_Int32__ToString((int32_t)&v70, 0LL);
            v60 = System_String__Concat_63040368((System_String_o *)StringLiteral_5722/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v59, 0LL);
            v61 = System_String__op_Equality(v58, v60, 0LL);
            v62 = *v48;
            v63 = v61 ? (System_String_o *)StringLiteral_1/*""*/ : v58;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5723/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v65 = *(unsigned __int8 *)(v25 + 44);
            v66 = v64;
            v67 = (ResetConfirmDialog_ClickDelegate_o *)sub_1C1AE20(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v67,
              (Il2CppObject *)v25,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v68);
            if ( v62 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v62, v66, v63, v65 != 0, v67, v69);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_1C1AE30(mInstance, v27);
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
  void *mInstance; // x0
  const MethodInfo *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x2
  int32_t v40; // w20
  int32_t v41; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v44; // x20
  DataLostResetManager_c *v45; // x0
  Il2CppObject *Object_object__49812820; // x20
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  TerminalSceneComponent_c *v62; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v64; // x1
  int32_t v65; // w21
  System_Collections_Generic_List_object__o *v66; // x23
  System_String_o *v67; // x21
  int64_t v68; // x0
  __int64 *v69; // x24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  System_String_o *v78; // x22
  System_String_o *v79; // x25
  System_String_o *v80; // x22
  System_String_o *v81; // x0
  __int64 v82; // x24
  System_String_o *v83; // x25
  __int64 v84; // x28
  __int64 v85; // x24
  BaseDialog_o *v86; // x20
  System_String_o *v87; // x0
  int v88; // w26
  System_String_o *v89; // x23
  ResetSelectDialog_ClickDelegate_o *v90; // x24
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x7
  int v93; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v94; // 0:x2.16

  if ( (byte_4BC71FC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, *(_QWORD *)&warId);
    sub_1C1ABD4(&AssetManager_TypeInfo, v9);
    sub_1C1ABD4(&ResetSelectDialog_ClickDelegate_TypeInfo, v10);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v13);
    sub_1C1ABD4(&DataManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v15);
    sub_1C1ABD4(&int___TypeInfo, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v18);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v19);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v21);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v22);
    sub_1C1ABD4(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v23);
    sub_1C1ABD4(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v24);
    sub_1C1ABD4(&StringLiteral_16542/*"_NO_CANCEL"*/, v25);
    sub_1C1ABD4(&StringLiteral_5725/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v26);
    sub_1C1ABD4(&StringLiteral_5726/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v27);
    sub_1C1ABD4(&StringLiteral_5727/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v28);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v29);
    byte_4BC71FC = 1;
  }
  v93 = 0;
  v30 = sub_1C1AE20(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_63;
  *(_QWORD *)(v30 + 56) = resetDelegate;
  *(_DWORD *)(v30 + 32) = eventId;
  *(_DWORD *)(v30 + 36) = warId;
  *(_BYTE *)(v30 + 48) = isNoCancel;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 56), (int64_t)resetDelegate, v33, v34, v35, v36, v37, v38);
  v41 = *(_DWORD *)(v30 + 32);
  v40 = *(_DWORD *)(v30 + 36);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(v41, v40, v39);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v44 = AssetStorage;
    v45 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v45 = DataLostResetManager_TypeInfo;
    }
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                v44,
                                v45->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v47 = UnityEngine_Object__Instantiate_object_(
              Object_object__49812820,
              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v30 + 24) = v47;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)v47, v48, v49, v50, v51, v52, v53);
      mInstance = *(void **)(v30 + 24);
      if ( !mInstance )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v30 + 16) = Component_object;
      v55 = (BaseDialog_o **)(v30 + 16);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)Component_object, v56, v57, v58, v59, v60, v61);
      mInstance = *(void **)(v30 + 16);
      if ( !mInstance )
        goto LABEL_63;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v32);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BC2713 )
      {
        sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v32);
        byte_4BC2713 = 1;
      }
      v62 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v62 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v62->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_63;
      *(_QWORD *)&v94.fields.hasValue = 0LL;
      *(_QWORD *)&v94.fields.value.fields.y = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v55, v94, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_63;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v30 + 36),
                                *(_DWORD *)(v30 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v65 = EventDataLostBattleId;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v64);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_63;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v65,
                    *(_DWORD *)(v30 + 32),
                    0LL);
      if ( !mInstance )
        goto LABEL_63;
      v66 = (System_Collections_Generic_List_object__o *)mInstance;
      v67 = (System_String_o *)StringLiteral_1/*""*/;
      v93 = *((_DWORD *)mInstance + 6);
      v68 = sub_1C1AC7C(int___TypeInfo, 2LL);
      *(_QWORD *)(v30 + 40) = v68;
      v69 = (__int64 *)(v30 + 40);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 40), v68, v70, v71, v72, v73, v74, v75);
      v76 = System_Int32__ToString((int32_t)&v93, 0LL);
      v77 = System_String__Concat_63040368((System_String_o *)StringLiteral_5726/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v76, 0LL);
      v78 = v77;
      if ( ((v93 > 1) & *(_BYTE *)(v30 + 48)) != 0 )
        v78 = System_String__Concat_63040368(v77, (System_String_o *)StringLiteral_16542/*"_NO_CANCEL"*/, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v79 = LocalizationManager__Get(v78, 0LL);
      if ( System_String__op_Equality(v79, v78, 0LL) )
        v80 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v80 = v79;
      if ( v93 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v66,
                      0,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v67 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v66,
                      1,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v83 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v84 = *v69;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v66,
                      0,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v84 )
          goto LABEL_63;
        if ( *(_DWORD *)(v84 + 24) )
        {
          *(_DWORD *)(v84 + 32) = *((_DWORD *)mInstance + 5);
          v85 = *v69;
          mInstance = System_Collections_Generic_List_object___get_Item(
                        v66,
                        1,
                        (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
          if ( !mInstance || !v85 )
            goto LABEL_63;
          if ( *(_DWORD *)(v85 + 24) > 1u )
          {
            *(_DWORD *)(v85 + 36) = *((_DWORD *)mInstance + 5);
LABEL_58:
            v86 = *v55;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v87 = LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v88 = *(unsigned __int8 *)(v30 + 48);
            v89 = v87;
            v90 = (ResetSelectDialog_ClickDelegate_o *)sub_1C1AE20(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v90,
              (Il2CppObject *)v30,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v91);
            if ( v86 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v86, v89, v80, v67, v83, v88 != 0, v90, v92);
              return;
            }
LABEL_63:
            sub_1C1AE30(mInstance, v32);
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_5725/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v82 = *v69;
        v83 = v81;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v66,
                      0,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v82 )
          goto LABEL_63;
        if ( *(_DWORD *)(v82 + 24) )
        {
          *(_DWORD *)(v82 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_58;
        }
      }
      sub_1C1AE38(mInstance, v32);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BC7201 & 1) == 0 )
  {
    sub_1C1ABD4(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId);
    byte_4BC7201 = 1;
  }
  v7 = sub_1C1AE20(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)endAction, v8, v9, v10, v11, v12, v13);
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
  __int64 v10; // x1

  if ( (byte_4BC7200 & 1) == 0 )
  {
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BC7200 = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_1C1AE30(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684(mono, v9, 0LL);
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
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t EventDataLostBattleId; // w0
  int32_t v15; // w21

  if ( (byte_4BC71FF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, *(_QWORD *)&warId);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v10);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v11);
    byte_4BC71FF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v15 = EventDataLostBattleId;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v15,
        resetIdx,
        0LL);
      return;
    }
LABEL_12:
    sub_1C1AE30(Master_object, v13);
  }
}


void __fastcall DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BC7202 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v2);
    byte_4BC7202 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC4BE9 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v1);
    byte_4BC4BE9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4BC4D8A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BC4D8A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4BC4D8B )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BC4D8B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4BC4D8C )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BC4D8C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4BC28F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BC28F4 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_4BC4D7E )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v4);
    byte_4BC4D7E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_4BC4D7F )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4BC4D7F = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_4BC505C )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4BC505C = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *v7; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4BC71FA & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4BC71FA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v6);
      byte_4BC2713 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventBgTexture->klass;
    if ( !klass || (v7 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1C1AE30(v7, v6);
    TitleInfoControl__SetTouchEnable(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataLostResetManager_ClickDelegate___ctor(
        DataLostResetManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A5C404;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5C3BC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall DataLostResetManager_ClickDelegate__BeginInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = resetIdx;
  if ( (byte_4BC7204 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&resetIdx);
    byte_4BC7204 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall DataLostResetManager_ClickDelegate__Invoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    resetIdx,
    *(_QWORD *)&this->fields.extra_arg);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t _1__state; // w8
  Il2CppObject *v24; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t clip; // x0
  struct System_Action_o *endAction; // x1
  const MethodInfo *v41; // x2
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v46; // x21
  DataLostResetManager_c *v47; // x0
  Il2CppObject *Object_object__49812820; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v57; // x8
  void *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v65; // x8
  Il2CppObject *Component_object; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  float v73; // s8
  float v74; // s9
  struct System_String_o *klass; // x1
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v82; // x19
  System_Action_o *v83; // x20
  DataLostResetManager___c_c *v84; // x0
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v86; // x21
  struct DataLostResetManager___c_StaticFields *static_fields; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  UnityEngine_WaitWhile_o *v94; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v102; // x8
  UnityEngine_Object_o *v103; // x20
  UnityEngine_Object_o *v104; // x21
  System_String_o *name; // x0
  System_String_o *v106; // x0
  UnityEngine_WaitForSeconds_o *v107; // x20
  Il2CppObject **v108; // x19
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7

  if ( (byte_4BC720E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, v3);
    sub_1C1ABD4(&AssetManager_TypeInfo, v4);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v5);
    sub_1C1ABD4(&System_Func_bool__TypeInfo, v6);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C1ABD4(&SoundManager_TypeInfo, v13);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
    sub_1C1ABD4(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v15);
    sub_1C1ABD4(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v16);
    sub_1C1ABD4(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v17);
    sub_1C1ABD4(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v18);
    sub_1C1ABD4(&DataLostResetManager___c_TypeInfo, v19);
    sub_1C1ABD4(&UnityEngine_WaitForSeconds_TypeInfo, v20);
    sub_1C1ABD4(&UnityEngine_WaitWhile_TypeInfo, v21);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v22);
    byte_4BC720E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v77 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v77 = (_QWORD *)sub_1C1ABEC(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v78 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v77, v77[4]);
      OverwriteAssetSoundName__PlaySe(v78, this->fields._whiteOutSe_5__3, 0, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v82 = (CommonUI_o *)Instance;
    v83 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v83,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v82 )
      goto LABEL_70;
    CommonUI__maskFadeout(v82, 2, whiteOutTime_5__2, v83, 0LL);
    goto LABEL_39;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v84 = DataLostResetManager___c_TypeInfo;
    if ( !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v84 = DataLostResetManager___c_TypeInfo;
    }
    _9__11_0 = v84->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v84->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v84);
        v84 = DataLostResetManager___c_TypeInfo;
      }
      v86 = (Il2CppObject *)v84->static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_1C1AE20(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__11_0, v86, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0LL);
      static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = _9__11_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
        (int64_t)_9__11_0,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
    }
    v94 = (UnityEngine_WaitWhile_o *)sub_1C1AE20(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v94, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v94;
    p__2__current = &this->fields.__2__current;
    sub_1C1AB78((PartyOrganizationUtility_o *)p__2__current, (int64_t)v94, v96, v97, v98, v99, v100, v101);
    *((_DWORD *)p__2__current - 2) = 2;
    LOBYTE(AssetStorage) = 1;
    return (char)AssetStorage;
  }
  if ( _1__state )
  {
LABEL_39:
    LOBYTE(AssetStorage) = 0;
    return (char)AssetStorage;
  }
  this->fields.__1__state = -1;
  v24 = (Il2CppObject *)sub_1C1AE20(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v24, 0LL);
  this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v24;
  p__8__1 = &this->fields.__8__1;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__8__1, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  clip = (int64_t)this->fields.__8__1;
  if ( !clip )
    goto LABEL_70;
  endAction = this->fields.endAction;
  *(_QWORD *)(clip + 24) = endAction;
  sub_1C1AB78((PartyOrganizationUtility_o *)(clip + 24), (int64_t)endAction, v33, v34, v35, v36, v37, v38);
  eventId = this->fields.eventId;
  warId = this->fields.warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v41);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v46 = AssetStorage;
    v47 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v47 = DataLostResetManager_TypeInfo;
    }
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                v46,
                                v47->static_fields->PREFAB_EFFECT_NAME,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL) )
    {
      v49 = *p__8__1;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clip = (int64_t)UnityEngine_Object__Instantiate_object_(
                        Object_object__49812820,
                        (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v49 )
      {
        v49->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v49->fields, clip, v50, v51, v52, v53, v54, v55);
        if ( *p__8__1 )
        {
          gameOverEffect = (*p__8__1)->fields.gameOverEffect;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v32);
            byte_4BC2713 = 1;
          }
          clip = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            clip = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v57 = **(_QWORD **)(clip + 184);
          if ( v57 )
          {
            GameObjectExtensions__SafeSetParent_34762256(gameOverEffect, *(UnityEngine_GameObject_o **)(v57 + 336), 0LL);
            this->fields._whiteOutTime_5__2 = 1.5;
            v58 = StringLiteral_1/*""*/;
            this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&this->fields._whiteOutSe_5__3,
              (int64_t)v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            v65 = this->fields.__8__1;
            if ( v65 )
            {
              clip = (int64_t)v65->fields.gameOverEffect;
              if ( clip )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)clip,
                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                clip = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( (clip & 1) != 0 )
                {
                  if ( !Component_object )
                    goto LABEL_70;
                  v73 = *((float *)&Component_object[2].klass + 1);
                  v74 = *(float *)&Component_object[2].klass;
                  this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                  klass = (struct System_String_o *)Component_object[3].klass;
                  this->fields._whiteOutSe_5__3 = klass;
                  sub_1C1AB78(
                    (PartyOrganizationUtility_o *)&this->fields._whiteOutSe_5__3,
                    (int64_t)klass,
                    v67,
                    v68,
                    v69,
                    v70,
                    v71,
                    v72);
                }
                else
                {
                  v74 = 1.5;
                  v73 = 6.5;
                }
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__fadeoutBgm(v74, 0LL);
                if ( *p__8__1 )
                {
                  clip = (int64_t)(*p__8__1)->fields.gameOverEffect;
                  if ( clip )
                  {
                    clip = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)clip,
                                      (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    v102 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v103 = (UnityEngine_Object_o *)clip;
                      clip = (int64_t)v102->fields.gameOverEffect;
                      if ( clip )
                      {
                        v104 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)clip,
                                                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        clip = UnityEngine_Object__op_Inequality(v103, 0LL, 0LL);
                        if ( (clip & 1) != 0 )
                        {
                          if ( v103 )
                          {
                            clip = (int64_t)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v103, 0LL);
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = (int64_t)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v103, 0LL);
                              if ( clip )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                UnityEngine_Animation__Play_70538820((UnityEngine_Animation_o *)v103, name, 0LL);
LABEL_68:
                                v107 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
                                UnityEngine_WaitForSeconds___ctor(v107, v73, 0LL);
                                this->fields.__2__current = (Il2CppObject *)v107;
                                v108 = &this->fields.__2__current;
                                sub_1C1AB78(
                                  (PartyOrganizationUtility_o *)v108,
                                  (int64_t)v107,
                                  v109,
                                  v110,
                                  v111,
                                  v112,
                                  v113,
                                  v114);
                                LOBYTE(AssetStorage) = 1;
                                *((_DWORD *)v108 - 2) = 1;
                                return (char)AssetStorage;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          clip = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
                          if ( (clip & 1) == 0 )
                            goto LABEL_68;
                          if ( v104 )
                          {
                            clip = (int64_t)v104[5].klass;
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = (int64_t)v104[5].klass;
                              if ( clip )
                              {
                                v106 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                SimpleAnimation__Play_65178652((SimpleAnimation_o *)v104, v106, 0LL);
                                goto LABEL_68;
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
LABEL_70:
      sub_1C1AE30(clip, v32);
    }
    goto LABEL_39;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7205 & 1) == 0 )
  {
    sub_1C1ABD4(&DataLostResetManager___c_TypeInfo, v1);
    byte_4BC7205 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)DataLostResetManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7206 & 1) == 0 )
  {
    sub_1C1ABD4(&CTouch_TypeInfo, method);
    byte_4BC7206 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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
  struct System_Action_o *endAction; // x8

  if ( (byte_4BC7207 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC7207 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(gameOverEffect, 0LL);
  endAction = this->fields.endAction;
  if ( endAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endAction->fields.m_target)(
      endAction->fields.original_method_info,
      *(_QWORD *)&endAction->fields.extra_arg);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x6
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v19; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_4BC7208 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_1C1ABD4(
                                                            &Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
                                                            v6);
    byte_4BC7208 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_39647664(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
        sub_1C1AE38(this, *(_QWORD *)&selectNo);
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v19 = idx->m_Items[selectNo];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v19, isNoCancel, resetDelegate, v15);
      return;
    }
LABEL_15:
    sub_1C1AE30(this, *(_QWORD *)&selectNo);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__SetTitleInfoTouchEnable(1, *(const MethodInfo **)&selectNo);
}


void __fastcall DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4BC7209 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC7209 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(selectDialogObj, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v21; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v24; // x19
  struct DataLostResetManager_ClickDelegate_o *v25; // x8

  v4 = this;
  if ( (byte_4BC720A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_1C1ABD4(
                                                            &Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
                                                            v6);
    byte_4BC720A = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !confirmDialog )
    sub_1C1AE30(this, isDecide);
  ResetConfirmDialog__Close_39648272(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v4->fields.resetIdx;
      m_target = resetDelegate->fields.m_target;
      original_method_info = resetDelegate->fields.original_method_info;
      v21 = *(_QWORD *)&resetDelegate->fields.extra_arg;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
        original_method_info,
        resetIdx,
        v21);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v24 = v4->fields.resetDelegate;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v24, v16);
  }
  else
  {
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v15);
    v25 = v4->fields.resetDelegate;
    if ( v25 )
    {
      m_target = v25->fields.m_target;
      original_method_info = v25->fields.original_method_info;
      v21 = *(_QWORD *)&v25->fields.extra_arg;
      resetIdx = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
  }
}


void __fastcall DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__1(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *confirmDialogObj; // x19

  if ( (byte_4BC720B & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC720B = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(confirmDialogObj, 0LL);
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
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4BC720C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_1C1ABD4(
                                                            &Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
                                                            v4);
    byte_4BC720C = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !selectDialog )
    sub_1C1AE30(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_39647664(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4BC720D & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC720D = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(selectDialogObj, 0LL);
}