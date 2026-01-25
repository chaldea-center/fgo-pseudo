void DataLostResetManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct DataLostResetManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CEDAEA & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11413/*"ResetConfirmDialog"*/);
    sub_1C7BAE8(&StringLiteral_17322/*"bit_raidreset"*/);
    sub_1C7BAE8(&StringLiteral_11416/*"ResetSelectDialog"*/);
    byte_4CEDAEA = 1;
  }
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17322/*"bit_raidreset"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)DataLostResetManager_TypeInfo->static_fields,
    StringLiteral_17322/*"bit_raidreset"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_11416/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11416/*"ResetSelectDialog"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_11413/*"ResetConfirmDialog"*/;
  v16 = DataLostResetManager_TypeInfo->static_fields;
  v16->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11413/*"ResetConfirmDialog"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->PREFAB_CONFIRM_DIALOG_NAME, v15, v17, v18, v19, v20, v21, v22);
}


void DataLostResetManager___ctor(DataLostResetManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *DataLostResetManager__GetEventAssetName(int32_t eventId, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+4h] [xbp-2Ch] BYREF
  int v10; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDAE2 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6283/*"EventUI/Prefabs/{0}"*/);
    sub_1C7BAE8(&StringLiteral_6284/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4CEDAE2 = 1;
  }
  if ( eventId )
  {
    v11 = eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    return System_String__Format((System_String_o *)StringLiteral_6283/*"EventUI/Prefabs/{0}"*/, v5, 0);
  }
  else
  {
    v10 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    v9 = warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
    return System_String__Format_64218220((System_String_o *)StringLiteral_6284/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8, 0);
  }
}


void DataLostResetManager__OpenBattleResultResetDialog(
        int32_t eventId,
        int32_t warId,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *Instance; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v19; // x23
  DataLostResetManager_c *v20; // x0
  Il2CppObject *Object_object__51713432; // x23
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o **v30; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v38; // x25
  const MethodInfo *v39; // x1
  ResetSelectDialog_o *v40; // x19
  System_String_o *v41; // x20
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  ResetSelectDialog_ClickDelegate_o *v44; // x24
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x5
  UnityEngine_Object_o *v47; // x19

  if ( (byte_4CEDAE5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__);
    sub_1C7BAE8(&DataLostResetManager___c__DisplayClass8_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5592/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/);
    sub_1C7BAE8(&StringLiteral_5594/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_5593/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/);
    byte_4CEDAE5 = 1;
  }
  v7 = sub_1C7BD34(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_40;
  *(_QWORD *)(v7 + 32) = closeAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)closeAction, v10, v11, v12, v13, v14, v15);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v16);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v19 = AssetStorage;
    v20 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v20 = DataLostResetManager_TypeInfo;
    }
    Object_object__51713432 = AssetData__GetObject_object__51713432(
                                v19,
                                v20->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v22 = UnityEngine_Object__Instantiate_object_(
              Object_object__51713432,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v7 + 24) = v22;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v22, v23, v24, v25, v26, v27, v28);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v7 + 16) = Component_object;
      v30 = (UnityEngine_GameObject_o **)(v7 + 16);
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v9);
      Instance = *v30;
      if ( !*v30 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)Instance[5].klass;
      if ( !Instance )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
      if ( !transform )
        goto LABEL_40;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)Instance, 0);
      Instance = *v30;
      if ( !*v30 )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
      v38 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4CE7E5E )
      {
        Instance = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
      }
      if ( !v38 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(
             (EventDataLostBattleMaster_o *)Instance,
             warId,
             eventId,
             0) != -1 )
      {
        if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
        DataLostResetManager__SetTitleInfoTouchEnable(0, v39);
        v40 = (ResetSelectDialog_o *)*v30;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5593/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0);
        v44 = (ResetSelectDialog_ClickDelegate_o *)sub_1C7BD34(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v44,
          (Il2CppObject *)v7,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v45);
        if ( v40 )
        {
          ResetSelectDialog__OpenSingleButton(v40, v41, v42, v43, v44, v46);
          return;
        }
LABEL_40:
        sub_1C7BD40(Instance, v9);
      }
      v47 = *(UnityEngine_Object_o **)(v7 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v47, 0);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
}


void DataLostResetManager__OpenConfirmDialog(
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
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v24; // x20
  DataLostResetManager_c *v25; // x0
  Il2CppObject *Object_object__51713432; // x20
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
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
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x5
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v58; // 0:x2.16

  v57 = selectNo;
  if ( (byte_4CEDAE4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&ResetConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__);
    sub_1C7BAE8(&DataLostResetManager___c__DisplayClass7_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5600/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_5599/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDAE4 = 1;
  }
  v12 = sub_1C7BD34(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_35;
  *(_QWORD *)(v12 + 32) = resetDelegate;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)resetDelegate, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 40) = resetIdx;
  *(_BYTE *)(v12 + 44) = isBackReturn;
  *(_DWORD *)(v12 + 48) = eventId;
  *(_DWORD *)(v12 + 52) = warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v21);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v24 = AssetStorage;
    v25 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v25 = DataLostResetManager_TypeInfo;
    }
    Object_object__51713432 = AssetData__GetObject_object__51713432(
                                v24,
                                v25->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = UnityEngine_Object__Instantiate_object_(
              Object_object__51713432,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v12 + 24) = v27;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
      mInstance = *(UnityEngine_GameObject_o **)(v12 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v12 + 16) = Component_object;
        v35 = (BaseDialog_o **)(v12 + 16);
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)Component_object, v36, v37, v38, v39, v40, v41);
        mInstance = *(UnityEngine_GameObject_o **)(v12 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v14);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CE840E )
          {
            sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
            byte_4CE840E = 1;
          }
          v42 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v42 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v42->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v58.fields.hasValue = 0;
            *(_QWORD *)&v58.fields.value.fields.y = 0;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v35, v58, 0);
            v43 = System_Int32__ToString((int32_t)&v57, 0);
            v44 = System_String__Concat_64176912((System_String_o *)StringLiteral_5599/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v43, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v45 = LocalizationManager__Get(v44, 0);
            v46 = System_Int32__ToString((int32_t)&v57, 0);
            v47 = System_String__Concat_64176912((System_String_o *)StringLiteral_5599/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v46, 0);
            v48 = System_String__op_Equality(v45, v47, 0);
            v49 = *v35;
            v50 = v48 ? (System_String_o *)StringLiteral_1/*""*/ : v45;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0);
            v52 = *(unsigned __int8 *)(v12 + 44);
            v53 = v51;
            v54 = (ResetConfirmDialog_ClickDelegate_o *)sub_1C7BD34(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v54,
              (Il2CppObject *)v12,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v55);
            if ( v49 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v49, v53, v50, v52 != 0, v54, v56);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_1C7BD40(mInstance, v14);
    }
  }
}


void DataLostResetManager__OpenResetSelectDialog(
        int32_t eventId,
        int32_t warId,
        bool isNoCancel,
        DataLostResetManager_ClickDelegate_o *resetDelegate,
        const MethodInfo *method)
{
  __int64 v9; // x19
  void *mInstance; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  int32_t v19; // w20
  int32_t v20; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v23; // x20
  DataLostResetManager_c *v24; // x0
  Il2CppObject *Object_object__51713432; // x20
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  TerminalSceneComponent_c *v41; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v43; // x1
  int32_t v44; // w21
  System_Collections_Generic_List_object__o *v45; // x23
  System_String_o *v46; // x21
  __int64 v47; // x0
  __int64 *v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x22
  System_String_o *v58; // x25
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  __int64 v61; // x24
  System_String_o *v62; // x25
  __int64 v63; // x28
  __int64 v64; // x24
  BaseDialog_o *v65; // x20
  System_String_o *v66; // x0
  int v67; // w26
  System_String_o *v68; // x23
  ResetSelectDialog_ClickDelegate_o *v69; // x24
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x7
  int v72; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v73; // 0:x2.16

  if ( (byte_4CEDAE3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__);
    sub_1C7BAE8(&DataLostResetManager___c__DisplayClass6_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16337/*"_NO_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_5603/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/);
    sub_1C7BAE8(&StringLiteral_5604/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDAE3 = 1;
  }
  v72 = 0;
  v9 = sub_1C7BD34(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_63;
  *(_QWORD *)(v9 + 56) = resetDelegate;
  *(_DWORD *)(v9 + 32) = eventId;
  *(_DWORD *)(v9 + 36) = warId;
  *(_BYTE *)(v9 + 48) = isNoCancel;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)resetDelegate, v12, v13, v14, v15, v16, v17);
  v20 = *(_DWORD *)(v9 + 32);
  v19 = *(_DWORD *)(v9 + 36);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(v20, v19, v18);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v23 = AssetStorage;
    v24 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v24 = DataLostResetManager_TypeInfo;
    }
    Object_object__51713432 = AssetData__GetObject_object__51713432(
                                v23,
                                v24->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__Instantiate_object_(
              Object_object__51713432,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v9 + 24) = v26;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v26, v27, v28, v29, v30, v31, v32);
      mInstance = *(void **)(v9 + 24);
      if ( !mInstance )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v9 + 16) = Component_object;
      v34 = (BaseDialog_o **)(v9 + 16);
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)Component_object, v35, v36, v37, v38, v39, v40);
      mInstance = *(void **)(v9 + 16);
      if ( !mInstance )
        goto LABEL_63;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v11);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CE840E )
      {
        sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
        byte_4CE840E = 1;
      }
      v41 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v41 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v41->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_63;
      *(_QWORD *)&v73.fields.hasValue = 0;
      *(_QWORD *)&v73.fields.value.fields.y = 0;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v34, v73, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_63;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v9 + 36),
                                *(_DWORD *)(v9 + 32),
                                0);
      if ( EventDataLostBattleId == -1 )
        return;
      v44 = EventDataLostBattleId;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v43);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_63;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v44,
                    *(_DWORD *)(v9 + 32),
                    0);
      if ( !mInstance )
        goto LABEL_63;
      v45 = (System_Collections_Generic_List_object__o *)mInstance;
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      v72 = *((_DWORD *)mInstance + 6);
      v47 = sub_1C7BB90(int___TypeInfo, 2);
      *(_QWORD *)(v9 + 40) = v47;
      v48 = (__int64 *)(v9 + 40);
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), v47, v49, v50, v51, v52, v53, v54);
      v55 = System_Int32__ToString((int32_t)&v72, 0);
      v56 = System_String__Concat_64176912((System_String_o *)StringLiteral_5603/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v55, 0);
      v57 = v56;
      if ( ((v72 > 1) & *(_BYTE *)(v9 + 48)) != 0 )
        v57 = System_String__Concat_64176912(v56, (System_String_o *)StringLiteral_16337/*"_NO_CANCEL"*/, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__Get(v57, 0);
      if ( System_String__op_Equality(v58, v57, 0) )
        v59 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v59 = v58;
      if ( v72 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v45,
                      0,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v46 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v45,
                      1,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v62 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v63 = *v48;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v45,
                      0,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v63 )
          goto LABEL_63;
        if ( *(_DWORD *)(v63 + 24) )
        {
          *(_DWORD *)(v63 + 32) = *((_DWORD *)mInstance + 5);
          v64 = *v48;
          mInstance = System_Collections_Generic_List_object___get_Item(
                        v45,
                        1,
                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
          if ( !mInstance || !v64 )
            goto LABEL_63;
          if ( *(_DWORD *)(v64 + 24) > 1u )
          {
            *(_DWORD *)(v64 + 36) = *((_DWORD *)mInstance + 5);
LABEL_58:
            v65 = *v34;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0);
            v67 = *(unsigned __int8 *)(v9 + 48);
            v68 = v66;
            v69 = (ResetSelectDialog_ClickDelegate_o *)sub_1C7BD34(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v69,
              (Il2CppObject *)v9,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v70);
            if ( v65 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v65, v68, v59, v46, v62, v67 != 0, v69, v71);
              return;
            }
LABEL_63:
            sub_1C7BD40(mInstance, v11);
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0);
        v61 = *v48;
        v62 = v60;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v45,
                      0,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v61 )
          goto LABEL_63;
        if ( *(_DWORD *)(v61 + 24) )
        {
          *(_DWORD *)(v61 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_58;
        }
      }
      sub_1C7BD48(mInstance);
    }
  }
}


System_Collections_IEnumerator_o *DataLostResetManager__PlayGameOverAnimation(
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEDAE8 & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
    byte_4CEDAE8 = 1;
  }
  v7 = sub_1C7BD34(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)endAction, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void DataLostResetManager__PlayResetEffect(
        UnityEngine_MonoBehaviour_o *mono,
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4CEDAE7 & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    byte_4CEDAE7 = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_1C7BD40(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340(mono, v9, 0);
}


void DataLostResetManager__RequestResetDataLostBattle(
        int32_t eventId,
        int32_t warId,
        int32_t resetIdx,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t EventDataLostBattleId; // w0
  int32_t v12; // w21

  if ( (byte_4CEDAE6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEDAE6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0);
  if ( EventDataLostBattleId != -1 )
  {
    v12 = EventDataLostBattleId;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v12,
        resetIdx,
        0);
      return;
    }
LABEL_12:
    sub_1C7BD40(Master_object, v10);
  }
}


void DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEDAE9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEDAE9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB60B )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB60B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4CEB802 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4CEB802 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4CEB803 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4CEB803 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4CEB804 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4CEB804 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4CE8D13 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4CE8D13 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0);
  if ( !byte_4CEB7F6 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB7F6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_4CEB7F7 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4CEB7F7 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_4CEBA57 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4CEBA57 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0, 0, 0);
}


void DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *v7; // x8

  if ( (byte_4CEDAE1 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEDAE1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
    }
    mTitleInfo = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mTitleInfo = TerminalSceneComponent_TypeInfo;
    }
    v7 = mTitleInfo->static_fields->mInstance;
    if ( !v7 || (mTitleInfo = (TerminalSceneComponent_c *)v7->fields.mTitleInfo) == 0 )
      sub_1C7BD40(mTitleInfo, v5);
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, flag, 0);
  }
}


void DataLostResetManager_ClickDelegate___ctor(
        DataLostResetManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB1974;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB192C;
}


System_IAsyncResult_o *DataLostResetManager_ClickDelegate__BeginInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = resetIdx;
  if ( (byte_4CEDAEB & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CEDAEB = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void DataLostResetManager_ClickDelegate__Invoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    resetIdx,
    this->fields.method);
}


void DataLostResetManager__PlayGameOverAnimation_d__11___ctor(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataLostResetManager__PlayGameOverAnimation_d__11__MoveNext(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  void *clip; // x0
  struct System_Action_o *endAction; // x1
  const MethodInfo *v21; // x2
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v26; // x21
  DataLostResetManager_c *v27; // x0
  Il2CppObject *Object_object__51713432; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v37; // x8
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v45; // x8
  Il2CppObject *Component_object; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  float v53; // s8
  float v54; // s9
  struct System_String_o *klass; // x1
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v62; // x19
  System_Action_o *v63; // x20
  DataLostResetManager___c_c *v64; // x0
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v66; // x21
  struct DataLostResetManager___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  UnityEngine_WaitWhile_o *v74; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v82; // x8
  UnityEngine_Object_o *v83; // x20
  UnityEngine_Object_o *v84; // x21
  System_String_o *name; // x0
  System_String_o *v86; // x0
  UnityEngine_WaitForSeconds_o *v87; // x20
  Il2CppObject **v88; // x19
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7

  if ( (byte_4CEDAF5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
    sub_1C7BAE8(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__);
    sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__);
    sub_1C7BAE8(&DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager___c_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDAF5 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0) )
    {
      v57 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1C7BB00(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v58 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v57, v57[4]);
      OverwriteAssetSoundName__PlaySe(v58, this->fields._whiteOutSe_5__3, 0, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v62 = (CommonUI_o *)Instance;
    v63 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v63, _8__1, Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, 0);
    if ( !v62 )
      goto LABEL_70;
    CommonUI__maskFadeout(v62, 2, whiteOutTime_5__2, v63, 0);
    goto LABEL_39;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v64 = DataLostResetManager___c_TypeInfo;
    if ( !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v64 = DataLostResetManager___c_TypeInfo;
    }
    _9__11_0 = v64->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = DataLostResetManager___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v64->static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__11_0, v66, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0);
      static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = _9__11_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
        (int32_t)_9__11_0,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
    }
    v74 = (UnityEngine_WaitWhile_o *)sub_1C7BD34(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v74, _9__11_0, 0);
    this->fields.__2__current = (Il2CppObject *)v74;
    p__2__current = &this->fields.__2__current;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v74, v76, v77, v78, v79, v80, v81);
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
  v4 = (Il2CppObject *)sub_1C7BD34(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v4, 0);
  this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v4;
  p__8__1 = &this->fields.__8__1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  clip = this->fields.__8__1;
  if ( !clip )
    goto LABEL_70;
  endAction = this->fields.endAction;
  *((_QWORD *)clip + 3) = endAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)clip + 24), (int32_t)endAction, v13, v14, v15, v16, v17, v18);
  eventId = this->fields.eventId;
  warId = this->fields.warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v21);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v26 = AssetStorage;
    v27 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v27 = DataLostResetManager_TypeInfo;
    }
    Object_object__51713432 = AssetData__GetObject_object__51713432(
                                v26,
                                v27->static_fields->PREFAB_EFFECT_NAME,
                                (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
    {
      v29 = *p__8__1;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clip = UnityEngine_Object__Instantiate_object_(
               Object_object__51713432,
               (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v29 )
      {
        v29->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v29->fields, (int32_t)clip, v30, v31, v32, v33, v34, v35);
        if ( *p__8__1 )
        {
          gameOverEffect = (*p__8__1)->fields.gameOverEffect;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CE840E )
          {
            sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
            byte_4CE840E = 1;
          }
          clip = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            clip = TerminalSceneComponent_TypeInfo;
          }
          v37 = **((_QWORD **)clip + 23);
          if ( v37 )
          {
            GameObjectExtensions__SafeSetParent_36529116(gameOverEffect, *(UnityEngine_GameObject_o **)(v37 + 336), 0);
            this->fields._whiteOutTime_5__2 = 1.5;
            v38 = StringLiteral_1/*""*/;
            this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields._whiteOutSe_5__3,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            v45 = this->fields.__8__1;
            if ( v45 )
            {
              clip = v45->fields.gameOverEffect;
              if ( clip )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)clip,
                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                if ( ((unsigned __int8)clip & 1) != 0 )
                {
                  if ( !Component_object )
                    goto LABEL_70;
                  v53 = *((float *)&Component_object[2].klass + 1);
                  v54 = *(float *)&Component_object[2].klass;
                  this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                  klass = (struct System_String_o *)Component_object[3].klass;
                  this->fields._whiteOutSe_5__3 = klass;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&this->fields._whiteOutSe_5__3,
                    (int32_t)klass,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51,
                    v52);
                }
                else
                {
                  v54 = 1.5;
                  v53 = 6.5;
                }
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__fadeoutBgm(v54, 0);
                if ( *p__8__1 )
                {
                  clip = (*p__8__1)->fields.gameOverEffect;
                  if ( clip )
                  {
                    clip = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)clip,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    v82 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v83 = (UnityEngine_Object_o *)clip;
                      clip = v82->fields.gameOverEffect;
                      if ( clip )
                      {
                        v84 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)clip,
                                                        (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        clip = (void *)UnityEngine_Object__op_Inequality(v83, 0, 0);
                        if ( ((unsigned __int8)clip & 1) != 0 )
                        {
                          if ( v83 )
                          {
                            clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v83, 0);
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0);
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v83, 0);
                              if ( clip )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
                                UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)v83, name, 0);
LABEL_68:
                                v87 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
                                UnityEngine_WaitForSeconds___ctor(v87, v53, 0);
                                this->fields.__2__current = (Il2CppObject *)v87;
                                v88 = &this->fields.__2__current;
                                sub_1C7BA8C(
                                  (GrandQuestFolderBoardItem_o *)v88,
                                  (int32_t)v87,
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
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          clip = (void *)UnityEngine_Object__op_Inequality(v84, 0, 0);
                          if ( ((unsigned __int8)clip & 1) == 0 )
                            goto LABEL_68;
                          if ( v84 )
                          {
                            clip = v84[5].klass;
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0);
                              clip = v84[5].klass;
                              if ( clip )
                              {
                                v86 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
                                SimpleAnimation__Play_67121960((SimpleAnimation_o *)v84, v86, 0);
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
      sub_1C7BD40(clip, v12);
    }
    goto LABEL_39;
  }
  return (char)AssetStorage;
}


Il2CppObject *DataLostResetManager__PlayGameOverAnimation_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataLostResetManager__PlayGameOverAnimation_d__11__System_Collections_IEnumerator_Reset(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *DataLostResetManager__PlayGameOverAnimation_d__11__System_Collections_IEnumerator_get_Current(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataLostResetManager__PlayGameOverAnimation_d__11__System_IDisposable_Dispose(
        DataLostResetManager__PlayGameOverAnimation_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void DataLostResetManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEDAEC & 1) == 0 )
  {
    sub_1C7BAE8(&DataLostResetManager___c_TypeInfo);
    byte_4CEDAEC = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)DataLostResetManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEDAED & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CEDAED = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return !CTouch__isTouchPush(0);
}


void DataLostResetManager___c__DisplayClass11_0___ctor(
        DataLostResetManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataLostResetManager___c__DisplayClass11_0___PlayGameOverAnimation_b__1(
        DataLostResetManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameOverEffect; // x20
  struct System_Action_o *endAction; // x8

  if ( (byte_4CEDAEE & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDAEE = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameOverEffect, 0);
  endAction = this->fields.endAction;
  if ( endAction )
    ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
      endAction->fields.method_code,
      endAction->fields.method);
}


void DataLostResetManager___c__DisplayClass6_0___ctor(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__0(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        int32_t selectNo,
        const MethodInfo *method)
{
  DataLostResetManager___c__DisplayClass6_0_o *v4; // x20
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x6
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v17; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_4CEDAEF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__);
    byte_4CEDAEF = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_41520172(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( (unsigned int)(selectNo - 1) >= LODWORD(idx->max_length) )
        sub_1C7BD48(this);
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v17 = idx->m_Items[selectNo - 1];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v17, isNoCancel, resetDelegate, v13);
      return;
    }
LABEL_15:
    sub_1C7BD40(this, *(_QWORD *)&selectNo);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__SetTitleInfoTouchEnable(1, *(const MethodInfo **)&selectNo);
}


void DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4CEDAF0 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDAF0 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(selectDialogObj, 0);
}


void DataLostResetManager___c__DisplayClass7_0___ctor(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__0(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  DataLostResetManager___c__DisplayClass7_0_o *v4; // x19
  System_Action_o *_9__1; // x22
  ResetConfirmDialog_o *confirmDialog; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  void (__fastcall *invoke_impl)(intptr_t, __int64, intptr_t); // x3
  intptr_t method_code; // x0
  intptr_t v19; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v22; // x19
  struct DataLostResetManager_ClickDelegate_o *v23; // x8

  v4 = this;
  if ( (byte_4CEDAF1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__);
    byte_4CEDAF1 = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !confirmDialog )
    sub_1C7BD40(this, isDecide);
  ResetConfirmDialog__Close_41520780(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v4->fields.resetIdx;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))resetDelegate->fields.invoke_impl;
      method_code = resetDelegate->fields.method_code;
      v19 = resetDelegate->fields.method;
LABEL_17:
      invoke_impl(method_code, resetIdx, v19);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v22 = v4->fields.resetDelegate;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v22, v14);
  }
  else
  {
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v13);
    v23 = v4->fields.resetDelegate;
    if ( v23 )
    {
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, intptr_t))v23->fields.invoke_impl;
      method_code = v23->fields.method_code;
      v19 = v23->fields.method;
      resetIdx = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
  }
}


void DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__1(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *confirmDialogObj; // x19

  if ( (byte_4CEDAF2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDAF2 = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(confirmDialogObj, 0);
}


void DataLostResetManager___c__DisplayClass8_0___ctor(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__0(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        int32_t selectNo,
        const MethodInfo *method)
{
  DataLostResetManager___c__DisplayClass8_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4CEDAF3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_1C7BAE8(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__);
    byte_4CEDAF3 = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !selectDialog )
    sub_1C7BD40(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_41520172(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0);
}


void DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4CEDAF4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDAF4 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(selectDialogObj, 0);
}