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

  if ( (byte_5937A0C & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11838/*"ResetConfirmDialog"*/);
    sub_21FFC50(&StringLiteral_17938/*"bit_raidreset"*/);
    sub_21FFC50(&StringLiteral_11841/*"ResetSelectDialog"*/);
    byte_5937A0C = 1;
  }
  v7 = StringLiteral_17938/*"bit_raidreset"*/;
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17938/*"bit_raidreset"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DataLostResetManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_11841/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11841/*"ResetSelectDialog"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_11838/*"ResetConfirmDialog"*/;
  v17 = DataLostResetManager_TypeInfo->static_fields;
  v17->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11838/*"ResetConfirmDialog"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->PREFAB_CONFIRM_DIALOG_NAME, v16, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_5937A04 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6526/*"EventUI/Prefabs/{0}"*/);
    sub_21FFC50(&StringLiteral_6527/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_5937A04 = 1;
  }
  if ( eventId )
  {
    v11 = eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11);
    return System_String__Format((System_String_o *)StringLiteral_6526/*"EventUI/Prefabs/{0}"*/, v5, 0);
  }
  else
  {
    v10 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
    v9 = warId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9);
    return System_String__Format_75484576((System_String_o *)StringLiteral_6527/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8, 0);
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
  __int64 v19; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  AssetData_o *v24; // x23
  DataLostResetManager_c *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Object_object__58323140; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o **v39; // x24
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v47; // x25
  __int64 v48; // x1
  __int64 v49; // x2
  const MethodInfo *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  ResetSelectDialog_o *v54; // x19
  System_String_o *v55; // x20
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  ResetSelectDialog_ClickDelegate_o *v58; // x24
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x5
  UnityEngine_Object_o *v61; // x19

  if ( (byte_5937A07 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__);
    sub_21FFC50(&DataLostResetManager___c__DisplayClass8_0_TypeInfo);
    sub_21FFC50(&StringLiteral_5773/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/);
    sub_21FFC50(&StringLiteral_5775/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/);
    sub_21FFC50(&StringLiteral_5774/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/);
    byte_5937A07 = 1;
  }
  v7 = sub_21FFEBC(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_40;
  *(_QWORD *)(v7 + 32) = closeAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)closeAction, v10, v11, v12, v13, v14, v15);
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v16, v17);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v17);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18, v19);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v24 = AssetStorage;
    v25 = DataLostResetManager_TypeInfo;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v22, v23);
      v25 = DataLostResetManager_TypeInfo;
    }
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                v24,
                                v25->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
      v31 = UnityEngine_Object__Instantiate_object_(
              Object_object__58323140,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v7 + 24) = v31;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v7 + 16) = Component_object;
      v39 = (UnityEngine_GameObject_o **)(v7 + 16);
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v7 + 16),
        (int32_t)Component_object,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v9);
      Instance = *v39;
      if ( !*v39 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = *v39;
      if ( !*v39 )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
      v47 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_5931945 )
      {
        Instance = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      if ( !v47 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v47, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48, v49);
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(
             (EventDataLostBattleMaster_o *)Instance,
             warId,
             eventId,
             0) != -1 )
      {
        if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v50, v51);
        DataLostResetManager__SetTitleInfoTouchEnable(0, v50);
        v54 = (ResetSelectDialog_o *)*v39;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52, v53);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5775/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_5774/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5773/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0);
        v58 = (ResetSelectDialog_ClickDelegate_o *)sub_21FFEBC(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v58,
          (Il2CppObject *)v7,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v59);
        if ( v54 )
        {
          ResetSelectDialog__OpenSingleButton(v54, v55, v56, v57, v58, v60);
          return;
        }
LABEL_40:
        sub_21FFECC(Instance, v9);
      }
      v61 = *(UnityEngine_Object_o **)(v7 + 24);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
      UnityEngine_Object__Destroy_83246496(v61, 0);
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
  __int64 v26; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  AssetData_o *v31; // x20
  DataLostResetManager_c *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Object_object__58323140; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v46; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x2
  TerminalSceneComponent_c *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  bool v64; // w8
  BaseDialog_o *v65; // x21
  System_String_o *v66; // x20
  System_String_o *v67; // x22
  int v68; // w24
  ResetConfirmDialog_ClickDelegate_o *v69; // x23
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x5
  int32_t v72; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v73; // 0:x2.16

  v72 = selectNo;
  if ( (byte_5937A06 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&ResetConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__);
    sub_21FFC50(&DataLostResetManager___c__DisplayClass7_0_TypeInfo);
    sub_21FFC50(&StringLiteral_5781/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_5780/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A06 = 1;
  }
  v12 = sub_21FFEBC(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_35;
  *(_QWORD *)(v12 + 32) = resetDelegate;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)resetDelegate, v15, v16, v17, v18, v19, v20);
  v23 = DataLostResetManager_TypeInfo;
  *(_DWORD *)(v12 + 40) = resetIdx;
  *(_BYTE *)(v12 + 44) = isBackReturn;
  v24 = *(&v23->_2.cctor_finished + 1);
  *(_DWORD *)(v12 + 48) = eventId;
  *(_DWORD *)(v12 + 52) = warId;
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(v23, v21, v22);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v22);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25, v26);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v31 = AssetStorage;
    v32 = DataLostResetManager_TypeInfo;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v29, v30);
      v32 = DataLostResetManager_TypeInfo;
    }
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                v31,
                                v32->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
      v38 = UnityEngine_Object__Instantiate_object_(
              Object_object__58323140,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v12 + 24) = v38;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 24), (int32_t)v38, v39, v40, v41, v42, v43, v44);
      mInstance = *(UnityEngine_GameObject_o **)(v12 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v12 + 16) = Component_object;
        v46 = (BaseDialog_o **)(v12 + 16);
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v12 + 16),
          (int32_t)Component_object,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        mInstance = *(UnityEngine_GameObject_o **)(v12 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v14);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14, v53);
          if ( !byte_5931EF0 )
          {
            sub_21FFC50(&TerminalSceneComponent_TypeInfo);
            byte_5931EF0 = 1;
          }
          v54 = TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14, v53);
            v54 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v54->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v73.fields.hasValue = 0;
            *(_QWORD *)&v73.fields.value.fields.y = 0;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v46, v73, 0);
            v55 = System_Int32__ToString((int32_t)&v72, 0);
            v58 = System_String__Concat_75438412((System_String_o *)StringLiteral_5780/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v55, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
            v59 = LocalizationManager__Get(v58, 0);
            v60 = System_Int32__ToString((int32_t)&v72, 0);
            v61 = System_String__Concat_75438412((System_String_o *)StringLiteral_5780/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v60, 0);
            v64 = System_String__op_Equality(v59, v61, 0);
            v65 = *v46;
            v66 = v64 ? (System_String_o *)StringLiteral_1/*""*/ : v59;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0);
            v68 = *(unsigned __int8 *)(v12 + 44);
            v69 = (ResetConfirmDialog_ClickDelegate_o *)sub_21FFEBC(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v69,
              (Il2CppObject *)v12,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v70);
            if ( v65 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v65, v67, v66, v68 != 0, v69, v71);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_21FFECC(mInstance, v14);
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
  __int64 v23; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  AssetData_o *v28; // x20
  DataLostResetManager_c *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Object_object__58323140; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v43; // x20
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x2
  TerminalSceneComponent_c *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  int32_t v57; // w21
  __int64 v58; // x1
  __int64 v59; // x2
  System_Collections_Generic_List_object__o *v60; // x22
  System_String_o *v61; // x21
  __int64 v62; // x0
  __int64 *v63; // x24
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_String_o *v74; // x23
  System_String_o *v75; // x25
  __int64 v76; // x1
  __int64 v77; // x2
  System_String_o *v78; // x23
  System_String_o *v79; // x25
  __int64 v80; // x24
  __int64 v81; // x2
  __int64 v82; // x28
  const MethodInfo_444F85C *v83; // x2
  __int64 v84; // x24
  BaseDialog_o *v85; // x20
  System_String_o *v86; // x22
  int v87; // w26
  ResetSelectDialog_ClickDelegate_o *v88; // x24
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x7
  int v91; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v92; // 0:x2.16

  if ( (byte_5937A05 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__);
    sub_21FFC50(&DataLostResetManager___c__DisplayClass6_0_TypeInfo);
    sub_21FFC50(&StringLiteral_16894/*"_NO_CANCEL"*/);
    sub_21FFC50(&StringLiteral_5783/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/);
    sub_21FFC50(&StringLiteral_5784/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/);
    sub_21FFC50(&StringLiteral_5785/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A05 = 1;
  }
  v91 = 0;
  v9 = sub_21FFEBC(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_64;
  *(_QWORD *)(v9 + 56) = resetDelegate;
  *(_DWORD *)(v9 + 32) = eventId;
  *(_DWORD *)(v9 + 36) = warId;
  *(_BYTE *)(v9 + 48) = isNoCancel;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)resetDelegate, v12, v13, v14, v15, v16, v17);
  v20 = *(_DWORD *)(v9 + 32);
  v21 = *(_DWORD *)(v9 + 36);
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v18, v19);
  EventAssetName = DataLostResetManager__GetEventAssetName(v20, v21, v19);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22, v23);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
  if ( AssetStorage )
  {
    v28 = AssetStorage;
    v29 = DataLostResetManager_TypeInfo;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v26, v27);
      v29 = DataLostResetManager_TypeInfo;
    }
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                v28,
                                v29->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
      v35 = UnityEngine_Object__Instantiate_object_(
              Object_object__58323140,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v9 + 24) = v35;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v35, v36, v37, v38, v39, v40, v41);
      mInstance = *(void **)(v9 + 24);
      if ( !mInstance )
        goto LABEL_64;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v9 + 16) = Component_object;
      v43 = (BaseDialog_o **)(v9 + 16);
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v9 + 16),
        (int32_t)Component_object,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      mInstance = *(void **)(v9 + 16);
      if ( !mInstance )
        goto LABEL_64;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v11);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11, v50);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      v51 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11, v50);
        v51 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v51->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_64;
      *(_QWORD *)&v92.fields.hasValue = 0;
      *(_QWORD *)&v92.fields.value.fields.y = 0;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v43, v92, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52, v53);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_64;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v9 + 36),
                                *(_DWORD *)(v9 + 32),
                                0);
      if ( EventDataLostBattleId == -1 )
        return;
      v57 = EventDataLostBattleId;
      if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v55, v56);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v55);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58, v59);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_64;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v57,
                    *(_DWORD *)(v9 + 32),
                    0);
      if ( !mInstance )
        goto LABEL_64;
      v60 = (System_Collections_Generic_List_object__o *)mInstance;
      v61 = (System_String_o *)StringLiteral_1/*""*/;
      v91 = *((_DWORD *)mInstance + 6);
      v62 = sub_21FFD10(int___TypeInfo, 2);
      *(_QWORD *)(v9 + 40) = v62;
      v63 = (__int64 *)(v9 + 40);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), v62, v64, v65, v66, v67, v68, v69);
      v70 = System_Int32__ToString((int32_t)&v91, 0);
      v71 = System_String__Concat_75438412((System_String_o *)StringLiteral_5784/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v70, 0);
      v74 = v71;
      if ( v91 >= 2 && *(_BYTE *)(v9 + 48) )
        v74 = System_String__Concat_75438412(v71, (System_String_o *)StringLiteral_16894/*"_NO_CANCEL"*/, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72, v73);
      v75 = LocalizationManager__Get(v74, 0);
      if ( System_String__op_Equality(v75, v74, 0) )
        v78 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v78 = v75;
      if ( v91 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v60,
                      0,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_64;
        v61 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v60,
                      1,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_64;
        v79 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v82 = *v63;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v60,
                      0,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v82 )
          goto LABEL_64;
        if ( *(_DWORD *)(v82 + 24) )
        {
          v83 = (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__;
          v84 = *v63;
          *(_DWORD *)(v82 + 32) = *((_DWORD *)mInstance + 5);
          mInstance = System_Collections_Generic_List_object___get_Item(v60, 1, v83);
          if ( !mInstance || !v84 )
            goto LABEL_64;
          if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFFE) != 0 )
          {
            *(_DWORD *)(v84 + 36) = *((_DWORD *)mInstance + 5);
LABEL_59:
            v85 = *v43;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v81);
            v86 = LocalizationManager__Get((System_String_o *)StringLiteral_5785/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0);
            v87 = *(unsigned __int8 *)(v9 + 48);
            v88 = (ResetSelectDialog_ClickDelegate_o *)sub_21FFEBC(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v88,
              (Il2CppObject *)v9,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v89);
            if ( v85 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v85, v86, v78, v61, v79, v87 != 0, v88, v90);
              return;
            }
LABEL_64:
            sub_21FFECC(mInstance, v11);
          }
        }
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76, v77);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0);
        v80 = *v63;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v60,
                      0,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v80 )
          goto LABEL_64;
        if ( *(_DWORD *)(v80 + 24) )
        {
          *(_DWORD *)(v80 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_59;
        }
      }
      sub_21FFED4(mInstance);
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

  if ( (byte_5937A0A & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
    byte_5937A0A = 1;
  }
  v7 = sub_21FFEBC(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endAction, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_5937A09 & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    byte_5937A09 = 1;
  }
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&warId);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_21FFECC(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(mono, v9, 0);
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
  __int64 v13; // x2
  int32_t v14; // w21

  if ( (byte_5937A08 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5937A08 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&resetIdx);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0);
  if ( EventDataLostBattleId != -1 )
  {
    v14 = EventDataLostBattleId;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v14,
        resetIdx,
        0);
      return;
    }
LABEL_12:
    sub_21FFECC(Master_object, v10);
  }
}


void DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  int v11; // w9
  int v12; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x0
  __int64 v16; // x1

  if ( (byte_5937A0B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937A0B = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_59354D2 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354D2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = (unsigned __int8)byte_5935781;
  v3->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !v4 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_5935781 = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_5935782;
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !v5 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_5935782 = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v6 = (unsigned __int8)byte_5935783;
  v3->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !v6 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_5935783 = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v7 = (unsigned __int8)byte_5932ADC;
  v3->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !v7 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_5932ADC = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0);
  if ( !byte_5935774 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935774 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v11 = (unsigned __int8)byte_5935775;
  v10->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !v11 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_5935775 = 1;
  }
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, v8, v9);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v12 = (unsigned __int8)byte_5935A00;
  v10->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !v12 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_5935A00 = 1;
  }
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, v8, v9);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v14);
  if ( !Instance )
    sub_21FFECC(0, v16);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0, 0, 0);
}


void DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_5937A03 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5937A03 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_21FFECC(genericContainerHandle, v6);
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFA0E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFA098;
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
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  __int64 v2; // x2
  int32_t _1__state; // w8
  Il2CppObject *v5; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  void *clip; // x0
  struct System_Action_o *endAction; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t eventId; // w21
  int32_t warId; // w22
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  AssetData_o *v32; // x21
  DataLostResetManager_c *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *Object_object__58323140; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  struct DataLostResetManager___c__DisplayClass11_0_o *v39; // x22
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x2
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v48; // x8
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct DataLostResetManager___c__DisplayClass11_0_o *v56; // x8
  Il2CppObject *Component_object; // x22
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  float v64; // s8
  struct System_String_o *klass; // x1
  float v66; // s9
  DataLostResetManager___c_c *v67; // x0
  struct DataLostResetManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v70; // x21
  struct DataLostResetManager___c_StaticFields *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  UnityEngine_WaitWhile_o *v78; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v92; // x19
  System_Action_o *v93; // x20
  struct DataLostResetManager___c__DisplayClass11_0_o *v94; // x8
  UnityEngine_Object_o *v95; // x20
  __int64 v96; // x1
  __int64 v97; // x2
  UnityEngine_Object_o *v98; // x21
  __int64 v99; // x2
  System_String_o *name; // x0
  System_String_o *v101; // x0
  UnityEngine_WaitForSeconds_o *v102; // x20
  Il2CppObject **v103; // x19
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7

  if ( (byte_5937A16 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
    sub_21FFC50(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__);
    sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__);
    sub_21FFC50(&DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    sub_21FFC50(&DataLostResetManager___c_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A16 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0) )
    {
      v87 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v87 = (_QWORD *)sub_21FFC68(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v88 = (System_Reflection_MethodBase_o *)sub_21FFC34(v87, v87[4]);
      OverwriteAssetSoundName__PlaySe(v88, this->fields._whiteOutSe_5__3, 0, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v92 = (CommonUI_o *)Instance;
    v93 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v93, _8__1, Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, 0);
    if ( !v92 )
      goto LABEL_70;
    CommonUI__maskFadeout(v92, 2, whiteOutTime_5__2, v93, 0);
    goto LABEL_46;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v67 = DataLostResetManager___c_TypeInfo;
    if ( !*(&DataLostResetManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo, method, v2);
      v67 = DataLostResetManager___c_TypeInfo;
    }
    static_fields = v67->static_fields;
    _9__11_0 = static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*(&v67->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v67, method, v2);
        static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      }
      v70 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__11_0, v70, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0);
      v71 = DataLostResetManager___c_TypeInfo->static_fields;
      v71->__9__11_0 = _9__11_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v71->__9__11_0, (int32_t)_9__11_0, v72, v73, v74, v75, v76, v77);
    }
    v78 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v78, _9__11_0, 0);
    this->fields.__2__current = (Il2CppObject *)v78;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v78, v80, v81, v82, v83, v84, v85);
    LOBYTE(AssetStorage) = 1;
    *((_DWORD *)p__2__current - 2) = 2;
  }
  else
  {
    if ( _1__state )
      goto LABEL_46;
    this->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_21FFEBC(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v5;
    p__8__1 = &this->fields.__8__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    clip = this->fields.__8__1;
    if ( !clip )
      goto LABEL_70;
    endAction = this->fields.endAction;
    *((_QWORD *)clip + 3) = endAction;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)((char *)clip + 24),
      (int32_t)endAction,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    eventId = this->fields.eventId;
    warId = this->fields.warId;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v22, v23);
    EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v23);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26, v27);
    AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0);
    if ( AssetStorage )
    {
      v32 = AssetStorage;
      v33 = DataLostResetManager_TypeInfo;
      if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v30, v31);
        v33 = DataLostResetManager_TypeInfo;
      }
      Object_object__58323140 = AssetData__GetObject_object__58323140(
                                  v32,
                                  v33->static_fields->PREFAB_EFFECT_NAME,
                                  (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
      {
        v39 = *p__8__1;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
        clip = UnityEngine_Object__Instantiate_object_(
                 Object_object__58323140,
                 (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v39 )
        {
          v39->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v39->fields, (int32_t)clip, v40, v41, v42, v43, v44, v45);
          if ( *p__8__1 )
          {
            gameOverEffect = (*p__8__1)->fields.gameOverEffect;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13, v46);
            if ( !byte_5931EF0 )
            {
              sub_21FFC50(&TerminalSceneComponent_TypeInfo);
              byte_5931EF0 = 1;
            }
            clip = TerminalSceneComponent_TypeInfo;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13, v46);
              clip = TerminalSceneComponent_TypeInfo;
            }
            v48 = **((_QWORD **)clip + 23);
            if ( v48 )
            {
              GameObjectExtensions__SafeSetParent_42881912(gameOverEffect, *(UnityEngine_GameObject_o **)(v48 + 336), 0);
              v49 = (int)StringLiteral_1/*""*/;
              this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
              this->fields._whiteOutTime_5__2 = 1.5;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields._whiteOutSe_5__3,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55);
              v56 = this->fields.__8__1;
              if ( v56 )
              {
                clip = v56->fields.gameOverEffect;
                if ( clip )
                {
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)clip,
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                  clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                  if ( ((unsigned __int8)clip & 1) != 0 )
                  {
                    if ( !Component_object )
                      goto LABEL_70;
                    v64 = *((float *)&Component_object[2].klass + 1);
                    klass = (struct System_String_o *)Component_object[3].klass;
                    v66 = *(float *)&Component_object[2].klass;
                    this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                    this->fields._whiteOutSe_5__3 = klass;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields._whiteOutSe_5__3,
                      (int32_t)klass,
                      v58,
                      v59,
                      v60,
                      v61,
                      v62,
                      v63);
                  }
                  else
                  {
                    v66 = 1.5;
                    v64 = 6.5;
                  }
                  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13, v58);
                  SoundManager__fadeoutBgm(v66, 0);
                  if ( *p__8__1 )
                  {
                    clip = (*p__8__1)->fields.gameOverEffect;
                    if ( clip )
                    {
                      clip = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)clip,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                      v94 = *p__8__1;
                      if ( *p__8__1 )
                      {
                        v95 = (UnityEngine_Object_o *)clip;
                        clip = v94->fields.gameOverEffect;
                        if ( clip )
                        {
                          v98 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)clip,
                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96, v97);
                          clip = (void *)UnityEngine_Object__op_Inequality(v95, 0, 0);
                          if ( ((unsigned __int8)clip & 1) != 0 )
                          {
                            if ( v95 )
                            {
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v95, 0);
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0);
                                clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v95, 0);
                                if ( clip )
                                {
                                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
                                  UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v95, name, 0);
LABEL_69:
                                  v102 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
                                  UnityEngine_WaitForSeconds___ctor(v102, v64, 0);
                                  this->fields.__2__current = (Il2CppObject *)v102;
                                  v103 = &this->fields.__2__current;
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)v103,
                                    (int32_t)v102,
                                    v104,
                                    v105,
                                    v106,
                                    v107,
                                    v108,
                                    v109);
                                  LOBYTE(AssetStorage) = 1;
                                  *((_DWORD *)v103 - 2) = 1;
                                  return (char)AssetStorage;
                                }
                              }
                            }
                          }
                          else
                          {
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v99);
                            clip = (void *)UnityEngine_Object__op_Inequality(v98, 0, 0);
                            if ( ((unsigned __int8)clip & 1) == 0 )
                              goto LABEL_69;
                            if ( v98 )
                            {
                              clip = v98[5].klass;
                              if ( clip )
                              {
                                UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0);
                                clip = v98[5].klass;
                                if ( clip )
                                {
                                  v101 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
                                  SimpleAnimation__Play_78338864((SimpleAnimation_o *)v98, v101, 0);
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
        sub_21FFECC(clip, v13);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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

  if ( (byte_5937A0D & 1) == 0 )
  {
    sub_21FFC50(&DataLostResetManager___c_TypeInfo);
    byte_5937A0D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v1;
  sub_21FFBF4(
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
  __int64 v2; // x2

  if ( (byte_5937A0E & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5937A0E = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
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
  __int64 v2; // x2
  UnityEngine_Object_o *gameOverEffect; // x20
  struct System_Action_o *endAction; // x8

  if ( (byte_5937A0F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A0F = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(gameOverEffect, 0);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x6
  struct System_Int32_array *idx; // x8
  _BOOL4 isNoCancel; // w24
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v19; // w23
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_5937A10 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__);
    byte_5937A10 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_47816428(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( (unsigned int)(selectNo - 1) >= LODWORD(idx->max_length) )
        sub_21FFED4(this);
      isNoCancel = v4->fields.isNoCancel;
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v19 = idx->m_Items[selectNo - 1];
      resetDelegate = v4->fields.resetDelegate;
      if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&selectNo, v13);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v19, isNoCancel, resetDelegate, v14);
      return;
    }
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&selectNo);
  }
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&selectNo, v13);
  DataLostResetManager__SetTitleInfoTouchEnable(1, *(const MethodInfo **)&selectNo);
}


void DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_5937A11 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A11 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(selectDialogObj, 0);
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
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  intptr_t method_code; // x0
  intptr_t v19; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v22; // x19

  v4 = this;
  if ( (byte_5937A12 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__);
    byte_5937A12 = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !confirmDialog )
    sub_21FFECC(this, isDecide);
  ResetConfirmDialog__Close_47817032(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v4->fields.resetIdx;
      method_code = resetDelegate->fields.method_code;
      v19 = resetDelegate->fields.method;
LABEL_17:
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))resetDelegate->fields.invoke_impl)(method_code, resetIdx, v19);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v22 = v4->fields.resetDelegate;
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v13, v14);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v22, v15);
  }
  else
  {
    if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v13, v14);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v13);
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      method_code = resetDelegate->fields.method_code;
      v19 = resetDelegate->fields.method;
      resetIdx = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
  }
}


void DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__1(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *confirmDialogObj; // x19

  if ( (byte_5937A13 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A13 = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(confirmDialogObj, 0);
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
  if ( (byte_5937A14 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_21FFC50(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__);
    byte_5937A14 = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !selectDialog )
    sub_21FFECC(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_47816428(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0);
}


void DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_5937A15 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A15 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(selectDialogObj, 0);
}