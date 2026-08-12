void DataLostResetManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct DataLostResetManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596FC03 & 1) == 0 )
  {
    sub_2213A60(&DataLostResetManager_TypeInfo);
    sub_2213A60(&StringLiteral_11858/*"ResetConfirmDialog"*/);
    sub_2213A60(&StringLiteral_17976/*"bit_raidreset"*/);
    sub_2213A60(&StringLiteral_11861/*"ResetSelectDialog"*/);
    byte_596FC03 = 1;
  }
  v7 = StringLiteral_17976/*"bit_raidreset"*/;
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17976/*"bit_raidreset"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DataLostResetManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_11861/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11861/*"ResetSelectDialog"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_11858/*"ResetConfirmDialog"*/;
  v17 = DataLostResetManager_TypeInfo->static_fields;
  v17->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11858/*"ResetConfirmDialog"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->PREFAB_CONFIRM_DIALOG_NAME, v16, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_596FBFB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    sub_2213A60(&StringLiteral_6539/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_596FBFB = 1;
  }
  if ( eventId )
  {
    v11 = eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
    return System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v5, 0);
  }
  else
  {
    v10 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v10);
    v9 = warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
    return System_String__Format_75697880((System_String_o *)StringLiteral_6539/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  __int64 v21; // x1
  AssetData_o *v22; // x23
  DataLostResetManager_c *v23; // x0
  __int64 v24; // x1
  Il2CppObject *Object_object__58532980; // x23
  __int64 v26; // x1
  Il2CppObject *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o **v35; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v43; // x25
  __int64 v44; // x1
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  ResetSelectDialog_o *v47; // x19
  System_String_o *v48; // x20
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  ResetSelectDialog_ClickDelegate_o *v51; // x24
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x5
  UnityEngine_Object_o *v54; // x19

  if ( (byte_596FBFE & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&DataLostResetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__);
    sub_2213A60(&DataLostResetManager___c__DisplayClass8_0_TypeInfo);
    sub_2213A60(&StringLiteral_5785/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/);
    sub_2213A60(&StringLiteral_5787/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/);
    sub_2213A60(&StringLiteral_5786/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/);
    byte_596FBFE = 1;
  }
  v7 = sub_2213CCC(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_40;
  *(_QWORD *)(v7 + 32) = closeAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)closeAction, v10, v11, v12, v13, v14, v15);
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v16);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v17);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v22 = AssetStorage;
    v23 = DataLostResetManager_TypeInfo;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v21);
      v23 = DataLostResetManager_TypeInfo;
    }
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                v22,
                                v23->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      v27 = UnityEngine_Object__Instantiate_object_(
              Object_object__58532980,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v7 + 24) = v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v7 + 16) = Component_object;
      v35 = (UnityEngine_GameObject_o **)(v7 + 16);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v7 + 16),
        (int32_t)Component_object,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v9);
      Instance = *v35;
      if ( !*v35 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = *v35;
      if ( !*v35 )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
      v43 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_5969AE5 )
      {
        Instance = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v43 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(
             (EventDataLostBattleMaster_o *)Instance,
             warId,
             eventId,
             0) != -1 )
      {
        if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v45);
        DataLostResetManager__SetTitleInfoTouchEnable(0, v45);
        v47 = (ResetSelectDialog_o *)*v35;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5786/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5785/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0);
        v51 = (ResetSelectDialog_ClickDelegate_o *)sub_2213CCC(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v51,
          (Il2CppObject *)v7,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v52);
        if ( v47 )
        {
          ResetSelectDialog__OpenSingleButton(v47, v48, v49, v50, v51, v53);
          return;
        }
LABEL_40:
        sub_2213CDC(Instance, v9);
      }
      v54 = *(UnityEngine_Object_o **)(v7 + 24);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
      UnityEngine_Object__Destroy_83459800(v54, 0);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  DataLostResetManager_c *v23; // x0
  int v24; // w8
  __int64 v25; // x1
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v28; // x1
  AssetData_o *v29; // x20
  DataLostResetManager_c *v30; // x0
  __int64 v31; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v33; // x1
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v42; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  TerminalSceneComponent_c *v49; // x0
  System_String_o *v50; // x0
  __int64 v51; // x1
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  bool v57; // w8
  BaseDialog_o *v58; // x21
  System_String_o *v59; // x20
  System_String_o *v60; // x22
  int v61; // w24
  ResetConfirmDialog_ClickDelegate_o *v62; // x23
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x5
  int32_t v65; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v66; // 0:x2.16

  v65 = selectNo;
  if ( (byte_596FBFD & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ResetConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&DataLostResetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__);
    sub_2213A60(&DataLostResetManager___c__DisplayClass7_0_TypeInfo);
    sub_2213A60(&StringLiteral_5793/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_5792/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FBFD = 1;
  }
  v12 = sub_2213CCC(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_35;
  *(_QWORD *)(v12 + 32) = resetDelegate;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)resetDelegate, v15, v16, v17, v18, v19, v20);
  v23 = DataLostResetManager_TypeInfo;
  *(_DWORD *)(v12 + 40) = resetIdx;
  *(_BYTE *)(v12 + 44) = isBackReturn;
  v24 = *(&v23->_2.cctor_finished + 1);
  *(_DWORD *)(v12 + 48) = eventId;
  *(_DWORD *)(v12 + 52) = warId;
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(v23, v21);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v22);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v29 = AssetStorage;
    v30 = DataLostResetManager_TypeInfo;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v28);
      v30 = DataLostResetManager_TypeInfo;
    }
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                v29,
                                v30->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      v34 = UnityEngine_Object__Instantiate_object_(
              Object_object__58532980,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v12 + 24) = v34;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 24), (int32_t)v34, v35, v36, v37, v38, v39, v40);
      mInstance = *(UnityEngine_GameObject_o **)(v12 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v12 + 16) = Component_object;
        v42 = (BaseDialog_o **)(v12 + 16);
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v12 + 16),
          (int32_t)Component_object,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        mInstance = *(UnityEngine_GameObject_o **)(v12 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v14);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          v49 = TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
            v49 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v49->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v66.fields.hasValue = 0;
            *(_QWORD *)&v66.fields.value.fields.y = 0;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v42, v66, 0);
            v50 = System_Int32__ToString((int32_t)&v65, 0);
            v52 = System_String__Concat_75651716((System_String_o *)StringLiteral_5792/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v50, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
            v53 = LocalizationManager__Get(v52, 0);
            v54 = System_Int32__ToString((int32_t)&v65, 0);
            v55 = System_String__Concat_75651716((System_String_o *)StringLiteral_5792/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v54, 0);
            v57 = System_String__op_Equality(v53, v55, 0);
            v58 = *v42;
            v59 = v57 ? (System_String_o *)StringLiteral_1/*""*/ : v53;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5793/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0);
            v61 = *(unsigned __int8 *)(v12 + 44);
            v62 = (ResetConfirmDialog_ClickDelegate_o *)sub_2213CCC(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v62,
              (Il2CppObject *)v12,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v63);
            if ( v58 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v58, v60, v59, v61 != 0, v62, v64);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_2213CDC(mInstance, v14);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  int32_t v21; // w21
  __int64 v22; // x1
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v25; // x1
  AssetData_o *v26; // x20
  DataLostResetManager_c *v27; // x0
  __int64 v28; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v39; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  TerminalSceneComponent_c *v46; // x0
  __int64 v47; // x1
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v49; // x1
  int32_t v50; // w21
  __int64 v51; // x1
  System_Collections_Generic_List_object__o *v52; // x22
  System_String_o *v53; // x21
  __int64 v54; // x0
  __int64 *v55; // x24
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  __int64 v64; // x1
  System_String_o *v65; // x23
  System_String_o *v66; // x25
  __int64 v67; // x1
  System_String_o *v68; // x23
  System_String_o *v69; // x25
  __int64 v70; // x24
  __int64 v71; // x28
  const MethodInfo_4483994 *v72; // x2
  __int64 v73; // x24
  BaseDialog_o *v74; // x20
  System_String_o *v75; // x22
  int v76; // w26
  ResetSelectDialog_ClickDelegate_o *v77; // x24
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x7
  int v80; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v81; // 0:x2.16

  if ( (byte_596FBFC & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&DataLostResetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__);
    sub_2213A60(&DataLostResetManager___c__DisplayClass6_0_TypeInfo);
    sub_2213A60(&StringLiteral_16929/*"_NO_CANCEL"*/);
    sub_2213A60(&StringLiteral_5795/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/);
    sub_2213A60(&StringLiteral_5796/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/);
    sub_2213A60(&StringLiteral_5797/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FBFC = 1;
  }
  v80 = 0;
  v9 = sub_2213CCC(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_64;
  *(_QWORD *)(v9 + 56) = resetDelegate;
  *(_DWORD *)(v9 + 32) = eventId;
  *(_DWORD *)(v9 + 36) = warId;
  *(_BYTE *)(v9 + 48) = isNoCancel;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)resetDelegate, v12, v13, v14, v15, v16, v17);
  v20 = *(_DWORD *)(v9 + 32);
  v21 = *(_DWORD *)(v9 + 36);
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v18);
  EventAssetName = DataLostResetManager__GetEventAssetName(v20, v21, v19);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v26 = AssetStorage;
    v27 = DataLostResetManager_TypeInfo;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v25);
      v27 = DataLostResetManager_TypeInfo;
    }
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                v26,
                                v27->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      v31 = UnityEngine_Object__Instantiate_object_(
              Object_object__58532980,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v9 + 24) = v31;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      mInstance = *(void **)(v9 + 24);
      if ( !mInstance )
        goto LABEL_64;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v9 + 16) = Component_object;
      v39 = (BaseDialog_o **)(v9 + 16);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v9 + 16),
        (int32_t)Component_object,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      mInstance = *(void **)(v9 + 16);
      if ( !mInstance )
        goto LABEL_64;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v11);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v46 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
        v46 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v46->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_64;
      *(_QWORD *)&v81.fields.hasValue = 0;
      *(_QWORD *)&v81.fields.value.fields.y = 0;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v39, v81, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_64;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v9 + 36),
                                *(_DWORD *)(v9 + 32),
                                0);
      if ( EventDataLostBattleId == -1 )
        return;
      v50 = EventDataLostBattleId;
      if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v49);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v49);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_64;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v50,
                    *(_DWORD *)(v9 + 32),
                    0);
      if ( !mInstance )
        goto LABEL_64;
      v52 = (System_Collections_Generic_List_object__o *)mInstance;
      v53 = (System_String_o *)StringLiteral_1/*""*/;
      v80 = *((_DWORD *)mInstance + 6);
      v54 = sub_2213B20(int___TypeInfo, 2);
      *(_QWORD *)(v9 + 40) = v54;
      v55 = (__int64 *)(v9 + 40);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), v54, v56, v57, v58, v59, v60, v61);
      v62 = System_Int32__ToString((int32_t)&v80, 0);
      v63 = System_String__Concat_75651716((System_String_o *)StringLiteral_5796/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v62, 0);
      v65 = v63;
      if ( v80 >= 2 && *(_BYTE *)(v9 + 48) )
        v65 = System_String__Concat_75651716(v63, (System_String_o *)StringLiteral_16929/*"_NO_CANCEL"*/, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
      v66 = LocalizationManager__Get(v65, 0);
      if ( System_String__op_Equality(v66, v65, 0) )
        v68 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v68 = v66;
      if ( v80 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v52,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_64;
        v53 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v52,
                      1,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_64;
        v69 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v71 = *v55;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v52,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v71 )
          goto LABEL_64;
        if ( *(_DWORD *)(v71 + 24) )
        {
          v72 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__;
          v73 = *v55;
          *(_DWORD *)(v71 + 32) = *((_DWORD *)mInstance + 5);
          mInstance = System_Collections_Generic_List_object___get_Item(v52, 1, v72);
          if ( !mInstance || !v73 )
            goto LABEL_64;
          if ( (*(_DWORD *)(v73 + 24) & 0xFFFFFFFE) != 0 )
          {
            *(_DWORD *)(v73 + 36) = *((_DWORD *)mInstance + 5);
LABEL_59:
            v74 = *v39;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
            v75 = LocalizationManager__Get((System_String_o *)StringLiteral_5797/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0);
            v76 = *(unsigned __int8 *)(v9 + 48);
            v77 = (ResetSelectDialog_ClickDelegate_o *)sub_2213CCC(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v77,
              (Il2CppObject *)v9,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v78);
            if ( v74 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v74, v75, v68, v53, v69, v76 != 0, v77, v79);
              return;
            }
LABEL_64:
            sub_2213CDC(mInstance, v11);
          }
        }
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67);
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_5795/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0);
        v70 = *v55;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v52,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v70 )
          goto LABEL_64;
        if ( *(_DWORD *)(v70 + 24) )
        {
          *(_DWORD *)(v70 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_59;
        }
      }
      sub_2213CE4(mInstance);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596FC01 & 1) == 0 )
  {
    sub_2213A60(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
    byte_596FC01 = 1;
  }
  v7 = sub_2213CCC(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endAction, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void DataLostResetManager__PlayResetEffect(
        UnityEngine_MonoBehaviour_o *mono,
        int32_t eventId,
        int32_t warId,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_596FC00 & 1) == 0 )
  {
    sub_2213A60(&DataLostResetManager_TypeInfo);
    byte_596FC00 = 1;
  }
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_2213CDC(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(mono, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  int32_t v13; // w21

  if ( (byte_596FBFF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596FBFF = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0);
  if ( EventDataLostBattleId != -1 )
  {
    v13 = EventDataLostBattleId;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v13,
        resetIdx,
        0);
      return;
    }
LABEL_12:
    sub_2213CDC(Master_object, v10);
  }
}


void DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  int v9; // w9
  int v10; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v12; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1

  if ( (byte_596FC02 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596FC02 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_596D614 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D614 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v3 = (unsigned __int8)byte_596D8C3;
  v2->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !v3 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_596D8C3 = 1;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v4 = (unsigned __int8)byte_596D8C4;
  v2->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !v4 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_596D8C4 = 1;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596D8C5;
  v2->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !v5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_596D8C5 = 1;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v6 = (unsigned __int8)byte_596ABDE;
  v2->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !v6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_596ABDE = 1;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0);
  if ( !byte_596D8B6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8B6 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = (unsigned __int8)byte_596D8B7;
  v8->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !v9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D8B7 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = (unsigned __int8)byte_596DB42;
  v8->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596DB42 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  v12 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v12);
  if ( !Instance )
    sub_2213CDC(0, v14);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0, 0, 0);
}


void DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_596FBFA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596FBFA = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_2213CDC(genericContainerHandle, v5);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, flag, 0);
  }
}


void DataLostResetManager_ClickDelegate___ctor(
        DataLostResetManager_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200D150;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200D108;
}


System_IAsyncResult_o *DataLostResetManager_ClickDelegate__BeginInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        int32_t resetIdx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = resetIdx;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  void *clip; // x0
  struct System_Action_o *endAction; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  int32_t eventId; // w21
  int32_t warId; // w22
  __int64 v25; // x1
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v28; // x1
  AssetData_o *v29; // x21
  DataLostResetManager_c *v30; // x0
  __int64 v31; // x1
  Il2CppObject *Object_object__58532980; // x21
  __int64 v33; // x1
  struct DataLostResetManager___c__DisplayClass11_0_o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v42; // x8
  int32_t v43; // w1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct DataLostResetManager___c__DisplayClass11_0_o *v50; // x8
  Il2CppObject *Component_object; // x22
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  float v58; // s8
  struct System_String_o *klass; // x1
  float v60; // s9
  DataLostResetManager___c_c *v61; // x0
  struct DataLostResetManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v64; // x21
  struct DataLostResetManager___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  UnityEngine_WaitWhile_o *v72; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v86; // x19
  System_Action_o *v87; // x20
  struct DataLostResetManager___c__DisplayClass11_0_o *v88; // x8
  UnityEngine_Object_o *v89; // x20
  __int64 v90; // x1
  UnityEngine_Object_o *v91; // x21
  System_String_o *name; // x0
  System_String_o *v93; // x0
  UnityEngine_WaitForSeconds_o *v94; // x20
  Il2CppObject **v95; // x19
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7

  if ( (byte_596FC0D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&DataLostResetManager_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
    sub_2213A60(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__);
    sub_2213A60(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__);
    sub_2213A60(&DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&DataLostResetManager___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FC0D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0) )
    {
      v81 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v81 = (_QWORD *)sub_2213A78(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v82 = (System_Reflection_MethodBase_o *)sub_2213A44(v81, v81[4]);
      OverwriteAssetSoundName__PlaySe(v82, this->fields._whiteOutSe_5__3, 0, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v86 = (CommonUI_o *)Instance;
    v87 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v87, _8__1, Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, 0);
    if ( !v86 )
      goto LABEL_70;
    CommonUI__maskFadeout(v86, 2, whiteOutTime_5__2, v87, 0);
    goto LABEL_46;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v61 = DataLostResetManager___c_TypeInfo;
    if ( !*(&DataLostResetManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo, method);
      v61 = DataLostResetManager___c_TypeInfo;
    }
    static_fields = v61->static_fields;
    _9__11_0 = static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*(&v61->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v61, method);
        static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__11_0, v64, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0);
      v65 = DataLostResetManager___c_TypeInfo->static_fields;
      v65->__9__11_0 = _9__11_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->__9__11_0, (int32_t)_9__11_0, v66, v67, v68, v69, v70, v71);
    }
    v72 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v72, _9__11_0, 0);
    this->fields.__2__current = (Il2CppObject *)v72;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v72, v74, v75, v76, v77, v78, v79);
    *((_DWORD *)p__2__current - 2) = 2;
    LOBYTE(AssetStorage) = 1;
  }
  else
  {
    if ( _1__state )
      goto LABEL_46;
    this->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_2213CCC(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor(v4, 0);
    this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v4;
    p__8__1 = &this->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    clip = this->fields.__8__1;
    if ( !clip )
      goto LABEL_70;
    endAction = this->fields.endAction;
    *((_QWORD *)clip + 3) = endAction;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)clip + 24),
      (int32_t)endAction,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    eventId = this->fields.eventId;
    warId = this->fields.warId;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v21);
    EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v22);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
    AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
    if ( AssetStorage )
    {
      v29 = AssetStorage;
      v30 = DataLostResetManager_TypeInfo;
      if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v28);
        v30 = DataLostResetManager_TypeInfo;
      }
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  v29,
                                  v30->static_fields->PREFAB_EFFECT_NAME,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
      {
        v34 = *p__8__1;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
        clip = UnityEngine_Object__Instantiate_object_(
                 Object_object__58532980,
                 (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v34 )
        {
          v34->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->fields, (int32_t)clip, v35, v36, v37, v38, v39, v40);
          if ( *p__8__1 )
          {
            gameOverEffect = (*p__8__1)->fields.gameOverEffect;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v12);
            if ( !byte_596A090 )
            {
              sub_2213A60(&TerminalSceneComponent_TypeInfo);
              byte_596A090 = 1;
            }
            clip = TerminalSceneComponent_TypeInfo;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v12);
              clip = TerminalSceneComponent_TypeInfo;
            }
            v42 = **((_QWORD **)clip + 23);
            if ( v42 )
            {
              GameObjectExtensions__SafeSetParent_42897308(gameOverEffect, *(UnityEngine_GameObject_o **)(v42 + 336), 0);
              v43 = (int)StringLiteral_1/*""*/;
              this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
              this->fields._whiteOutTime_5__2 = 1.5;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields._whiteOutSe_5__3,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
              v50 = this->fields.__8__1;
              if ( v50 )
              {
                clip = v50->fields.gameOverEffect;
                if ( clip )
                {
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)clip,
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                  clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                  if ( ((unsigned __int8)clip & 1) != 0 )
                  {
                    if ( !Component_object )
                      goto LABEL_70;
                    v58 = *((float *)&Component_object[2].klass + 1);
                    klass = (struct System_String_o *)Component_object[3].klass;
                    v60 = *(float *)&Component_object[2].klass;
                    this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                    this->fields._whiteOutSe_5__3 = klass;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields._whiteOutSe_5__3,
                      (int32_t)klass,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57);
                  }
                  else
                  {
                    v60 = 1.5;
                    v58 = 6.5;
                  }
                  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12);
                  SoundManager__fadeoutBgm(v60, 0);
                  if ( *p__8__1 )
                  {
                    clip = (*p__8__1)->fields.gameOverEffect;
                    if ( clip )
                    {
                      clip = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)clip,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                      v88 = *p__8__1;
                      if ( *p__8__1 )
                      {
                        v89 = (UnityEngine_Object_o *)clip;
                        clip = v88->fields.gameOverEffect;
                        if ( clip )
                        {
                          v91 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)clip,
                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
                          clip = (void *)UnityEngine_Object__op_Inequality(v89, 0, 0);
                          if ( ((unsigned __int8)clip & 1) != 0 )
                          {
                            if ( v89 )
                            {
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v89, 0);
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0);
                                clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v89, 0);
                                if ( clip )
                                {
                                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
                                  UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v89, name, 0);
LABEL_69:
                                  v94 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
                                  UnityEngine_WaitForSeconds___ctor(v94, v58, 0);
                                  this->fields.__2__current = (Il2CppObject *)v94;
                                  v95 = &this->fields.__2__current;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)v95,
                                    (int32_t)v94,
                                    v96,
                                    v97,
                                    v98,
                                    v99,
                                    v100,
                                    v101);
                                  *((_DWORD *)v95 - 2) = 1;
                                  LOBYTE(AssetStorage) = 1;
                                  return (char)AssetStorage;
                                }
                              }
                            }
                          }
                          else
                          {
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
                            clip = (void *)UnityEngine_Object__op_Inequality(v91, 0, 0);
                            if ( ((unsigned __int8)clip & 1) == 0 )
                              goto LABEL_69;
                            if ( v91 )
                            {
                              clip = v91[5].klass;
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0);
                                clip = v91[5].klass;
                                if ( clip )
                                {
                                  v93 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
                                  SimpleAnimation__Play_78552168((SimpleAnimation_o *)v91, v93, 0);
                                  goto LABEL_69;
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
        sub_2213CDC(clip, v12);
      }
LABEL_46:
      LOBYTE(AssetStorage) = 0;
    }
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FC04 & 1) == 0 )
  {
    sub_2213A60(&DataLostResetManager___c_TypeInfo);
    byte_596FC04 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DataLostResetManager___c_TypeInfo->static_fields,
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
  if ( (byte_596FC05 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    byte_596FC05 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
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

  if ( (byte_596FC06 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC06 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(gameOverEffect, 0);
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
  System_Action_o *_9__1; // x23
  ResetSelectDialog_o *selectDialog; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x6
  struct System_Int32_array *idx; // x8
  _BOOL4 isNoCancel; // w24
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v18; // w23
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_596FC07 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_2213A60(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__);
    byte_596FC07 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_47917224(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( (unsigned int)(selectNo - 1) >= LODWORD(idx->max_length) )
        sub_2213CE4(this);
      isNoCancel = v4->fields.isNoCancel;
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v18 = idx->m_Items[selectNo - 1];
      resetDelegate = v4->fields.resetDelegate;
      if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&selectNo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v18, isNoCancel, resetDelegate, v13);
      return;
    }
LABEL_15:
    sub_2213CDC(this, *(_QWORD *)&selectNo);
  }
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&selectNo);
  DataLostResetManager__SetTitleInfoTouchEnable(1, *(const MethodInfo **)&selectNo);
}


void DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_596FC08 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC08 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(selectDialogObj, 0);
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
  System_Action_o *_9__1; // x23
  ResetConfirmDialog_o *confirmDialog; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  intptr_t method_code; // x0
  intptr_t v18; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v21; // x19

  v4 = this;
  if ( (byte_596FC09 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_2213A60(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__);
    byte_596FC09 = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !confirmDialog )
    sub_2213CDC(this, isDecide);
  ResetConfirmDialog__Close_47917828(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v4->fields.resetIdx;
      method_code = resetDelegate->fields.method_code;
      v18 = resetDelegate->fields.method;
LABEL_17:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))resetDelegate->fields.invoke_impl)(method_code, resetIdx, v18);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v21 = v4->fields.resetDelegate;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v13);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v21, v14);
  }
  else
  {
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v13);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v13);
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      method_code = resetDelegate->fields.method_code;
      v18 = resetDelegate->fields.method;
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

  if ( (byte_596FC0A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC0A = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(confirmDialogObj, 0);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_596FC0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_2213A60(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__);
    byte_596FC0B = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !selectDialog )
    sub_2213CDC(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_47917224(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0);
}


void DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_596FC0C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FC0C = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(selectDialogObj, 0);
}