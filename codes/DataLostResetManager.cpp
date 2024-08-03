void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct DataLostResetManager_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FBDC3 & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11278/*"ResetConfirmDialog"*/, v4);
    sub_1B640C8(&StringLiteral_17195/*"bit_raidreset"*/, v5);
    sub_1B640C8(&StringLiteral_11281/*"ResetSelectDialog"*/, v6);
    byte_49FBDC3 = 1;
  }
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17195/*"bit_raidreset"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)DataLostResetManager_TypeInfo->static_fields,
    StringLiteral_17195/*"bit_raidreset"*/,
    v2,
    v3);
  v7 = StringLiteral_11281/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11281/*"ResetSelectDialog"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME, v7, v9, v10);
  v11 = StringLiteral_11278/*"ResetConfirmDialog"*/;
  v12 = DataLostResetManager_TypeInfo->static_fields;
  v12->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11278/*"ResetConfirmDialog"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->PREFAB_CONFIRM_DIALOG_NAME, v11, v13, v14);
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
  int32_t v11; // [xsp+4h] [xbp-2Ch] BYREF
  int v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBDBB & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&warId);
    sub_1B640C8(&StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v5);
    sub_1B640C8(&StringLiteral_6207/*"EventUI/Prefabs/{0}/{1}"*/, v6);
    byte_49FBDBB = 1;
  }
  if ( eventId )
  {
    v13 = eventId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format((System_String_o *)StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
  }
  else
  {
    v12 = 0;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v11 = warId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    return System_String__Format_61389768((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}/{1}"*/, v9, v10, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v29; // x23
  DataLostResetManager_c *v30; // x0
  Il2CppObject *Object_object__48347676; // x23
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o **v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  UnityEngine_Transform_o *transform; // x25
  __int64 v41; // x1
  UnityEngine_Transform_o *v42; // x25
  const MethodInfo *v43; // x1
  ResetSelectDialog_o *v44; // x19
  System_String_o *v45; // x20
  System_String_o *v46; // x22
  System_String_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  ResetSelectDialog_ClickDelegate_o *v50; // x24
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x5
  UnityEngine_Object_o *v53; // x19

  if ( (byte_49FBDBE & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, *(_QWORD *)&warId);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&ResetSelectDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B640C8(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v17);
    sub_1B640C8(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_5576/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v19);
    sub_1B640C8(&StringLiteral_5578/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v20);
    sub_1B640C8(&StringLiteral_5577/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v21);
    byte_49FBDBE = 1;
  }
  v22 = sub_1B64314(DataLostResetManager___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&warId, closeAction);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_40;
  *(_QWORD *)(v22 + 32) = closeAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)closeAction, v24, v25);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v26);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v29 = AssetStorage;
    v30 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v30 = DataLostResetManager_TypeInfo;
    }
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                v29,
                                v30->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v32 = UnityEngine_Object__Instantiate_object_(
              Object_object__48347676,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v22 + 24) = v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)v32, v33, v34);
      Instance = *(UnityEngine_GameObject_o **)(v22 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v22 + 16) = Component_object;
      v36 = (UnityEngine_GameObject_o **)(v22 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)Component_object, v37, v38);
      Instance = *(UnityEngine_GameObject_o **)(v22 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v39);
      Instance = *v36;
      if ( !*v36 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)Instance[6].klass;
      if ( !Instance )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
      if ( !transform )
        goto LABEL_40;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = *v36;
      if ( !*v36 )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
      v42 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_49F7116 )
      {
        Instance = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v41);
        byte_49F7116 = 1;
      }
      if ( !v42 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
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
        DataLostResetManager__SetTitleInfoTouchEnable(0, v43);
        v44 = (ResetSelectDialog_o *)*v36;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5578/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5577/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_5576/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v50 = (ResetSelectDialog_ClickDelegate_o *)sub_1B64314(ResetSelectDialog_ClickDelegate_TypeInfo, v48, v49);
        ResetSelectDialog_ClickDelegate___ctor(
          v50,
          (Il2CppObject *)v22,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v51);
        if ( v44 )
        {
          ResetSelectDialog__OpenSingleButton(v44, v45, v46, v47, v50, v52);
          return;
        }
LABEL_40:
        sub_1B64324(Instance);
      }
      v53 = *(UnityEngine_Object_o **)(v22 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v53, 0LL);
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
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v32; // x20
  DataLostResetManager_c *v33; // x0
  Il2CppObject *Object_object__48347676; // x20
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  TerminalSceneComponent_c *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  bool v50; // w0
  BaseDialog_o *v51; // x21
  System_String_o *v52; // x20
  System_String_o *v53; // x0
  int v54; // w24
  System_String_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  ResetConfirmDialog_ClickDelegate_o *v58; // x23
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x5
  int32_t v61; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v62; // 0:x2.16

  v61 = selectNo;
  if ( (byte_49FBDBD & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, *(_QWORD *)&warId);
    sub_1B640C8(&AssetManager_TypeInfo, v12);
    sub_1B640C8(&ResetConfirmDialog_ClickDelegate_TypeInfo, v13);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v19);
    sub_1B640C8(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v20);
    sub_1B640C8(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_5584/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v22);
    sub_1B640C8(&StringLiteral_5583/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v23);
    sub_1B640C8(&StringLiteral_1/*""*/, v24);
    byte_49FBDBD = 1;
  }
  v25 = sub_1B64314(DataLostResetManager___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&selectNo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_35;
  *(_QWORD *)(v25 + 32) = resetDelegate;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)resetDelegate, v27, v28);
  *(_DWORD *)(v25 + 40) = resetIdx;
  *(_BYTE *)(v25 + 44) = isBackReturn;
  *(_DWORD *)(v25 + 48) = eventId;
  *(_DWORD *)(v25 + 52) = warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v29);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v32 = AssetStorage;
    v33 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v33 = DataLostResetManager_TypeInfo;
    }
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                v32,
                                v33->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__Instantiate_object_(
              Object_object__48347676,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v25 + 24) = v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v35, v36, v37);
      mInstance = *(UnityEngine_GameObject_o **)(v25 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v25 + 16) = Component_object;
        v39 = (BaseDialog_o **)(v25 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)Component_object, v40, v41);
        mInstance = *(UnityEngine_GameObject_o **)(v25 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v42);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v43);
            byte_49F76BD = 1;
          }
          v44 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v44 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v44->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v62.fields.hasValue = 0LL;
            *(_QWORD *)&v62.fields.value.fields.y = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v39, v62, 0LL);
            v45 = System_Int32__ToString((int32_t)&v61, 0LL);
            v46 = System_String__Concat_61375396((System_String_o *)StringLiteral_5583/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v45, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v47 = LocalizationManager__Get(v46, 0LL);
            v48 = System_Int32__ToString((int32_t)&v61, 0LL);
            v49 = System_String__Concat_61375396((System_String_o *)StringLiteral_5583/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v48, 0LL);
            v50 = System_String__op_Equality(v47, v49, 0LL);
            v51 = *v39;
            v52 = v50 ? (System_String_o *)StringLiteral_1/*""*/ : v47;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_5584/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v54 = *(unsigned __int8 *)(v25 + 44);
            v55 = v53;
            v58 = (ResetConfirmDialog_ClickDelegate_o *)sub_1B64314(ResetConfirmDialog_ClickDelegate_TypeInfo, v56, v57);
            ResetConfirmDialog_ClickDelegate___ctor(
              v58,
              (Il2CppObject *)v25,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v59);
            if ( v51 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v51, v55, v52, v54 != 0, v58, v60);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_1B64324(mInstance);
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
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x2
  int32_t v35; // w20
  int32_t v36; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v39; // x20
  DataLostResetManager_c *v40; // x0
  Il2CppObject *Object_object__48347676; // x20
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  const MethodInfo *v49; // x1
  __int64 v50; // x1
  TerminalSceneComponent_c *v51; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v53; // x1
  int32_t v54; // w21
  System_Collections_Generic_List_object__o *v55; // x23
  System_String_o *v56; // x21
  __int64 v57; // x0
  __int64 *v58; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x22
  System_String_o *v64; // x25
  System_String_o *v65; // x22
  System_String_o *v66; // x0
  __int64 v67; // x24
  System_String_o *v68; // x25
  __int64 v69; // x1
  __int64 v70; // x28
  __int64 v71; // x24
  BaseDialog_o *v72; // x20
  System_String_o *v73; // x0
  int v74; // w26
  System_String_o *v75; // x23
  __int64 v76; // x1
  __int64 v77; // x2
  ResetSelectDialog_ClickDelegate_o *v78; // x24
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x7
  int v81; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v82; // 0:x2.16

  if ( (byte_49FBDBC & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, *(_QWORD *)&warId);
    sub_1B640C8(&AssetManager_TypeInfo, v9);
    sub_1B640C8(&ResetSelectDialog_ClickDelegate_TypeInfo, v10);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v15);
    sub_1B640C8(&int___TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v22);
    sub_1B640C8(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v23);
    sub_1B640C8(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_16206/*"_NO_CANCEL"*/, v25);
    sub_1B640C8(&StringLiteral_5586/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v26);
    sub_1B640C8(&StringLiteral_5587/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v27);
    sub_1B640C8(&StringLiteral_5588/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v28);
    sub_1B640C8(&StringLiteral_1/*""*/, v29);
    byte_49FBDBC = 1;
  }
  v81 = 0;
  v30 = sub_1B64314(DataLostResetManager___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&warId, isNoCancel);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_63;
  *(_QWORD *)(v30 + 56) = resetDelegate;
  *(_DWORD *)(v30 + 32) = eventId;
  *(_DWORD *)(v30 + 36) = warId;
  *(_BYTE *)(v30 + 48) = isNoCancel;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 56), (int32_t)resetDelegate, v32, v33);
  v36 = *(_DWORD *)(v30 + 32);
  v35 = *(_DWORD *)(v30 + 36);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(v36, v35, v34);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v39 = AssetStorage;
    v40 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v40 = DataLostResetManager_TypeInfo;
    }
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                v39,
                                v40->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v42 = UnityEngine_Object__Instantiate_object_(
              Object_object__48347676,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v30 + 24) = v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)v42, v43, v44);
      mInstance = *(void **)(v30 + 24);
      if ( !mInstance )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v30 + 16) = Component_object;
      v46 = (BaseDialog_o **)(v30 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 16), (int32_t)Component_object, v47, v48);
      mInstance = *(void **)(v30 + 16);
      if ( !mInstance )
        goto LABEL_63;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v49);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v50);
        byte_49F76BD = 1;
      }
      v51 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v51 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v51->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_63;
      *(_QWORD *)&v82.fields.hasValue = 0LL;
      *(_QWORD *)&v82.fields.value.fields.y = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v46, v82, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_63;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v30 + 36),
                                *(_DWORD *)(v30 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v54 = EventDataLostBattleId;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v53);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_63;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v54,
                    *(_DWORD *)(v30 + 32),
                    0LL);
      if ( !mInstance )
        goto LABEL_63;
      v55 = (System_Collections_Generic_List_object__o *)mInstance;
      v56 = (System_String_o *)StringLiteral_1/*""*/;
      v81 = *((_DWORD *)mInstance + 6);
      v57 = sub_1B64170(int___TypeInfo, 2LL);
      *(_QWORD *)(v30 + 40) = v57;
      v58 = (__int64 *)(v30 + 40);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 40), v57, v59, v60);
      v61 = System_Int32__ToString((int32_t)&v81, 0LL);
      v62 = System_String__Concat_61375396((System_String_o *)StringLiteral_5587/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v61, 0LL);
      v63 = v62;
      if ( ((v81 > 1) & *(_BYTE *)(v30 + 48)) != 0 )
        v63 = System_String__Concat_61375396(v62, (System_String_o *)StringLiteral_16206/*"_NO_CANCEL"*/, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get(v63, 0LL);
      if ( System_String__op_Equality(v64, v63, 0LL) )
        v65 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v65 = v64;
      if ( v81 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v55,
                      0,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v56 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v55,
                      1,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v68 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v70 = *v58;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v55,
                      0,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v70 )
          goto LABEL_63;
        if ( *(_DWORD *)(v70 + 24) )
        {
          *(_DWORD *)(v70 + 32) = *((_DWORD *)mInstance + 5);
          v71 = *v58;
          mInstance = System_Collections_Generic_List_object___get_Item(
                        v55,
                        1,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
          if ( !mInstance || !v71 )
            goto LABEL_63;
          if ( *(_DWORD *)(v71 + 24) > 1u )
          {
            *(_DWORD *)(v71 + 36) = *((_DWORD *)mInstance + 5);
LABEL_58:
            v72 = *v46;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v74 = *(unsigned __int8 *)(v30 + 48);
            v75 = v73;
            v78 = (ResetSelectDialog_ClickDelegate_o *)sub_1B64314(ResetSelectDialog_ClickDelegate_TypeInfo, v76, v77);
            ResetSelectDialog_ClickDelegate___ctor(
              v78,
              (Il2CppObject *)v30,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v79);
            if ( v72 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v72, v75, v65, v56, v68, v74 != 0, v78, v80);
              return;
            }
LABEL_63:
            sub_1B64324(mInstance);
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_5586/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v67 = *v58;
        v68 = v66;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v55,
                      0,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v67 )
          goto LABEL_63;
        if ( *(_DWORD *)(v67 + 24) )
        {
          *(_DWORD *)(v67 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_58;
        }
      }
      sub_1B6432C(mInstance, v69);
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
  int32_t v9; // w3

  if ( (byte_49FBDC1 & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId);
    byte_49FBDC1 = 1;
  }
  v7 = sub_1B64314(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId, endAction);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)endAction, v8, v9);
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

  if ( (byte_49FBDC0 & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49FBDC0 = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_1B64324(v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(mono, v9, 0LL);
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
  int32_t EventDataLostBattleId; // w0
  int32_t v14; // w21

  if ( (byte_49FBDBF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, *(_QWORD *)&warId);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    byte_49FBDBF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v14 = EventDataLostBattleId;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v14,
        resetIdx,
        0LL);
      return;
    }
LABEL_12:
    sub_1B64324(Master_object);
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

  if ( (byte_49FBDC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49FBDC2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9672 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    byte_49F9672 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_49F9809 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F9809 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_49F980A )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F980A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_49F980B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F980B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_49F7A3E = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_49F97FE )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49F97FE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_49F97FF )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F97FF = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_49F9AC4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9AC4 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *v7; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_49FBDBA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v3);
    byte_49FBDBA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v6);
      byte_49F76BD = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventRoot->klass;
    if ( !klass || (v7 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1B64324(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AC5C4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC57C;
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
  if ( (byte_49FBDC4 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&resetIdx);
    byte_49FBDC4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  int32_t _1__state; // w8
  Il2CppObject *v25; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  void *clip; // x0
  struct System_Action_o *endAction; // x1
  const MethodInfo *v33; // x2
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v38; // x21
  DataLostResetManager_c *v39; // x0
  Il2CppObject *Object_object__48347676; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v46; // x8
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  struct DataLostResetManager___c__DisplayClass11_0_o *v50; // x8
  Il2CppObject *Component_object; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  float v54; // s8
  float v55; // s9
  struct System_String_o *klass; // x1
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v63; // x19
  __int64 v64; // x1
  __int64 v65; // x2
  System_Action_o *v66; // x20
  DataLostResetManager___c_c *v67; // x0
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v69; // x21
  struct DataLostResetManager___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  UnityEngine_WaitWhile_o *v73; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v75; // w2
  int32_t v76; // w3
  struct DataLostResetManager___c__DisplayClass11_0_o *v77; // x8
  UnityEngine_Object_o *v78; // x20
  UnityEngine_Object_o *v79; // x21
  System_String_o *name; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  System_String_o *v83; // x0
  UnityEngine_WaitForSeconds_o *v84; // x20
  Il2CppObject **v85; // x19
  int32_t v86; // w2
  int32_t v87; // w3

  if ( (byte_49FBDCE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v4);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v6);
    sub_1B640C8(&System_Func_bool__TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&SoundManager_TypeInfo, v14);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v15);
    sub_1B640C8(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v16);
    sub_1B640C8(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v17);
    sub_1B640C8(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v18);
    sub_1B640C8(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v19);
    sub_1B640C8(&DataLostResetManager___c_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v21);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49FBDCE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v58 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v58 = (_QWORD *)sub_1B640E0(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v59 = (System_Reflection_MethodBase_o *)sub_1B640AC(v58, v58[4]);
      OverwriteAssetSoundName__PlaySe(v59, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v63 = (CommonUI_o *)Instance;
    v66 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v64, v65);
    System_Action___ctor(
      v66,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v63 )
      goto LABEL_70;
    CommonUI__maskFadeout(v63, 2, whiteOutTime_5__2, v66, 0LL);
    goto LABEL_39;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v67 = DataLostResetManager___c_TypeInfo;
    if ( !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v67 = DataLostResetManager___c_TypeInfo;
    }
    _9__11_0 = v67->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v67->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v67);
        v67 = DataLostResetManager___c_TypeInfo;
      }
      v69 = (Il2CppObject *)v67->static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
      System_Func_bool____ctor(_9__11_0, v69, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0LL);
      static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = _9__11_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v71, v72);
    }
    v73 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, method, v2);
    UnityEngine_WaitWhile___ctor(v73, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v73;
    p__2__current = &this->fields.__2__current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v73, v75, v76);
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
  v25 = (Il2CppObject *)sub_1B64314(DataLostResetManager___c__DisplayClass11_0_TypeInfo, method, v2);
  System_Object___ctor(v25, 0LL);
  this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v25;
  p__8__1 = &this->fields.__8__1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__8__1, (int32_t)v25, v27, v28);
  clip = this->fields.__8__1;
  if ( !clip )
    goto LABEL_70;
  endAction = this->fields.endAction;
  *((_QWORD *)clip + 3) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)clip + 24), (int32_t)endAction, v29, v30);
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
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                v38,
                                v39->static_fields->PREFAB_EFFECT_NAME,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      v41 = *p__8__1;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clip = UnityEngine_Object__Instantiate_object_(
               Object_object__48347676,
               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v41 )
      {
        v41->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41->fields, (int32_t)clip, v42, v43);
        if ( *p__8__1 )
        {
          gameOverEffect = (*p__8__1)->fields.gameOverEffect;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v44);
            byte_49F76BD = 1;
          }
          clip = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            clip = TerminalSceneComponent_TypeInfo;
          }
          v46 = **((_QWORD **)clip + 23);
          if ( v46 )
          {
            GameObjectExtensions__SafeSetParent_33381252(gameOverEffect, *(UnityEngine_GameObject_o **)(v46 + 336), 0LL);
            this->fields._whiteOutTime_5__2 = 1.5;
            v47 = (int)StringLiteral_1/*""*/;
            this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._whiteOutSe_5__3, v47, v48, v49);
            v50 = this->fields.__8__1;
            if ( v50 )
            {
              clip = v50->fields.gameOverEffect;
              if ( clip )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)clip,
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)clip & 1) != 0 )
                {
                  if ( !Component_object )
                    goto LABEL_70;
                  v54 = *((float *)&Component_object[2].klass + 1);
                  v55 = *(float *)&Component_object[2].klass;
                  this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                  klass = (struct System_String_o *)Component_object[3].klass;
                  this->fields._whiteOutSe_5__3 = klass;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&this->fields._whiteOutSe_5__3,
                    (int32_t)klass,
                    v52,
                    v53);
                }
                else
                {
                  v55 = 1.5;
                  v54 = 6.5;
                }
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__fadeoutBgm(v55, 0LL);
                if ( *p__8__1 )
                {
                  clip = (*p__8__1)->fields.gameOverEffect;
                  if ( clip )
                  {
                    clip = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)clip,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    v77 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v78 = (UnityEngine_Object_o *)clip;
                      clip = v77->fields.gameOverEffect;
                      if ( clip )
                      {
                        v79 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)clip,
                                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        clip = (void *)UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
                        if ( ((unsigned __int8)clip & 1) != 0 )
                        {
                          if ( v78 )
                          {
                            clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v78, 0LL);
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v78, 0LL);
                              if ( clip )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v78, name, 0LL);
LABEL_68:
                                v84 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(
                                                                        UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v81,
                                                                        v82);
                                UnityEngine_WaitForSeconds___ctor(v84, v54, 0LL);
                                this->fields.__2__current = (Il2CppObject *)v84;
                                v85 = &this->fields.__2__current;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)v85, (int32_t)v84, v86, v87);
                                LOBYTE(AssetStorage) = 1;
                                *((_DWORD *)v85 - 2) = 1;
                                return (char)AssetStorage;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          clip = (void *)UnityEngine_Object__op_Inequality(v79, 0LL, 0LL);
                          if ( ((unsigned __int8)clip & 1) == 0 )
                            goto LABEL_68;
                          if ( v79 )
                          {
                            clip = v79[5].klass;
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = v79[5].klass;
                              if ( clip )
                              {
                                v83 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                SimpleAnimation__Play_63513060((SimpleAnimation_o *)v79, v83, 0LL);
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
      sub_1B64324(clip);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBDC5 & 1) == 0 )
  {
    sub_1B640C8(&DataLostResetManager___c_TypeInfo, v1);
    byte_49FBDC5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DataLostResetManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)DataLostResetManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FBDC6 & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, method);
    byte_49FBDC6 = 1;
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

  if ( (byte_49FBDC7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBDC7 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameOverEffect, 0LL);
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
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x6
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v16; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_49FBDC8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_1B640C8(
                                                            &Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
                                                            v6);
    byte_49FBDC8 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&selectNo, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_38309392(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
        sub_1B6432C(this, v11);
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v16 = idx->m_Items[selectNo];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v16, isNoCancel, resetDelegate, v12);
      return;
    }
LABEL_15:
    sub_1B64324(this);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__SetTitleInfoTouchEnable(1, v11);
}


void __fastcall DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_49FBDC9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBDC9 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(selectDialogObj, 0LL);
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
  int32_t v10; // w3
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
  if ( (byte_49FBDCA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v5);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_1B640C8(
                                                            &Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
                                                            v6);
    byte_49FBDCA = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !confirmDialog )
    sub_1B64324(this);
  ResetConfirmDialog__Close_38310000(confirmDialog, _9__1, method);
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

  if ( (byte_49FBDCB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBDCB = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(confirmDialogObj, 0LL);
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
  int32_t v8; // w3

  v3 = this;
  if ( (byte_49FBDCC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&selectNo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_1B640C8(
                                                            &Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
                                                            v4);
    byte_49FBDCC = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&selectNo, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !selectDialog )
    sub_1B64324(this);
  ResetSelectDialog__Close_38309392(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_49FBDCD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FBDCD = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(selectDialogObj, 0LL);
}