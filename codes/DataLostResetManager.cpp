void __fastcall DataLostResetManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct DataLostResetManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5AA0A & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11332/*"ResetConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_17264/*"bit_raidreset"*/);
    sub_1B885B0(&StringLiteral_11335/*"ResetSelectDialog"*/);
    byte_4A5AA0A = 1;
  }
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17264/*"bit_raidreset"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)DataLostResetManager_TypeInfo->static_fields,
    StringLiteral_17264/*"bit_raidreset"*/,
    v1,
    v2);
  v3 = StringLiteral_11335/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11335/*"ResetSelectDialog"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME, v3, v5, v6);
  v7 = StringLiteral_11332/*"ResetConfirmDialog"*/;
  v8 = DataLostResetManager_TypeInfo->static_fields;
  v8->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11332/*"ResetConfirmDialog"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->PREFAB_CONFIRM_DIALOG_NAME, v7, v9, v10);
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
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+4h] [xbp-2Ch] BYREF
  int v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5AA02 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    sub_1B885B0(&StringLiteral_6235/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4A5AA02 = 1;
  }
  if ( eventId )
  {
    v16 = eventId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, method, v3, v4);
    return System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
  }
  else
  {
    v15 = 0;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4);
    v14 = warId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v10, v11, v12);
    return System_String__Format_61721404((System_String_o *)StringLiteral_6235/*"EventUI/Prefabs/{0}/{1}"*/, v9, v13, 0LL);
  }
}


void __fastcall DataLostResetManager__OpenBattleResultResetDialog(
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
  const MethodInfo *v12; // x2
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  AssetData_o *v15; // x23
  DataLostResetManager_c *v16; // x0
  Il2CppObject *Object_object__48635516; // x23
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o **v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Transform_o *v26; // x25
  const MethodInfo *v27; // x1
  ResetSelectDialog_o *v28; // x19
  System_String_o *v29; // x20
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  ResetSelectDialog_ClickDelegate_o *v32; // x24
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5
  UnityEngine_Object_o *v35; // x19

  if ( (byte_4A5AA05 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__);
    sub_1B885B0(&DataLostResetManager___c__DisplayClass8_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/);
    sub_1B885B0(&StringLiteral_5604/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/);
    sub_1B885B0(&StringLiteral_5603/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/);
    byte_4A5AA05 = 1;
  }
  v7 = sub_1B887FC(DataLostResetManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_40;
  *(_QWORD *)(v7 + 32) = closeAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)closeAction, v10, v11);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v12);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v15 = AssetStorage;
    v16 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v16 = DataLostResetManager_TypeInfo;
    }
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                v15,
                                v16->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__Instantiate_object_(
              Object_object__48635516,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v7 + 24) = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v18, v19, v20);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v7 + 16) = Component_object;
      v22 = (UnityEngine_GameObject_o **)(v7 + 16);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)Component_object, v23, v24);
      Instance = *(UnityEngine_GameObject_o **)(v7 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v9);
      Instance = *v22;
      if ( !*v22 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = *v22;
      if ( !*v22 )
        goto LABEL_40;
      Instance = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
      v26 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4A55CE6 )
      {
        Instance = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v26 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
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
        DataLostResetManager__SetTitleInfoTouchEnable(0, v27);
        v28 = (ResetSelectDialog_o *)*v22;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5602/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v32 = (ResetSelectDialog_ClickDelegate_o *)sub_1B887FC(ResetSelectDialog_ClickDelegate_TypeInfo);
        ResetSelectDialog_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)v7,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v33);
        if ( v28 )
        {
          ResetSelectDialog__OpenSingleButton(v28, v29, v30, v31, v32, v34);
          return;
        }
LABEL_40:
        sub_1B8880C(Instance, v9);
      }
      v35 = *(UnityEngine_Object_o **)(v7 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v35, 0LL);
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
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v20; // x20
  DataLostResetManager_c *v21; // x0
  Il2CppObject *Object_object__48635516; // x20
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  TerminalSceneComponent_c *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  bool v36; // w0
  BaseDialog_o *v37; // x21
  System_String_o *v38; // x20
  System_String_o *v39; // x0
  int v40; // w24
  System_String_o *v41; // x22
  ResetConfirmDialog_ClickDelegate_o *v42; // x23
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x5
  int32_t v45; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v46; // 0:x2.16

  v45 = selectNo;
  if ( (byte_4A5AA04 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ResetConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__);
    sub_1B885B0(&DataLostResetManager___c__DisplayClass7_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5610/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_5609/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AA04 = 1;
  }
  v12 = sub_1B887FC(DataLostResetManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_35;
  *(_QWORD *)(v12 + 32) = resetDelegate;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)resetDelegate, v15, v16);
  *(_DWORD *)(v12 + 40) = resetIdx;
  *(_BYTE *)(v12 + 44) = isBackReturn;
  *(_DWORD *)(v12 + 48) = eventId;
  *(_DWORD *)(v12 + 52) = warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v17);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v20 = AssetStorage;
    v21 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v21 = DataLostResetManager_TypeInfo;
    }
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                v20,
                                v21->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object_(
              Object_object__48635516,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v12 + 24) = v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)v23, v24, v25);
      mInstance = *(UnityEngine_GameObject_o **)(v12 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v12 + 16) = Component_object;
        v27 = (BaseDialog_o **)(v12 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)Component_object, v28, v29);
        mInstance = *(UnityEngine_GameObject_o **)(v12 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v14);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          v30 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v30 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v30->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v46.fields.hasValue = 0LL;
            *(_QWORD *)&v46.fields.value.fields.y = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v27, v46, 0LL);
            v31 = System_Int32__ToString((int32_t)&v45, 0LL);
            v32 = System_String__Concat_61707032((System_String_o *)StringLiteral_5609/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v31, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v33 = LocalizationManager__Get(v32, 0LL);
            v34 = System_Int32__ToString((int32_t)&v45, 0LL);
            v35 = System_String__Concat_61707032((System_String_o *)StringLiteral_5609/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v34, 0LL);
            v36 = System_String__op_Equality(v33, v35, 0LL);
            v37 = *v27;
            v38 = v36 ? (System_String_o *)StringLiteral_1/*""*/ : v33;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5610/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v40 = *(unsigned __int8 *)(v12 + 44);
            v41 = v39;
            v42 = (ResetConfirmDialog_ClickDelegate_o *)sub_1B887FC(ResetConfirmDialog_ClickDelegate_TypeInfo);
            ResetConfirmDialog_ClickDelegate___ctor(
              v42,
              (Il2CppObject *)v12,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v43);
            if ( v37 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v37, v41, v38, v40 != 0, v42, v44);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_1B8880C(mInstance, v14);
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
  void *mInstance; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  int32_t v15; // w20
  int32_t v16; // w21
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v19; // x20
  DataLostResetManager_c *v20; // x0
  Il2CppObject *Object_object__48635516; // x20
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  TerminalSceneComponent_c *v29; // x0
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v31; // x1
  int32_t v32; // w21
  System_Collections_Generic_List_object__o *v33; // x23
  System_String_o *v34; // x21
  __int64 v35; // x0
  __int64 *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x22
  System_String_o *v42; // x25
  System_String_o *v43; // x22
  System_String_o *v44; // x0
  __int64 v45; // x24
  System_String_o *v46; // x25
  __int64 v47; // x28
  __int64 v48; // x24
  BaseDialog_o *v49; // x20
  System_String_o *v50; // x0
  int v51; // w26
  System_String_o *v52; // x23
  ResetSelectDialog_ClickDelegate_o *v53; // x24
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x7
  int v56; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v57; // 0:x2.16

  if ( (byte_4A5AA03 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ResetSelectDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__);
    sub_1B885B0(&DataLostResetManager___c__DisplayClass6_0_TypeInfo);
    sub_1B885B0(&StringLiteral_16275/*"_NO_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5612/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_5613/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/);
    sub_1B885B0(&StringLiteral_5614/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AA03 = 1;
  }
  v56 = 0;
  v9 = sub_1B887FC(DataLostResetManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_63;
  *(_QWORD *)(v9 + 56) = resetDelegate;
  *(_DWORD *)(v9 + 32) = eventId;
  *(_DWORD *)(v9 + 36) = warId;
  *(_BYTE *)(v9 + 48) = isNoCancel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)resetDelegate, v12, v13);
  v16 = *(_DWORD *)(v9 + 32);
  v15 = *(_DWORD *)(v9 + 36);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(v16, v15, v14);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v19 = AssetStorage;
    v20 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v20 = DataLostResetManager_TypeInfo;
    }
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                v19,
                                v20->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v22 = UnityEngine_Object__Instantiate_object_(
              Object_object__48635516,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v9 + 24) = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)v22, v23, v24);
      mInstance = *(void **)(v9 + 24);
      if ( !mInstance )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v9 + 16) = Component_object;
      v26 = (BaseDialog_o **)(v9 + 16);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)Component_object, v27, v28);
      mInstance = *(void **)(v9 + 16);
      if ( !mInstance )
        goto LABEL_63;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v11);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      v29 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v29->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_63;
      *(_QWORD *)&v57.fields.hasValue = 0LL;
      *(_QWORD *)&v57.fields.value.fields.y = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v26, v57, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_63;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v9 + 36),
                                *(_DWORD *)(v9 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v32 = EventDataLostBattleId;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v31);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_63;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v32,
                    *(_DWORD *)(v9 + 32),
                    0LL);
      if ( !mInstance )
        goto LABEL_63;
      v33 = (System_Collections_Generic_List_object__o *)mInstance;
      v34 = (System_String_o *)StringLiteral_1/*""*/;
      v56 = *((_DWORD *)mInstance + 6);
      v35 = sub_1B88658(int___TypeInfo, 2LL);
      *(_QWORD *)(v9 + 40) = v35;
      v36 = (__int64 *)(v9 + 40);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v35, v37, v38);
      v39 = System_Int32__ToString((int32_t)&v56, 0LL);
      v40 = System_String__Concat_61707032((System_String_o *)StringLiteral_5613/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v39, 0LL);
      v41 = v40;
      if ( ((v56 > 1) & *(_BYTE *)(v9 + 48)) != 0 )
        v41 = System_String__Concat_61707032(v40, (System_String_o *)StringLiteral_16275/*"_NO_CANCEL"*/, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get(v41, 0LL);
      if ( System_String__op_Equality(v42, v41, 0LL) )
        v43 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v43 = v42;
      if ( v56 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v33,
                      0,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v34 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v33,
                      1,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v46 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v47 = *v36;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v33,
                      0,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v47 )
          goto LABEL_63;
        if ( *(_DWORD *)(v47 + 24) )
        {
          *(_DWORD *)(v47 + 32) = *((_DWORD *)mInstance + 5);
          v48 = *v36;
          mInstance = System_Collections_Generic_List_object___get_Item(
                        v33,
                        1,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
          if ( !mInstance || !v48 )
            goto LABEL_63;
          if ( *(_DWORD *)(v48 + 24) > 1u )
          {
            *(_DWORD *)(v48 + 36) = *((_DWORD *)mInstance + 5);
LABEL_58:
            v49 = *v26;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v51 = *(unsigned __int8 *)(v9 + 48);
            v52 = v50;
            v53 = (ResetSelectDialog_ClickDelegate_o *)sub_1B887FC(ResetSelectDialog_ClickDelegate_TypeInfo);
            ResetSelectDialog_ClickDelegate___ctor(
              v53,
              (Il2CppObject *)v9,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v54);
            if ( v49 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v49, v52, v43, v34, v46, v51 != 0, v53, v55);
              return;
            }
LABEL_63:
            sub_1B8880C(mInstance, v11);
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5612/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v45 = *v36;
        v46 = v44;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v33,
                      0,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v45 )
          goto LABEL_63;
        if ( *(_DWORD *)(v45 + 24) )
        {
          *(_DWORD *)(v45 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_58;
        }
      }
      sub_1B88814(mInstance, v11);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5AA08 & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
    byte_4A5AA08 = 1;
  }
  v7 = sub_1B887FC(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)endAction, v8, v9);
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

  if ( (byte_4A5AA07 & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    byte_4A5AA07 = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_1B8880C(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652(mono, v9, 0LL);
}


void __fastcall DataLostResetManager__RequestResetDataLostBattle(
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

  if ( (byte_4A5AA06 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5AA06 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v12 = EventDataLostBattleId;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v12,
        resetIdx,
        0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(Master_object, v10);
  }
}


void __fastcall DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5AA09 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5AA09 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58383 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58383 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4A58543 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4A58543 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4A58544 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4A58544 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4A58545 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4A58545 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4A5644B = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_4A58538 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58538 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_4A58539 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4A58539 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_4A588D4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4A588D4 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  TitleInfoControl_o *v6; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4A5AA01 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5AA01 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6->fields.mEventBgTexture->klass;
    if ( !klass || (v6 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1B8880C(v6, v5);
    TitleInfoControl__SetTouchEnable(v6, flag, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CEC54;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEC0C;
}


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
  if ( (byte_4A5AA0B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5AA0B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  void *clip; // x0
  struct System_Action_o *endAction; // x1
  const MethodInfo *v13; // x2
  int32_t warId; // w21
  int32_t eventId; // w22
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  AssetData_o *v18; // x21
  DataLostResetManager_c *v19; // x0
  Il2CppObject *Object_object__48635516; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v25; // x8
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  struct DataLostResetManager___c__DisplayClass11_0_o *v29; // x8
  Il2CppObject *Component_object; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  float v33; // s8
  float v34; // s9
  struct System_String_o *klass; // x1
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v42; // x19
  System_Action_o *v43; // x20
  DataLostResetManager___c_c *v44; // x0
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v46; // x21
  struct DataLostResetManager___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  UnityEngine_WaitWhile_o *v50; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v52; // w2
  int32_t v53; // w3
  struct DataLostResetManager___c__DisplayClass11_0_o *v54; // x8
  UnityEngine_Object_o *v55; // x20
  UnityEngine_Object_o *v56; // x21
  System_String_o *name; // x0
  System_String_o *v58; // x0
  UnityEngine_WaitForSeconds_o *v59; // x20
  Il2CppObject **v60; // x19
  int32_t v61; // w2
  int32_t v62; // w3

  if ( (byte_4A5AA15 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
    sub_1B885B0(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__);
    sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__);
    sub_1B885B0(&DataLostResetManager___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&DataLostResetManager___c_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AA15 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v37 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v37 = (_QWORD *)sub_1B885C8(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v38 = (System_Reflection_MethodBase_o *)sub_1B88594(v37, v37[4]);
      OverwriteAssetSoundName__PlaySe(v38, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v42 = (CommonUI_o *)Instance;
    v43 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v42 )
      goto LABEL_70;
    CommonUI__maskFadeout(v42, 2, whiteOutTime_5__2, v43, 0LL);
    goto LABEL_39;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v44 = DataLostResetManager___c_TypeInfo;
    if ( !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo);
      v44 = DataLostResetManager___c_TypeInfo;
    }
    _9__11_0 = v44->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = DataLostResetManager___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__11_0, v46, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0LL);
      static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = _9__11_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v48, v49);
    }
    v50 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v50, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v50;
    p__2__current = &this->fields.__2__current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v50, v52, v53);
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
  v4 = (Il2CppObject *)sub_1B887FC(DataLostResetManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v4;
  p__8__1 = &this->fields.__8__1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7);
  clip = this->fields.__8__1;
  if ( !clip )
    goto LABEL_70;
  endAction = this->fields.endAction;
  *((_QWORD *)clip + 3) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)clip + 24), (int32_t)endAction, v9, v10);
  eventId = this->fields.eventId;
  warId = this->fields.warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v13);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v18 = AssetStorage;
    v19 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      v19 = DataLostResetManager_TypeInfo;
    }
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                v18,
                                v19->static_fields->PREFAB_EFFECT_NAME,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    {
      v21 = *p__8__1;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clip = UnityEngine_Object__Instantiate_object_(
               Object_object__48635516,
               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v21 )
      {
        v21->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->fields, (int32_t)clip, v22, v23);
        if ( *p__8__1 )
        {
          gameOverEffect = (*p__8__1)->fields.gameOverEffect;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          clip = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            clip = TerminalSceneComponent_TypeInfo;
          }
          v25 = **((_QWORD **)clip + 23);
          if ( v25 )
          {
            GameObjectExtensions__SafeSetParent_33730068(gameOverEffect, *(UnityEngine_GameObject_o **)(v25 + 336), 0LL);
            this->fields._whiteOutTime_5__2 = 1.5;
            v26 = (int)StringLiteral_1/*""*/;
            this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._whiteOutSe_5__3, v26, v27, v28);
            v29 = this->fields.__8__1;
            if ( v29 )
            {
              clip = v29->fields.gameOverEffect;
              if ( clip )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)clip,
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                clip = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)clip & 1) != 0 )
                {
                  if ( !Component_object )
                    goto LABEL_70;
                  v33 = *((float *)&Component_object[2].klass + 1);
                  v34 = *(float *)&Component_object[2].klass;
                  this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                  klass = (struct System_String_o *)Component_object[3].klass;
                  this->fields._whiteOutSe_5__3 = klass;
                  sub_1B88554(
                    (ServantStatusBattleListViewItem_o *)&this->fields._whiteOutSe_5__3,
                    (int32_t)klass,
                    v31,
                    v32);
                }
                else
                {
                  v34 = 1.5;
                  v33 = 6.5;
                }
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__fadeoutBgm(v34, 0LL);
                if ( *p__8__1 )
                {
                  clip = (*p__8__1)->fields.gameOverEffect;
                  if ( clip )
                  {
                    clip = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)clip,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    v54 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v55 = (UnityEngine_Object_o *)clip;
                      clip = v54->fields.gameOverEffect;
                      if ( clip )
                      {
                        v56 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)clip,
                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        clip = (void *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
                        if ( ((unsigned __int8)clip & 1) != 0 )
                        {
                          if ( v55 )
                          {
                            clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v55, 0LL);
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v55, 0LL);
                              if ( clip )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v55, name, 0LL);
LABEL_68:
                                v59 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
                                UnityEngine_WaitForSeconds___ctor(v59, v33, 0LL);
                                this->fields.__2__current = (Il2CppObject *)v59;
                                v60 = &this->fields.__2__current;
                                sub_1B88554((ServantStatusBattleListViewItem_o *)v60, (int32_t)v59, v61, v62);
                                LOBYTE(AssetStorage) = 1;
                                *((_DWORD *)v60 - 2) = 1;
                                return (char)AssetStorage;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          clip = (void *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
                          if ( ((unsigned __int8)clip & 1) == 0 )
                            goto LABEL_68;
                          if ( v56 )
                          {
                            clip = v56[5].klass;
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = v56[5].klass;
                              if ( clip )
                              {
                                v58 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                SimpleAnimation__Play_63844704((SimpleAnimation_o *)v56, v58, 0LL);
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
      sub_1B8880C(clip, v8);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AA0C & 1) == 0 )
  {
    sub_1B885B0(&DataLostResetManager___c_TypeInfo);
    byte_4A5AA0C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DataLostResetManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)DataLostResetManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5AA0D & 1) == 0 )
  {
    sub_1B885B0(&CTouch_TypeInfo);
    byte_4A5AA0D = 1;
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

  if ( (byte_4A5AA0E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA0E = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameOverEffect, 0LL);
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
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x6
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v13; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v4 = this;
  if ( (byte_4A5AA0F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__);
    byte_4A5AA0F = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_38547076(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v4->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
        sub_1B88814(this, *(_QWORD *)&selectNo);
      eventId = v4->fields.eventId;
      warId = v4->fields.warId;
      v13 = idx->m_Items[selectNo];
      isNoCancel = v4->fields.isNoCancel;
      resetDelegate = v4->fields.resetDelegate;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v13, isNoCancel, resetDelegate, v9);
      return;
    }
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&selectNo);
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

  if ( (byte_4A5AA10 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA10 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(selectDialogObj, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v15; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v18; // x19
  struct DataLostResetManager_ClickDelegate_o *v19; // x8

  v4 = this;
  if ( (byte_4A5AA11 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__);
    byte_4A5AA11 = 1;
  }
  _9__1 = v4->fields.__9__1;
  confirmDialog = v4->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !confirmDialog )
    sub_1B8880C(this, isDecide);
  ResetConfirmDialog__Close_38547684(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v4->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v4->fields.resetIdx;
      m_target = resetDelegate->fields.m_target;
      original_method_info = resetDelegate->fields.original_method_info;
      v15 = *(_QWORD *)&resetDelegate->fields.extra_arg;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
        original_method_info,
        resetIdx,
        v15);
    }
  }
  else if ( v4->fields.isBackReturn )
  {
    eventId = v4->fields.eventId;
    warId = v4->fields.warId;
    v18 = v4->fields.resetDelegate;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v18, v10);
  }
  else
  {
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v9);
    v19 = v4->fields.resetDelegate;
    if ( v19 )
    {
      m_target = v19->fields.m_target;
      original_method_info = v19->fields.original_method_info;
      v15 = *(_QWORD *)&v19->fields.extra_arg;
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

  if ( (byte_4A5AA12 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA12 = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(confirmDialogObj, 0LL);
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
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v3 = this;
  if ( (byte_4A5AA13 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_1B885B0(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__);
    byte_4A5AA13 = 1;
  }
  _9__1 = v3->fields.__9__1;
  selectDialog = v3->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !selectDialog )
    sub_1B8880C(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_38547076(selectDialog, _9__1, method);
  ActionExtensions__Call(v3->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4A5AA14 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA14 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(selectDialogObj, 0LL);
}