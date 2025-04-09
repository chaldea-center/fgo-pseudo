void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct DataLostResetManager_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49BA5C2 & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_11110/*"ResetConfirmDialog"*/, v4);
    sub_1B4CF90(&StringLiteral_16951/*"bit_raidreset"*/, v5);
    sub_1B4CF90(&StringLiteral_11113/*"ResetSelectDialog"*/, v6);
    byte_49BA5C2 = 1;
  }
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_16951/*"bit_raidreset"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)DataLostResetManager_TypeInfo->static_fields, StringLiteral_16951/*"bit_raidreset"*/, v2, v3);
  v7 = StringLiteral_11113/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11113/*"ResetSelectDialog"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME, v7, v9, v10);
  v11 = StringLiteral_11110/*"ResetConfirmDialog"*/;
  v12 = DataLostResetManager_TypeInfo->static_fields;
  v12->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11110/*"ResetConfirmDialog"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v12->PREFAB_CONFIRM_DIALOG_NAME, v11, v13, v14);
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

  if ( (byte_49BA5BA & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&warId);
    sub_1B4CF90(&StringLiteral_6163/*"EventUI/Prefabs/{0}"*/, v7);
    sub_1B4CF90(&StringLiteral_6164/*"EventUI/Prefabs/{0}/{1}"*/, v8);
    byte_49BA5BA = 1;
  }
  if ( eventId )
  {
    v18 = eventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, method, v3, v4);
    return System_String__Format((System_String_o *)StringLiteral_6163/*"EventUI/Prefabs/{0}"*/, v9, 0LL);
  }
  else
  {
    v17 = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, method, v3, v4);
    v16 = warId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v12, v13, v14);
    return System_String__Format_61134760((System_String_o *)StringLiteral_6164/*"EventUI/Prefabs/{0}/{1}"*/, v11, v15, 0LL);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v30; // x23
  DataLostResetManager_c *v31; // x0
  Il2CppObject *Object_object__49169892; // x23
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *Component_object; // x0
  __int64 *v37; // x24
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v41; // x25
  const MethodInfo *v42; // x1
  ResetSelectDialog_o *v43; // x19
  System_String_o *v44; // x20
  System_String_o *v45; // x22
  System_String_o *v46; // x23
  ResetSelectDialog_ClickDelegate_o *v47; // x24
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x5
  UnityEngine_Object_o *v50; // x19

  if ( (byte_49BA5BD & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, *(_QWORD *)&warId);
    sub_1B4CF90(&AssetManager_TypeInfo, v7);
    sub_1B4CF90(&ResetSelectDialog_ClickDelegate_TypeInfo, v8);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v9);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v10);
    sub_1B4CF90(&DataManager_TypeInfo, v11);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v12);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v13);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B4CF90(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v17);
    sub_1B4CF90(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v18);
    sub_1B4CF90(&StringLiteral_5501/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v19);
    sub_1B4CF90(&StringLiteral_5503/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v20);
    sub_1B4CF90(&StringLiteral_5502/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v21);
    byte_49BA5BD = 1;
  }
  v22 = sub_1B4D1DC(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_40;
  *(_QWORD *)(v22 + 32) = closeAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 32), (int32_t)closeAction, v25, v26);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v27);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v30 = AssetStorage;
    v31 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v31 = DataLostResetManager_TypeInfo;
    }
    Object_object__49169892 = AssetData__GetObject_object__49169892(
                                v30,
                                v31->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49169892, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__Instantiate_object_(
              Object_object__49169892,
              (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v22 + 24) = v33;
      sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 24), (int32_t)v33, v34, v35);
      Instance = *(_QWORD *)(v22 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Instance,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v22 + 16) = Component_object;
      v37 = (__int64 *)(v22 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 16), (int32_t)Component_object, v38, v39);
      Instance = *(_QWORD *)(v22 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v24);
      Instance = *v37;
      if ( !*v37 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = *(_QWORD *)(Instance + 136);
      if ( !Instance )
        goto LABEL_40;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !transform )
        goto LABEL_40;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = *v37;
      if ( !*v37 )
        goto LABEL_40;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      v41 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_49B5366 )
      {
        Instance = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v24);
        byte_49B5366 = 1;
      }
      if ( !v41 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
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
        DataLostResetManager__SetTitleInfoTouchEnable(0, v42);
        v43 = (ResetSelectDialog_o *)*v37;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5503/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5502/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5501/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v47 = (ResetSelectDialog_ClickDelegate_o *)sub_1B4D1DC(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v47,
          (Il2CppObject *)v22,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v48);
        if ( v43 )
        {
          ResetSelectDialog__OpenSingleButton(v43, v44, v45, v46, v47, v49);
          return;
        }
LABEL_40:
        sub_1B4D1EC(Instance, v24);
      }
      v50 = *(UnityEngine_Object_o **)(v22 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68804456(v50, 0LL);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v33; // x20
  DataLostResetManager_c *v34; // x0
  Il2CppObject *Object_object__49169892; // x20
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  TerminalSceneComponent_c *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  System_String_o *v46; // x22
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  bool v49; // w0
  BaseDialog_o *v50; // x21
  System_String_o *v51; // x20
  System_String_o *v52; // x0
  int v53; // w24
  System_String_o *v54; // x22
  ResetConfirmDialog_ClickDelegate_o *v55; // x23
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x5
  int32_t v58; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v59; // 0:x2.16

  v58 = selectNo;
  if ( (byte_49BA5BC & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, *(_QWORD *)&warId);
    sub_1B4CF90(&AssetManager_TypeInfo, v12);
    sub_1B4CF90(&ResetConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v14);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v15);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v16);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v19);
    sub_1B4CF90(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v20);
    sub_1B4CF90(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v21);
    sub_1B4CF90(&StringLiteral_5509/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v22);
    sub_1B4CF90(&StringLiteral_5508/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v23);
    sub_1B4CF90(&StringLiteral_1/*""*/, v24);
    byte_49BA5BC = 1;
  }
  v25 = sub_1B4D1DC(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_35;
  *(_QWORD *)(v25 + 32) = resetDelegate;
  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 32), (int32_t)resetDelegate, v28, v29);
  *(_DWORD *)(v25 + 40) = resetIdx;
  *(_BYTE *)(v25 + 44) = isBackReturn;
  *(_DWORD *)(v25 + 48) = eventId;
  *(_DWORD *)(v25 + 52) = warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v30);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v33 = AssetStorage;
    v34 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v34 = DataLostResetManager_TypeInfo;
    }
    Object_object__49169892 = AssetData__GetObject_object__49169892(
                                v33,
                                v34->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49169892, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v36 = UnityEngine_Object__Instantiate_object_(
              Object_object__49169892,
              (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v25 + 24) = v36;
      sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 24), (int32_t)v36, v37, v38);
      mInstance = *(UnityEngine_GameObject_o **)(v25 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v25 + 16) = Component_object;
        v40 = (BaseDialog_o **)(v25 + 16);
        sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 16), (int32_t)Component_object, v41, v42);
        mInstance = *(UnityEngine_GameObject_o **)(v25 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v27);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v27);
            byte_49B5933 = 1;
          }
          v43 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v43 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v43->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v59.fields.hasValue = 0LL;
            *(_QWORD *)&v59.fields.value.fields.y = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v40, v59, 0LL);
            v44 = System_Int32__ToString((int32_t)&v58, 0LL);
            v45 = System_String__Concat_61093468((System_String_o *)StringLiteral_5508/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v44, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v46 = LocalizationManager__Get(v45, 0LL);
            v47 = System_Int32__ToString((int32_t)&v58, 0LL);
            v48 = System_String__Concat_61093468((System_String_o *)StringLiteral_5508/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v47, 0LL);
            v49 = System_String__op_Equality(v46, v48, 0LL);
            v50 = *v40;
            v51 = v49 ? (System_String_o *)StringLiteral_1/*""*/ : v46;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_5509/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v53 = *(unsigned __int8 *)(v25 + 44);
            v54 = v52;
            v55 = (ResetConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v55,
              (Il2CppObject *)v25,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v56);
            if ( v50 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v50, v54, v51, v53 != 0, v55, v57);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_1B4D1EC(mInstance, v27);
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  int32_t v36; // w20
  int32_t v37; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v40; // x20
  DataLostResetManager_c *v41; // x0
  Il2CppObject *Object_object__49169892; // x20
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  TerminalSceneComponent_c *v50; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v52; // x1
  int32_t v53; // w21
  System_Collections_Generic_List_object__o *v54; // x23
  System_String_o *v55; // x21
  __int64 v56; // x0
  __int64 *v57; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x22
  System_String_o *v63; // x25
  System_String_o *v64; // x22
  System_String_o *v65; // x0
  __int64 v66; // x24
  System_String_o *v67; // x25
  __int64 v68; // x28
  __int64 v69; // x24
  BaseDialog_o *v70; // x20
  System_String_o *v71; // x0
  int v72; // w26
  System_String_o *v73; // x23
  ResetSelectDialog_ClickDelegate_o *v74; // x24
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x7
  int v77; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v78; // 0:x2.16

  if ( (byte_49BA5BB & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, *(_QWORD *)&warId);
    sub_1B4CF90(&AssetManager_TypeInfo, v9);
    sub_1B4CF90(&ResetSelectDialog_ClickDelegate_TypeInfo, v10);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v13);
    sub_1B4CF90(&DataManager_TypeInfo, v14);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v15);
    sub_1B4CF90(&int___TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v18);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v19);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v21);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v22);
    sub_1B4CF90(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v23);
    sub_1B4CF90(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v24);
    sub_1B4CF90(&StringLiteral_15967/*"_NO_CANCEL"*/, v25);
    sub_1B4CF90(&StringLiteral_5511/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v26);
    sub_1B4CF90(&StringLiteral_5512/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v27);
    sub_1B4CF90(&StringLiteral_5513/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v28);
    sub_1B4CF90(&StringLiteral_1/*""*/, v29);
    byte_49BA5BB = 1;
  }
  v77 = 0;
  v30 = sub_1B4D1DC(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_63;
  *(_QWORD *)(v30 + 56) = resetDelegate;
  *(_DWORD *)(v30 + 32) = eventId;
  *(_DWORD *)(v30 + 36) = warId;
  *(_BYTE *)(v30 + 48) = isNoCancel;
  sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 56), (int32_t)resetDelegate, v33, v34);
  v37 = *(_DWORD *)(v30 + 32);
  v36 = *(_DWORD *)(v30 + 36);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(v37, v36, v35);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v40 = AssetStorage;
    v41 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v41 = DataLostResetManager_TypeInfo;
    }
    Object_object__49169892 = AssetData__GetObject_object__49169892(
                                v40,
                                v41->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49169892, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__Instantiate_object_(
              Object_object__49169892,
              (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v30 + 24) = v43;
      sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 24), (int32_t)v43, v44, v45);
      mInstance = *(void **)(v30 + 24);
      if ( !mInstance )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v30 + 16) = Component_object;
      v47 = (BaseDialog_o **)(v30 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 16), (int32_t)Component_object, v48, v49);
      mInstance = *(void **)(v30 + 16);
      if ( !mInstance )
        goto LABEL_63;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v32);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49B5933 )
      {
        sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v32);
        byte_49B5933 = 1;
      }
      v50 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v50 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v50->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_63;
      *(_QWORD *)&v78.fields.hasValue = 0LL;
      *(_QWORD *)&v78.fields.value.fields.y = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v47, v78, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_63;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v30 + 36),
                                *(_DWORD *)(v30 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v53 = EventDataLostBattleId;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v52);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_63;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v53,
                    *(_DWORD *)(v30 + 32),
                    0LL);
      if ( !mInstance )
        goto LABEL_63;
      v54 = (System_Collections_Generic_List_object__o *)mInstance;
      v55 = (System_String_o *)StringLiteral_1/*""*/;
      v77 = *((_DWORD *)mInstance + 6);
      v56 = sub_1B4D038(int___TypeInfo, 2LL);
      *(_QWORD *)(v30 + 40) = v56;
      v57 = (__int64 *)(v30 + 40);
      sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 40), v56, v58, v59);
      v60 = System_Int32__ToString((int32_t)&v77, 0LL);
      v61 = System_String__Concat_61093468((System_String_o *)StringLiteral_5512/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v60, 0LL);
      v62 = v61;
      if ( ((v77 > 1) & *(_BYTE *)(v30 + 48)) != 0 )
        v62 = System_String__Concat_61093468(v61, (System_String_o *)StringLiteral_15967/*"_NO_CANCEL"*/, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v63 = LocalizationManager__Get(v62, 0LL);
      if ( System_String__op_Equality(v63, v62, 0LL) )
        v64 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v64 = v63;
      if ( v77 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v54,
                      0,
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v55 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v54,
                      1,
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v67 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v68 = *v57;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v54,
                      0,
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v68 )
          goto LABEL_63;
        if ( *(_DWORD *)(v68 + 24) )
        {
          *(_DWORD *)(v68 + 32) = *((_DWORD *)mInstance + 5);
          v69 = *v57;
          mInstance = System_Collections_Generic_List_object___get_Item(
                        v54,
                        1,
                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
          if ( !mInstance || !v69 )
            goto LABEL_63;
          if ( *(_DWORD *)(v69 + 24) > 1u )
          {
            *(_DWORD *)(v69 + 36) = *((_DWORD *)mInstance + 5);
LABEL_58:
            v70 = *v47;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5513/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v72 = *(unsigned __int8 *)(v30 + 48);
            v73 = v71;
            v74 = (ResetSelectDialog_ClickDelegate_o *)sub_1B4D1DC(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v74,
              (Il2CppObject *)v30,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v75);
            if ( v70 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v70, v73, v64, v55, v67, v72 != 0, v74, v76);
              return;
            }
LABEL_63:
            sub_1B4D1EC(mInstance, v32);
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5511/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v66 = *v57;
        v67 = v65;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v54,
                      0,
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v66 )
          goto LABEL_63;
        if ( *(_DWORD *)(v66 + 24) )
        {
          *(_DWORD *)(v66 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_58;
        }
      }
      sub_1B4D1F4(mInstance, v32);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BA5C0 & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId);
    byte_49BA5C0 = 1;
  }
  v7 = sub_1B4D1DC(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)endAction, v8, v9);
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

  if ( (byte_49BA5BF & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49BA5BF = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_1B4D1EC(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728(mono, v9, 0LL);
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

  if ( (byte_49BA5BE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, *(_QWORD *)&warId);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v10);
    sub_1B4CF90(&NetworkManager_TypeInfo, v11);
    byte_49BA5BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
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
                      (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
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
    sub_1B4D1EC(Master_object, v13);
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

  if ( (byte_49BA5C1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v2);
    byte_49BA5C1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7F6F )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    byte_49B7F6F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_49B8112 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49B8112 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_49B8113 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49B8113 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_49B8114 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49B8114 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_49B5B1A )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49B5B1A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_49B8106 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v4);
    byte_49B8106 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_49B8107 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49B8107 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_49B83E9 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49B83E9 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v7);
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

  if ( (byte_49BA5B9 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v3);
    byte_49BA5B9 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
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
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v6);
      byte_49B5933 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventBgTexture->klass;
    if ( !klass || (v7 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1B4D1EC(v7, v6);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_199C6C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199C680;
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
  if ( (byte_49BA5C3 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&resetIdx);
    byte_49BA5C3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  void *clip; // x0
  struct System_Action_o *endAction; // x1
  const MethodInfo *v33; // x2
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v38; // x21
  DataLostResetManager_c *v39; // x0
  Il2CppObject *Object_object__49169892; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v45; // x8
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct DataLostResetManager___c__DisplayClass11_0_o *v49; // x8
  Il2CppObject *Component_object; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
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
  const MethodInfo *v69; // x3
  UnityEngine_WaitWhile_o *v70; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct DataLostResetManager___c__DisplayClass11_0_o *v74; // x8
  UnityEngine_Object_o *v75; // x20
  UnityEngine_Object_o *v76; // x21
  System_String_o *name; // x0
  System_String_o *v78; // x0
  UnityEngine_WaitForSeconds_o *v79; // x20
  Il2CppObject **v80; // x19
  int32_t v81; // w2
  const MethodInfo *v82; // x3

  if ( (byte_49BA5CD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, v3);
    sub_1B4CF90(&AssetManager_TypeInfo, v4);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v5);
    sub_1B4CF90(&System_Func_bool__TypeInfo, v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v8);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B4CF90(&SoundManager_TypeInfo, v13);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v14);
    sub_1B4CF90(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v15);
    sub_1B4CF90(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v16);
    sub_1B4CF90(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v17);
    sub_1B4CF90(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v18);
    sub_1B4CF90(&DataLostResetManager___c_TypeInfo, v19);
    sub_1B4CF90(&UnityEngine_WaitForSeconds_TypeInfo, v20);
    sub_1B4CF90(&UnityEngine_WaitWhile_TypeInfo, v21);
    sub_1B4CF90(&StringLiteral_1/*""*/, v22);
    byte_49BA5CD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v57 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1B4CFA8(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v58 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v57, v57[4]);
      OverwriteAssetSoundName__PlaySe(v58, this->fields._whiteOutSe_5__3, 0, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v62 = (CommonUI_o *)Instance;
    v63 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v63,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v62 )
      goto LABEL_70;
    CommonUI__maskFadeout(v62, 2, whiteOutTime_5__2, v63, 0LL);
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
      _9__11_0 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__11_0, v66, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0LL);
      static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = _9__11_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v68, v69);
    }
    v70 = (UnityEngine_WaitWhile_o *)sub_1B4D1DC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v70, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v70;
    p__2__current = &this->fields.__2__current;
    sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, (int32_t)v70, v72, v73);
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
  v24 = (Il2CppObject *)sub_1B4D1DC(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v24, 0LL);
  this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v24;
  p__8__1 = &this->fields.__8__1;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v24, v26, v27);
  clip = this->fields.__8__1;
  if ( !clip )
    goto LABEL_70;
  endAction = this->fields.endAction;
  *((_QWORD *)clip + 3) = endAction;
  sub_1B4CF34((CGThumbnailListItem_o *)((char *)clip + 24), (int32_t)endAction, v29, v30);
  eventId = this->fields.eventId;
  warId = this->fields.warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v33);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v38 = AssetStorage;
    v39 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v39 = DataLostResetManager_TypeInfo;
    }
    Object_object__49169892 = AssetData__GetObject_object__49169892(
                                v38,
                                v39->static_fields->PREFAB_EFFECT_NAME,
                                (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49169892, 0LL, 0LL) )
    {
      v41 = *p__8__1;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clip = UnityEngine_Object__Instantiate_object_(
               Object_object__49169892,
               (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v41 )
      {
        v41->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
        sub_1B4CF34((CGThumbnailListItem_o *)&v41->fields, (int32_t)clip, v42, v43);
        if ( *p__8__1 )
        {
          gameOverEffect = (*p__8__1)->fields.gameOverEffect;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v28);
            byte_49B5933 = 1;
          }
          clip = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            clip = TerminalSceneComponent_TypeInfo;
          }
          v45 = **((_QWORD **)clip + 23);
          if ( v45 )
          {
            GameObjectExtensions__SafeSetParent_34075504(gameOverEffect, *(UnityEngine_GameObject_o **)(v45 + 336), 0LL);
            this->fields._whiteOutTime_5__2 = 1.5;
            v46 = (int)StringLiteral_1/*""*/;
            this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._whiteOutSe_5__3, v46, v47, v48);
            v49 = this->fields.__8__1;
            if ( v49 )
            {
              clip = v49->fields.gameOverEffect;
              if ( clip )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)clip,
                                     (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)clip & 1) != 0 )
                {
                  if ( !Component_object )
                    goto LABEL_70;
                  v53 = *((float *)&Component_object[2].klass + 1);
                  v54 = *(float *)&Component_object[2].klass;
                  this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                  klass = (struct System_String_o *)Component_object[3].klass;
                  this->fields._whiteOutSe_5__3 = klass;
                  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._whiteOutSe_5__3, (int32_t)klass, v51, v52);
                }
                else
                {
                  v54 = 1.5;
                  v53 = 6.5;
                }
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__fadeoutBgm(v54, 0LL);
                if ( *p__8__1 )
                {
                  clip = (*p__8__1)->fields.gameOverEffect;
                  if ( clip )
                  {
                    clip = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)clip,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    v74 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v75 = (UnityEngine_Object_o *)clip;
                      clip = v74->fields.gameOverEffect;
                      if ( clip )
                      {
                        v76 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)clip,
                                                        (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        clip = (void *)UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
                        if ( ((unsigned __int8)clip & 1) != 0 )
                        {
                          if ( v75 )
                          {
                            clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v75, 0LL);
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v75, 0LL);
                              if ( clip )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                UnityEngine_Animation__Play_68548868((UnityEngine_Animation_o *)v75, name, 0LL);
LABEL_68:
                                v79 = (UnityEngine_WaitForSeconds_o *)sub_1B4D1DC(UnityEngine_WaitForSeconds_TypeInfo);
                                UnityEngine_WaitForSeconds___ctor(v79, v53, 0LL);
                                this->fields.__2__current = (Il2CppObject *)v79;
                                v80 = &this->fields.__2__current;
                                sub_1B4CF34((CGThumbnailListItem_o *)v80, (int32_t)v79, v81, v82);
                                LOBYTE(AssetStorage) = 1;
                                *((_DWORD *)v80 - 2) = 1;
                                return (char)AssetStorage;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          clip = (void *)UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
                          if ( ((unsigned __int8)clip & 1) == 0 )
                            goto LABEL_68;
                          if ( v76 )
                          {
                            clip = v76[5].klass;
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = v76[5].klass;
                              if ( clip )
                              {
                                v78 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                SimpleAnimation__Play_64044448((SimpleAnimation_o *)v76, v78, 0LL);
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
      sub_1B4D1EC(clip, v28);
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BA5C4 & 1) == 0 )
  {
    sub_1B4CF90(&DataLostResetManager___c_TypeInfo, v1);
    byte_49BA5C4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)DataLostResetManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BA5C5 & 1) == 0 )
  {
    sub_1B4CF90(&CTouch_TypeInfo, method);
    byte_49BA5C5 = 1;
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

  if ( (byte_49BA5C6 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BA5C6 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(gameOverEffect, 0LL);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x6
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v15; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_49BA5C7 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_1B4CF90(
                                                            &Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
                                                            v6);
    byte_49BA5C7 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_38991980(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
        sub_1B4D1F4(this, *(_QWORD *)&selectNo);
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v15 = idx->m_Items[selectNo];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v15, isNoCancel, resetDelegate, v11);
      return;
    }
LABEL_15:
    sub_1B4D1EC(this, *(_QWORD *)&selectNo);
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

  if ( (byte_49BA5C8 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BA5C8 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(selectDialogObj, 0LL);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v17; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v20; // x19
  struct DataLostResetManager_ClickDelegate_o *v21; // x8

  v4 = this;
  if ( (byte_49BA5C9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_1B4CF90(
                                                            &Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
                                                            v6);
    byte_49BA5C9 = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !confirmDialog )
    sub_1B4D1EC(this, isDecide);
  ResetConfirmDialog__Close_38992588(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v4->fields.resetIdx;
      m_target = resetDelegate->fields.m_target;
      original_method_info = resetDelegate->fields.original_method_info;
      v17 = *(_QWORD *)&resetDelegate->fields.extra_arg;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
        original_method_info,
        resetIdx,
        v17);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v20 = v4->fields.resetDelegate;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v20, v12);
  }
  else
  {
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v11);
    v21 = v4->fields.resetDelegate;
    if ( v21 )
    {
      m_target = v21->fields.m_target;
      original_method_info = v21->fields.original_method_info;
      v17 = *(_QWORD *)&v21->fields.extra_arg;
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

  if ( (byte_49BA5CA & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BA5CA = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(confirmDialogObj, 0LL);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_49BA5CB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_1B4CF90(
                                                            &Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
                                                            v4);
    byte_49BA5CB = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !selectDialog )
    sub_1B4D1EC(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_38991980(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_49BA5CC & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BA5CC = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(selectDialogObj, 0LL);
}