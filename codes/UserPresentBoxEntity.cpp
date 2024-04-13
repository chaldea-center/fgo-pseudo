void __fastcall UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E71DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E71DF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePK(
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E71DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__long___, presentId, (_DWORD)method, v3);
    byte_42E71DA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_1AE31E0 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserPresentBoxEntity__CreatePrimaryKey(
        UserPresentBoxEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPresentBoxEntity__CreatePK(this->fields.receiveUserId, this->fields.presentId, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPresentBoxEntity__GetCountText(
        UserPresentBoxEntity_o *this,
        int32_t gType,
        ItemEntity_o *itemEnt,
        int32_t num,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  bool IsCountableWithPlus; // w0
  __int64 *v14; // x8
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  v18 = num;
  if ( (byte_42E71DE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_699/*"+"*/, gType, (_DWORD)itemEnt, *(_QWORD *)&num);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v7, v8, v9);
    this = (UserPresentBoxEntity_o *)sub_B5D5C4(&StringLiteral_24017/*"×"*/, v10, v11, v12);
    byte_42E71DE = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B5D69C(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v14 = &StringLiteral_699/*"+"*/;
  if ( !IsCountableWithPlus )
    v14 = &StringLiteral_24017/*"×"*/;
  v15 = (System_String_o *)*v14;
  v16 = System_Int32__ToString_39741776((int32_t)&v18, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  return System_String__Concat_44577788(v15, v16, 0LL);
}


void __fastcall UserPresentBoxEntity__GetInfo(
        UserPresentBoxEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  DataManager_o *Instance; // x0
  __int64 v57; // x1
  System_String_o *Name; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  LocalizationManager_c *v65; // x0
  System_String_o *unknownNameText; // x1
  int32_t objectId; // w21
  ServantCostumeEntity_o *Entity; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_o *v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_o *datalist; // x1
  DataManager_o *v83; // x22
  UserPresentBoxEntity_o *v84; // x0
  const MethodInfo *v85; // x4
  int32_t giftType; // w1
  int32_t num; // w3
  ItemEntity_o *v88; // x2
  __int64 *v89; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x22

  if ( (byte_42E71DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)nameText, (_DWORD)countText, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_6533/*"FRIENDSHIP_NAME"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_14900/*"USER_EXP_NAME"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_8845/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1/*""*/, v53, v54, v55);
    byte_42E71DB = 1;
  }
  switch ( this->fields.giftType )
  {
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0LL);
      goto LABEL_50;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      datalist = (System_String_o *)Instance->fields.datalist;
      v83 = Instance;
      *nameText = datalist;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)datalist,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v88 = (ItemEntity_o *)v83;
      goto LABEL_51;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v89 = &StringLiteral_6533/*"FRIENDSHIP_NAME"*/;
      goto LABEL_37;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v89 = &StringLiteral_14900/*"USER_EXP_NAME"*/;
LABEL_37:
      Name = LocalizationManager__Get((System_String_o *)*v89, 0LL);
      goto LABEL_50;
    case 5:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_53;
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
      goto LABEL_46;
    case 9:
      objectId = this->fields.objectId;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_53;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
      if ( !Entity )
        goto LABEL_53;
      unknownNameText = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
      *nameText = unknownNameText;
      goto LABEL_24;
    case 0xB:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.objectId,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
      {
LABEL_53:
        sub_B5D69C(Instance, v57);
      }
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.saveNameList;
LABEL_46:
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(lookup, 0LL);
LABEL_50:
      *nameText = Name;
      sub_B5D560((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v59, v60, v61, v62, v63, v64);
      giftType = this->fields.giftType;
      num = this->fields.num;
      v88 = 0LL;
LABEL_51:
      v75 = UserPresentBoxEntity__GetCountText(v84, giftType, v88, num, v85);
      *countText = v75;
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_42E6772 )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)nameText, (_DWORD)countText, method);
        byte_42E6772 = 1;
      }
      v65 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v65->static_fields->unknownNameText;
      *nameText = unknownNameText;
LABEL_24:
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v75 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  sub_B5D560((BattleServantConfConponent_o *)countText, (System_Int32_array **)v75, v69, v70, v71, v72, v73, v74);
}


bool __fastcall UserPresentBoxEntity__IsEnableFlag(
        UserPresentBoxEntity_o *this,
        int32_t flagIndex,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.flag & (1 << flagIndex)) < 0) ^ v3 | ((this->fields.flag & (1 << flagIndex)) == 0));
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxEntity__IsExpired(
        UserPresentBoxEntity_o *this,
        bool checkItemExpireTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int64_t Time; // x20
  const MethodInfo *v18; // x1
  int64_t v20; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E71DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, checkItemExpireTime, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E71DD = 1;
  }
  entity = 0LL;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_14:
    v20 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    return v20 <= NetworkManager__getTime(0LL);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v18);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_22:
    sub_B5D69C(Instance, v16);
  return *(_QWORD *)&entity->fields.eventId <= Time;
}


int64_t __fastcall UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserPresentBoxMaster_c *v8; // x0
  BalanceConfig_c *v9; // x0
  int64_t createdAt; // x19
  BalanceConfig_c *v12; // x0

  if ( (byte_42E71DC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v5, v6, v7);
    byte_42E71DC = 1;
  }
  v8 = UserPresentBoxMaster_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    v8 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v8->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    createdAt = this->fields.createdAt;
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    return createdAt + v12->static_fields->PresentBoxValidTime;
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    return v9->static_fields->NoneExpireTime;
  }
}