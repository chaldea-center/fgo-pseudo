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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct DataLostResetManager_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct DataLostResetManager_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B1595F & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11469/*"ResetConfirmDialog"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17438/*"bit_raidreset"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11472/*"ResetSelectDialog"*/, v12, v13);
    byte_4B1595F = 1;
  }
  DataLostResetManager_TypeInfo->static_fields->PREFAB_EFFECT_NAME = (struct System_String_o *)StringLiteral_17438/*"bit_raidreset"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DataLostResetManager_TypeInfo->static_fields,
    StringLiteral_17438/*"bit_raidreset"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_11472/*"ResetSelectDialog"*/;
  static_fields = DataLostResetManager_TypeInfo->static_fields;
  static_fields->PREFAB_SELECT_DIALOG_NAME = (struct System_String_o *)StringLiteral_11472/*"ResetSelectDialog"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->PREFAB_SELECT_DIALOG_NAME,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_11469/*"ResetConfirmDialog"*/;
  v23 = DataLostResetManager_TypeInfo->static_fields;
  v23->PREFAB_CONFIRM_DIALOG_NAME = (struct System_String_o *)StringLiteral_11469/*"ResetConfirmDialog"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->PREFAB_CONFIRM_DIALOG_NAME, v22, v24, v25, v26, v27, v28, v29);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+4h] [xbp-2Ch] BYREF
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B15957 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_6356/*"EventUI/Prefabs/{0}/{1}"*/, v7, v8);
    byte_4B15957 = 1;
  }
  if ( eventId )
  {
    v15 = eventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v9, 0LL);
  }
  else
  {
    v14 = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v13 = warId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format_62415592((System_String_o *)StringLiteral_6356/*"EventUI/Prefabs/{0}/{1}"*/, v11, v12, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x21
  __int64 Instance; // x0
  const MethodInfo *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  __int64 v48; // x1
  System_String_o *EventAssetName; // x23
  AssetData_o *AssetStorage; // x0
  __int64 v51; // x1
  AssetData_o *v52; // x23
  DataLostResetManager_c *v53; // x0
  __int64 v54; // x1
  Il2CppObject *Object_object__49237568; // x23
  __int64 v56; // x1
  Il2CppObject *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *Component_object; // x0
  __int64 *v65; // x24
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  UnityEngine_Transform_o *transform; // x25
  __int64 v73; // x2
  UnityEngine_Transform_o *v74; // x25
  __int64 v75; // x1
  const MethodInfo *v76; // x1
  __int64 v77; // x1
  ResetSelectDialog_o *v78; // x19
  System_String_o *v79; // x20
  System_String_o *v80; // x22
  System_String_o *v81; // x23
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  ResetSelectDialog_ClickDelegate_o *v85; // x24
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x5
  UnityEngine_Object_o *v88; // x19

  if ( (byte_4B1595A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&warId, closeAction);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResetSelectDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__, v27, v28);
    sub_1BCA7E0(&DataLostResetManager___c__DisplayClass8_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_5686/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_5688/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5687/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, v35, v36);
    byte_4B1595A = 1;
  }
  v37 = sub_1BCAA2C(DataLostResetManager___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&warId, closeAction, method);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_40;
  *(_QWORD *)(v37 + 32) = closeAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)closeAction, v40, v41, v42, v43, v44, v45);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v46);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v47);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v48);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v52 = AssetStorage;
    v53 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v51);
      v53 = DataLostResetManager_TypeInfo;
    }
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                v52,
                                v53->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
      v57 = UnityEngine_Object__Instantiate_object_(
              Object_object__49237568,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v37 + 24) = v57;
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)v57, v58, v59, v60, v61, v62, v63);
      Instance = *(_QWORD *)(v37 + 24);
      if ( !Instance )
        goto LABEL_40;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Instance,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v37 + 16) = Component_object;
      v65 = (__int64 *)(v37 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)Component_object, v66, v67, v68, v69, v70, v71);
      Instance = *(_QWORD *)(v37 + 16);
      if ( !Instance )
        goto LABEL_40;
      ResetSelectDialog__Init((ResetSelectDialog_o *)Instance, v39);
      Instance = *v65;
      if ( !*v65 )
        goto LABEL_40;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      Instance = *(_QWORD *)(Instance + 136);
      if ( !Instance )
        goto LABEL_40;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !transform )
        goto LABEL_40;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = *v65;
      if ( !*v65 )
        goto LABEL_40;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      v74 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B109C6 )
      {
        Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v73);
        byte_4B109C6 = 1;
      }
      if ( !v74 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(v74, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v75);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !Instance )
        goto LABEL_40;
      if ( EventDataLostBattleMaster__GetEventDataLostBattleId(
             (EventDataLostBattleMaster_o *)Instance,
             warId,
             eventId,
             0LL) != -1 )
      {
        if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v76);
        DataLostResetManager__SetTitleInfoTouchEnable(0, v76);
        v78 = (ResetSelectDialog_o *)*v65;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_TITLE"*/, 0LL);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_MESSAGE"*/, 0LL);
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_5686/*"EVENT_DATA_LOST_BATTLE_RESET_BATTLE_RESULT_BUTTON"*/, 0LL);
        v85 = (ResetSelectDialog_ClickDelegate_o *)sub_1BCAA2C(ResetSelectDialog_ClickDelegate_TypeInfo, v82, v83, v84);
        ResetSelectDialog_ClickDelegate___ctor(
          v85,
          (Il2CppObject *)v37,
          Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__0__,
          v86);
        if ( v78 )
        {
          ResetSelectDialog__OpenSingleButton(v78, v79, v80, v81, v85, v87);
          return;
        }
LABEL_40:
        sub_1BCAA3C(Instance, v39);
      }
      v88 = *(UnityEngine_Object_o **)(v37 + 24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
      UnityEngine_Object__Destroy_70154244(v88, 0LL);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v37 + 32), 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x19
  UnityEngine_GameObject_o *mInstance; // x0
  const MethodInfo *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  __int64 v49; // x1
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v52; // x1
  AssetData_o *v53; // x20
  DataLostResetManager_c *v54; // x0
  __int64 v55; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v57; // x1
  Il2CppObject *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x2
  TerminalSceneComponent_c *v74; // x0
  System_String_o *v75; // x0
  __int64 v76; // x1
  System_String_o *v77; // x21
  System_String_o *v78; // x22
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  bool v81; // w0
  __int64 v82; // x1
  BaseDialog_o *v83; // x21
  System_String_o *v84; // x20
  System_String_o *v85; // x0
  int v86; // w24
  System_String_o *v87; // x22
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  ResetConfirmDialog_ClickDelegate_o *v91; // x23
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x5
  int32_t v94; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v95; // 0:x2.16

  v94 = selectNo;
  if ( (byte_4B15959 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&warId, *(_QWORD *)&selectNo);
    sub_1BCA7E0(&AssetManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&ResetConfirmDialog_ClickDelegate_TypeInfo, v14, v15);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__, v28, v29);
    sub_1BCA7E0(&DataLostResetManager___c__DisplayClass7_0_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_5694/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_5693/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v36, v37);
    byte_4B15959 = 1;
  }
  v38 = sub_1BCAA2C(
          DataLostResetManager___c__DisplayClass7_0_TypeInfo,
          *(_QWORD *)&warId,
          *(_QWORD *)&selectNo,
          *(_QWORD *)&resetIdx);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_35;
  *(_QWORD *)(v38 + 32) = resetDelegate;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)resetDelegate, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v38 + 40) = resetIdx;
  *(_BYTE *)(v38 + 44) = isBackReturn;
  *(_DWORD *)(v38 + 48) = eventId;
  *(_DWORD *)(v38 + 52) = warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v47);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v48);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v49);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v53 = AssetStorage;
    v54 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v52);
      v54 = DataLostResetManager_TypeInfo;
    }
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                v53,
                                v54->static_fields->PREFAB_CONFIRM_DIALOG_NAME,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
      v58 = UnityEngine_Object__Instantiate_object_(
              Object_object__49237568,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v38 + 24) = v58;
      sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)v58, v59, v60, v61, v62, v63, v64);
      mInstance = *(UnityEngine_GameObject_o **)(v38 + 24);
      if ( mInstance )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             mInstance,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ResetConfirmDialog___);
        *(_QWORD *)(v38 + 16) = Component_object;
        v66 = (BaseDialog_o **)(v38 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)Component_object, v67, v68, v69, v70, v71, v72);
        mInstance = *(UnityEngine_GameObject_o **)(v38 + 16);
        if ( mInstance )
        {
          ResetConfirmDialog__Init((ResetConfirmDialog_o *)mInstance, v40);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v40);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v40, v73);
            byte_4B10F83 = 1;
          }
          v74 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v40);
            v74 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_GameObject_o *)v74->static_fields->mInstance;
          if ( mInstance )
          {
            *(_QWORD *)&v95.fields.hasValue = 0LL;
            *(_QWORD *)&v95.fields.value.fields.y = 0LL;
            TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v66, v95, 0LL);
            v75 = System_Int32__ToString((int32_t)&v94, 0LL);
            v77 = System_String__Concat_62401220((System_String_o *)StringLiteral_5693/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v75, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
            v78 = LocalizationManager__Get(v77, 0LL);
            v79 = System_Int32__ToString((int32_t)&v94, 0LL);
            v80 = System_String__Concat_62401220((System_String_o *)StringLiteral_5693/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_MESSAGE_"*/, v79, 0LL);
            v81 = System_String__op_Equality(v78, v80, 0LL);
            v83 = *v66;
            v84 = v81 ? (System_String_o *)StringLiteral_1/*""*/ : v78;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
            v85 = LocalizationManager__Get((System_String_o *)StringLiteral_5694/*"EVENT_DATA_LOST_BATTLE_RESET_CONFIRM_TITLE"*/, 0LL);
            v86 = *(unsigned __int8 *)(v38 + 44);
            v87 = v85;
            v91 = (ResetConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                          ResetConfirmDialog_ClickDelegate_TypeInfo,
                                                          v88,
                                                          v89,
                                                          v90);
            ResetConfirmDialog_ClickDelegate___ctor(
              v91,
              (Il2CppObject *)v38,
              Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__0__,
              v92);
            if ( v83 )
            {
              ResetConfirmDialog__Open((ResetConfirmDialog_o *)v83, v87, v84, v86 != 0, v91, v93);
              return;
            }
          }
        }
      }
LABEL_35:
      sub_1BCAA3C(mInstance, v40);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x19
  void *mInstance; // x0
  const MethodInfo *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  const MethodInfo *v61; // x2
  int32_t v62; // w20
  int32_t v63; // w21
  __int64 v64; // x1
  System_String_o *EventAssetName; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v67; // x1
  AssetData_o *v68; // x20
  DataLostResetManager_c *v69; // x0
  __int64 v70; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v72; // x1
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  Il2CppObject *Component_object; // x0
  BaseDialog_o **v81; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x2
  TerminalSceneComponent_c *v89; // x0
  __int64 v90; // x1
  int32_t EventDataLostBattleId; // w0
  const MethodInfo *v92; // x1
  int32_t v93; // w21
  __int64 v94; // x1
  System_Collections_Generic_List_object__o *v95; // x23
  System_String_o *v96; // x21
  int64_t v97; // x0
  __int64 *v98; // x24
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_String_o *v105; // x0
  System_String_o *v106; // x0
  __int64 v107; // x1
  System_String_o *v108; // x22
  System_String_o *v109; // x25
  __int64 v110; // x1
  System_String_o *v111; // x22
  System_String_o *v112; // x0
  __int64 v113; // x24
  System_String_o *v114; // x25
  __int64 v115; // x28
  __int64 v116; // x24
  BaseDialog_o *v117; // x20
  System_String_o *v118; // x0
  int v119; // w26
  System_String_o *v120; // x23
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  ResetSelectDialog_ClickDelegate_o *v124; // x24
  const MethodInfo *v125; // x3
  const MethodInfo *v126; // x7
  int v127; // [xsp+Ch] [xbp-54h] BYREF
  System_Nullable_Vector3__o v128; // 0:x2.16

  if ( (byte_4B15958 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&warId, isNoCancel);
    sub_1BCA7E0(&AssetManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ResetSelectDialog_ClickDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDataLostBattleResetMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___, v21, v22);
    sub_1BCA7E0(&int___TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__, v37, v38);
    sub_1BCA7E0(&DataLostResetManager___c__DisplayClass6_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_16444/*"_NO_CANCEL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_5696/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_5697/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_5698/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v49, v50);
    byte_4B15958 = 1;
  }
  v127 = 0;
  v51 = sub_1BCAA2C(DataLostResetManager___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&warId, isNoCancel, resetDelegate);
  System_Object___ctor((Il2CppObject *)v51, 0LL);
  if ( !v51 )
    goto LABEL_63;
  *(_QWORD *)(v51 + 56) = resetDelegate;
  *(_DWORD *)(v51 + 32) = eventId;
  *(_DWORD *)(v51 + 36) = warId;
  *(_BYTE *)(v51 + 48) = isNoCancel;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 56), (int64_t)resetDelegate, v54, v55, v56, v57, v58, v59);
  v63 = *(_DWORD *)(v51 + 32);
  v62 = *(_DWORD *)(v51 + 36);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v60);
  EventAssetName = DataLostResetManager__GetEventAssetName(v63, v62, v61);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v64);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v68 = AssetStorage;
    v69 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v67);
      v69 = DataLostResetManager_TypeInfo;
    }
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                v68,
                                v69->static_fields->PREFAB_SELECT_DIALOG_NAME,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
      v73 = UnityEngine_Object__Instantiate_object_(
              Object_object__49237568,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v51 + 24) = v73;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 24), (int64_t)v73, v74, v75, v76, v77, v78, v79);
      mInstance = *(void **)(v51 + 24);
      if ( !mInstance )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)mInstance,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ResetSelectDialog___);
      *(_QWORD *)(v51 + 16) = Component_object;
      v81 = (BaseDialog_o **)(v51 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 16), (int64_t)Component_object, v82, v83, v84, v85, v86, v87);
      mInstance = *(void **)(v51 + 16);
      if ( !mInstance )
        goto LABEL_63;
      ResetSelectDialog__Init((ResetSelectDialog_o *)mInstance, v53);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v53);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v53, v88);
        byte_4B10F83 = 1;
      }
      v89 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v53);
        v89 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v89->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_63;
      *(_QWORD *)&v128.fields.hasValue = 0LL;
      *(_QWORD *)&v128.fields.value.fields.y = 0LL;
      TerminalSceneComponent__LocateDialogToUiRoot((TerminalSceneComponent_o *)mInstance, *v81, v128, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
      if ( !mInstance )
        goto LABEL_63;
      EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                                (EventDataLostBattleMaster_o *)mInstance,
                                *(_DWORD *)(v51 + 36),
                                *(_DWORD *)(v51 + 32),
                                0LL);
      if ( EventDataLostBattleId == -1 )
        return;
      v93 = EventDataLostBattleId;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v92);
      DataLostResetManager__SetTitleInfoTouchEnable(0, v92);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v94);
      mInstance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDataLostBattleResetMaster___);
      if ( !mInstance )
        goto LABEL_63;
      mInstance = EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
                    (EventDataLostBattleResetMaster_o *)mInstance,
                    v93,
                    *(_DWORD *)(v51 + 32),
                    0LL);
      if ( !mInstance )
        goto LABEL_63;
      v95 = (System_Collections_Generic_List_object__o *)mInstance;
      v96 = (System_String_o *)StringLiteral_1/*""*/;
      v127 = *((_DWORD *)mInstance + 6);
      v97 = sub_1BCA888(int___TypeInfo, 2LL);
      *(_QWORD *)(v51 + 40) = v97;
      v98 = (__int64 *)(v51 + 40);
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 40), v97, v99, v100, v101, v102, v103, v104);
      v105 = System_Int32__ToString((int32_t)&v127, 0LL);
      v106 = System_String__Concat_62401220((System_String_o *)StringLiteral_5697/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_MESSAGE_"*/, v105, 0LL);
      v108 = v106;
      if ( ((v127 > 1) & *(_BYTE *)(v51 + 48)) != 0 )
        v108 = System_String__Concat_62401220(v106, (System_String_o *)StringLiteral_16444/*"_NO_CANCEL"*/, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v107);
      v109 = LocalizationManager__Get(v108, 0LL);
      if ( System_String__op_Equality(v109, v108, 0LL) )
        v111 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v111 = v109;
      if ( v127 >= 2 )
      {
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v95,
                      0,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v96 = (System_String_o *)*((_QWORD *)mInstance + 4);
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v95,
                      1,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance )
          goto LABEL_63;
        v114 = (System_String_o *)*((_QWORD *)mInstance + 4);
        v115 = *v98;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v95,
                      0,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v115 )
          goto LABEL_63;
        if ( *(_DWORD *)(v115 + 24) )
        {
          *(_DWORD *)(v115 + 32) = *((_DWORD *)mInstance + 5);
          v116 = *v98;
          mInstance = System_Collections_Generic_List_object___get_Item(
                        v95,
                        1,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
          if ( !mInstance || !v116 )
            goto LABEL_63;
          if ( *(_DWORD *)(v116 + 24) > 1u )
          {
            *(_DWORD *)(v116 + 36) = *((_DWORD *)mInstance + 5);
LABEL_58:
            v117 = *v81;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
            v118 = LocalizationManager__Get((System_String_o *)StringLiteral_5698/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_TITLE"*/, 0LL);
            v119 = *(unsigned __int8 *)(v51 + 48);
            v120 = v118;
            v124 = (ResetSelectDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                          ResetSelectDialog_ClickDelegate_TypeInfo,
                                                          v121,
                                                          v122,
                                                          v123);
            ResetSelectDialog_ClickDelegate___ctor(
              v124,
              (Il2CppObject *)v51,
              Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__0__,
              v125);
            if ( v117 )
            {
              ResetSelectDialog__Open((ResetSelectDialog_o *)v117, v120, v111, v96, v114, v119 != 0, v124, v126);
              return;
            }
LABEL_63:
            sub_1BCAA3C(mInstance, v53);
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v110);
        v112 = LocalizationManager__Get((System_String_o *)StringLiteral_5696/*"EVENT_DATA_LOST_BATTLE_RESET_SELECT_DECIDE"*/, 0LL);
        v113 = *v98;
        v114 = v112;
        mInstance = System_Collections_Generic_List_object___get_Item(
                      v95,
                      0,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__get_Item__);
        if ( !mInstance || !v113 )
          goto LABEL_63;
        if ( *(_DWORD *)(v113 + 24) )
        {
          *(_DWORD *)(v113 + 32) = *((_DWORD *)mInstance + 5);
          goto LABEL_58;
        }
      }
      sub_1BCAA44(mInstance, v53);
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

  if ( (byte_4B1595D & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId, endAction);
    byte_4B1595D = 1;
  }
  v7 = sub_1BCAA2C(DataLostResetManager__PlayGameOverAnimation_d__11_TypeInfo, *(_QWORD *)&warId, endAction, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 40) = eventId;
  *(_DWORD *)(v7 + 44) = warId;
  *(_QWORD *)(v7 + 32) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)endAction, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B1595C & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&warId);
    byte_4B1595C = 1;
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&eventId);
  v9 = DataLostResetManager__PlayGameOverAnimation(eventId, warId, endAction, (const MethodInfo *)endAction);
  if ( !mono )
    sub_1BCAA3C(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(mono, v9, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  int32_t EventDataLostBattleId; // w0
  __int64 v18; // x1
  int32_t v19; // w21

  if ( (byte_4B1595B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, *(_QWORD *)&warId, *(_QWORD *)&resetIdx);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    byte_4B1595B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !Master_object )
    goto LABEL_12;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            warId,
                            eventId,
                            0LL);
  if ( EventDataLostBattleId != -1 )
  {
    v19 = EventDataLostBattleId;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Master_object = NetworkManager__getRequest_object_(
                      callback,
                      (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventResetDataLostBattleRequest___);
    if ( Master_object )
    {
      EventResetDataLostBattleRequest__beginRequest(
        (EventResetDataLostBattleRequest_o *)Master_object,
        v19,
        resetIdx,
        0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Master_object, v16);
  }
}


void __fastcall DataLostResetManager__ResetAfterInit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1595E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B1595E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
  if ( !byte_4B13395 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    byte_4B13395 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4B13536 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4B13536 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4B13537 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4B13537 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4B13538 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4B13538 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v1, v2);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4B11139 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v1);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !byte_4B1352B )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B1352B = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = 1;
  if ( !byte_4B1352C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4B1352C = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 3.0;
  if ( !byte_4B13806 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4B13806 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall DataLostResetManager__SetTitleInfoTouchEnable(bool flag, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  TitleInfoControl_o *v10; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4B15956 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B15956 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.mEventBgTexture->klass;
    if ( !klass || (v10 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1BCAA3C(v10, v8);
    TitleInfoControl__SetTouchEnable(v10, flag, 0LL);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0CFD0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CF88;
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
  if ( (byte_4B15960 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&resetIdx, callback);
    byte_4B15960 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall DataLostResetManager_ClickDelegate__EndInvoke(
        DataLostResetManager_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t _1__state; // w8
  Il2CppObject *v46; // x21
  struct DataLostResetManager___c__DisplayClass11_0_o **p__8__1; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t clip; // x0
  struct System_Action_o *endAction; // x1
  __int64 v63; // x1
  const MethodInfo *v64; // x2
  int32_t warId; // w21
  int32_t eventId; // w22
  __int64 v67; // x1
  System_String_o *EventAssetName; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v70; // x1
  AssetData_o *v71; // x21
  DataLostResetManager_c *v72; // x0
  __int64 v73; // x1
  Il2CppObject *Object_object__49237568; // x21
  __int64 v75; // x1
  struct DataLostResetManager___c__DisplayClass11_0_o *v76; // x22
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x2
  UnityEngine_GameObject_o *gameOverEffect; // x21
  __int64 v85; // x8
  void *v86; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v93; // x8
  Il2CppObject *Component_object; // x22
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  float v101; // s8
  float v102; // s9
  struct System_String_o *klass; // x1
  System_String_o *whiteOutSe_5__3; // x0
  _QWORD *v105; // x0
  System_Reflection_MethodBase_o *v106; // x0
  Il2CppObject *Instance; // x0
  float whiteOutTime_5__2; // s8
  Il2CppObject *_8__1; // x21
  CommonUI_o *v110; // x19
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Action_o *v114; // x20
  DataLostResetManager___c_c *v115; // x0
  System_Func_bool__o *_9__11_0; // x20
  Il2CppObject *v117; // x21
  struct DataLostResetManager___c_StaticFields *static_fields; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  UnityEngine_WaitWhile_o *v125; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct DataLostResetManager___c__DisplayClass11_0_o *v133; // x8
  UnityEngine_Object_o *v134; // x20
  __int64 v135; // x1
  UnityEngine_Object_o *v136; // x21
  System_String_o *name; // x0
  __int64 v138; // x2
  __int64 v139; // x3
  System_String_o *v140; // x0
  UnityEngine_WaitForSeconds_o *v141; // x20
  Il2CppObject **v142; // x19
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7

  if ( (byte_4B1596A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v5, v6);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24);
    sub_1BCA7E0(&SoundManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__, v29, v30);
    sub_1BCA7E0(&Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, v31, v32);
    sub_1BCA7E0(&Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__, v33, v34);
    sub_1BCA7E0(&DataLostResetManager___c__DisplayClass11_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&DataLostResetManager___c_TypeInfo, v37, v38);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v39, v40);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v43, v44);
    byte_4B1596A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    whiteOutSe_5__3 = this->fields._whiteOutSe_5__3;
    this->fields.__1__state = -1;
    if ( !System_String__IsNullOrEmpty(whiteOutSe_5__3, 0LL) )
    {
      v105 = Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__;
      if ( (*((_BYTE *)Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__ + 83) & 2) != 0 )
        v105 = (_QWORD *)sub_1BCA7F8(Method_DataLostResetManager__PlayGameOverAnimation_d__11_MoveNext__);
      v106 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v105, v105[4]);
      OverwriteAssetSoundName__PlaySe(v106, this->fields._whiteOutSe_5__3, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    whiteOutTime_5__2 = this->fields._whiteOutTime_5__2;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v110 = (CommonUI_o *)Instance;
    v114 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v111, v112, v113);
    System_Action___ctor(
      v114,
      _8__1,
      Method_DataLostResetManager___c__DisplayClass11_0__PlayGameOverAnimation_b__1__,
      0LL);
    if ( !v110 )
      goto LABEL_70;
    CommonUI__maskFadeout(v110, 2, whiteOutTime_5__2, v114, 0LL);
    goto LABEL_39;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v115 = DataLostResetManager___c_TypeInfo;
    if ( !DataLostResetManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager___c_TypeInfo, method);
      v115 = DataLostResetManager___c_TypeInfo;
    }
    _9__11_0 = v115->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v115->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v115, method);
        v115 = DataLostResetManager___c_TypeInfo;
      }
      v117 = (Il2CppObject *)v115->static_fields->__9;
      _9__11_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
      System_Func_bool____ctor(_9__11_0, v117, Method_DataLostResetManager___c__PlayGameOverAnimation_b__11_0__, 0LL);
      static_fields = DataLostResetManager___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = _9__11_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
        (int64_t)_9__11_0,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
    }
    v125 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, method, v2, v3);
    UnityEngine_WaitWhile___ctor(v125, _9__11_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v125;
    p__2__current = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v125, v127, v128, v129, v130, v131, v132);
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
  v46 = (Il2CppObject *)sub_1BCAA2C(DataLostResetManager___c__DisplayClass11_0_TypeInfo, method, v2, v3);
  System_Object___ctor(v46, 0LL);
  this->fields.__8__1 = (struct DataLostResetManager___c__DisplayClass11_0_o *)v46;
  p__8__1 = &this->fields.__8__1;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__8__1, (int64_t)v46, v48, v49, v50, v51, v52, v53);
  clip = (int64_t)this->fields.__8__1;
  if ( !clip )
    goto LABEL_70;
  endAction = this->fields.endAction;
  *(_QWORD *)(clip + 24) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(clip + 24), (int64_t)endAction, v55, v56, v57, v58, v59, v60);
  eventId = this->fields.eventId;
  warId = this->fields.warId;
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v63);
  EventAssetName = DataLostResetManager__GetEventAssetName(eventId, warId, v64);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v67);
  AssetStorage = AssetManager__getAssetStorage(EventAssetName, 0LL);
  if ( AssetStorage )
  {
    v71 = AssetStorage;
    v72 = DataLostResetManager_TypeInfo;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v70);
      v72 = DataLostResetManager_TypeInfo;
    }
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                v71,
                                v72->static_fields->PREFAB_EFFECT_NAME,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      v76 = *p__8__1;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
      clip = (int64_t)UnityEngine_Object__Instantiate_object_(
                        Object_object__49237568,
                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v76 )
      {
        v76->fields.gameOverEffect = (struct UnityEngine_GameObject_o *)clip;
        sub_1BCA784((PartyOrganizationUtility_o *)&v76->fields, clip, v77, v78, v79, v80, v81, v82);
        if ( *p__8__1 )
        {
          gameOverEffect = (*p__8__1)->fields.gameOverEffect;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v54);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v54, v83);
            byte_4B10F83 = 1;
          }
          clip = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v54);
            clip = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v85 = **(_QWORD **)(clip + 184);
          if ( v85 )
          {
            GameObjectExtensions__SafeSetParent_34336992(gameOverEffect, *(UnityEngine_GameObject_o **)(v85 + 336), 0LL);
            this->fields._whiteOutTime_5__2 = 1.5;
            v86 = StringLiteral_1/*""*/;
            this->fields._whiteOutSe_5__3 = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields._whiteOutSe_5__3,
              (int64_t)v86,
              v87,
              v88,
              v89,
              v90,
              v91,
              v92);
            v93 = this->fields.__8__1;
            if ( v93 )
            {
              clip = (int64_t)v93->fields.gameOverEffect;
              if ( clip )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)clip,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DataLostResetEffectComponent___);
                clip = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( (clip & 1) != 0 )
                {
                  if ( !Component_object )
                    goto LABEL_70;
                  v101 = *((float *)&Component_object[2].klass + 1);
                  v102 = *(float *)&Component_object[2].klass;
                  this->fields._whiteOutTime_5__2 = *(float *)&Component_object[2].monitor;
                  klass = (struct System_String_o *)Component_object[3].klass;
                  this->fields._whiteOutSe_5__3 = klass;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&this->fields._whiteOutSe_5__3,
                    (int64_t)klass,
                    v95,
                    v96,
                    v97,
                    v98,
                    v99,
                    v100);
                }
                else
                {
                  v102 = 1.5;
                  v101 = 6.5;
                }
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v54);
                SoundManager__fadeoutBgm(v102, 0LL);
                if ( *p__8__1 )
                {
                  clip = (int64_t)(*p__8__1)->fields.gameOverEffect;
                  if ( clip )
                  {
                    clip = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)clip,
                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    v133 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v134 = (UnityEngine_Object_o *)clip;
                      clip = (int64_t)v133->fields.gameOverEffect;
                      if ( clip )
                      {
                        v136 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)clip,
                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v135);
                        clip = UnityEngine_Object__op_Inequality(v134, 0LL, 0LL);
                        if ( (clip & 1) != 0 )
                        {
                          if ( v134 )
                          {
                            clip = (int64_t)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v134, 0LL);
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = (int64_t)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v134, 0LL);
                              if ( clip )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v134, name, 0LL);
LABEL_68:
                                v141 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(
                                                                         UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v54,
                                                                         v138,
                                                                         v139);
                                UnityEngine_WaitForSeconds___ctor(v141, v101, 0LL);
                                this->fields.__2__current = (Il2CppObject *)v141;
                                v142 = &this->fields.__2__current;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)v142,
                                  (int64_t)v141,
                                  v143,
                                  v144,
                                  v145,
                                  v146,
                                  v147,
                                  v148);
                                LOBYTE(AssetStorage) = 1;
                                *((_DWORD *)v142 - 2) = 1;
                                return (char)AssetStorage;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
                          clip = UnityEngine_Object__op_Inequality(v136, 0LL, 0LL);
                          if ( (clip & 1) == 0 )
                            goto LABEL_68;
                          if ( v136 )
                          {
                            clip = (int64_t)v136[5].klass;
                            if ( clip )
                            {
                              UnityEngine_AnimationClip__set_wrapMode((UnityEngine_AnimationClip_o *)clip, 8, 0LL);
                              clip = (int64_t)v136[5].klass;
                              if ( clip )
                              {
                                v140 = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
                                SimpleAnimation__Play_64539336((SimpleAnimation_o *)v136, v140, 0LL);
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
      sub_1BCAA3C(clip, v54);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DataLostResetManager__PlayGameOverAnimation_d__11_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15961 & 1) == 0 )
  {
    sub_1BCA7E0(&DataLostResetManager___c_TypeInfo, v1, v2);
    byte_4B15961 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DataLostResetManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DataLostResetManager___c_TypeInfo->static_fields->__9 = (struct DataLostResetManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DataLostResetManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall DataLostResetManager___c___ctor(DataLostResetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataLostResetManager___c___PlayGameOverAnimation_b__11_0(
        DataLostResetManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15962 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B15962 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *gameOverEffect; // x20
  struct System_Action_o *endAction; // x8

  if ( (byte_4B15963 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15963 = 1;
  }
  gameOverEffect = (UnityEngine_Object_o *)this->fields.gameOverEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(gameOverEffect, 0LL);
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
  __int64 v3; // x3
  DataLostResetManager___c__DisplayClass6_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x6
  struct System_Int32_array *idx; // x8
  int32_t eventId; // w21
  int32_t warId; // w22
  int32_t v22; // w23
  _BOOL4 isNoCancel; // w24
  DataLostResetManager_ClickDelegate_o *resetDelegate; // x20

  v5 = this;
  if ( (byte_4B15964 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&selectNo, method);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v6, v7);
    this = (DataLostResetManager___c__DisplayClass6_0_o *)sub_1BCA7E0(
                                                            &Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
                                                            v8,
                                                            v9);
    byte_4B15964 = 1;
  }
  _9__1 = v5->fields.__9__1;
  selectDialog = v5->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&selectNo, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_DataLostResetManager___c__DisplayClass6_0__OpenResetSelectDialog_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !selectDialog )
    goto LABEL_15;
  ResetSelectDialog__Close_39159640(selectDialog, _9__1, method);
  if ( selectNo )
  {
    idx = v5->fields.idx;
    if ( idx )
    {
      if ( selectNo - 1 >= idx->max_length )
        sub_1BCAA44(this, *(_QWORD *)&selectNo);
      eventId = v5->fields.eventId;
      warId = v5->fields.warId;
      v22 = idx->m_Items[selectNo];
      isNoCancel = v5->fields.isNoCancel;
      resetDelegate = v5->fields.resetDelegate;
      if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&selectNo);
      DataLostResetManager__OpenConfirmDialog(eventId, warId, selectNo, v22, isNoCancel, resetDelegate, v18);
      return;
    }
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&selectNo);
  }
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, *(_QWORD *)&selectNo);
  DataLostResetManager__SetTitleInfoTouchEnable(1, *(const MethodInfo **)&selectNo);
}


void __fastcall DataLostResetManager___c__DisplayClass6_0___OpenResetSelectDialog_b__1(
        DataLostResetManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4B15965 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15965 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(selectDialogObj, 0LL);
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
  DataLostResetManager___c__DisplayClass7_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *_9__1; // x22
  ResetConfirmDialog_o *confirmDialog; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x4
  struct DataLostResetManager_ClickDelegate_o *resetDelegate; // x8
  __int64 resetIdx; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v24; // x2
  int32_t eventId; // w20
  int32_t warId; // w21
  DataLostResetManager_ClickDelegate_o *v27; // x19
  struct DataLostResetManager_ClickDelegate_o *v28; // x8

  v5 = this;
  if ( (byte_4B15966 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v6, v7);
    this = (DataLostResetManager___c__DisplayClass7_0_o *)sub_1BCA7E0(
                                                            &Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
                                                            v8,
                                                            v9);
    byte_4B15966 = 1;
  }
  _9__1 = v5->fields.__9__1;
  confirmDialog = v5->fields.confirmDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_DataLostResetManager___c__DisplayClass7_0__OpenConfirmDialog_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !confirmDialog )
    sub_1BCAA3C(this, isDecide);
  ResetConfirmDialog__Close_39160248(confirmDialog, _9__1, method);
  if ( isDecide )
  {
    resetDelegate = v5->fields.resetDelegate;
    if ( resetDelegate )
    {
      resetIdx = (unsigned int)v5->fields.resetIdx;
      m_target = resetDelegate->fields.m_target;
      original_method_info = resetDelegate->fields.original_method_info;
      v24 = *(_QWORD *)&resetDelegate->fields.extra_arg;
LABEL_17:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64))m_target)(
        original_method_info,
        resetIdx,
        v24);
    }
  }
  else if ( v5->fields.isBackReturn )
  {
    eventId = v5->fields.eventId;
    warId = v5->fields.warId;
    v27 = v5->fields.resetDelegate;
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v18);
    DataLostResetManager__OpenResetSelectDialog(eventId, warId, 1, v27, v19);
  }
  else
  {
    if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v18);
    DataLostResetManager__SetTitleInfoTouchEnable(1, v18);
    v28 = v5->fields.resetDelegate;
    if ( v28 )
    {
      m_target = v28->fields.m_target;
      original_method_info = v28->fields.original_method_info;
      v24 = *(_QWORD *)&v28->fields.extra_arg;
      resetIdx = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
  }
}


void __fastcall DataLostResetManager___c__DisplayClass7_0___OpenConfirmDialog_b__1(
        DataLostResetManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *confirmDialogObj; // x19

  if ( (byte_4B15967 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15967 = 1;
  }
  confirmDialogObj = (UnityEngine_Object_o *)this->fields.confirmDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(confirmDialogObj, 0LL);
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
  DataLostResetManager___c__DisplayClass8_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x22
  ResetSelectDialog_o *selectDialog; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B15968 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&selectNo, method);
    this = (DataLostResetManager___c__DisplayClass8_0_o *)sub_1BCA7E0(
                                                            &Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
                                                            v5,
                                                            v6);
    byte_4B15968 = 1;
  }
  _9__1 = v4->fields.__9__1;
  selectDialog = v4->fields.selectDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&selectNo, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_DataLostResetManager___c__DisplayClass8_0__OpenBattleResultResetDialog_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !selectDialog )
    sub_1BCAA3C(this, *(_QWORD *)&selectNo);
  ResetSelectDialog__Close_39159640(selectDialog, _9__1, method);
  ActionExtensions__Call(v4->fields.closeAction, 0LL);
}


void __fastcall DataLostResetManager___c__DisplayClass8_0___OpenBattleResultResetDialog_b__1(
        DataLostResetManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectDialogObj; // x19

  if ( (byte_4B15969 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15969 = 1;
  }
  selectDialogObj = (UnityEngine_Object_o *)this->fields.selectDialogObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(selectDialogObj, 0LL);
}