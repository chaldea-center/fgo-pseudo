void UserPresentBoxEntity___ctor(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593960C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593960C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPresentBoxEntity__CreatePK(int64_t receiveUserId, int64_t presentId, const MethodInfo *method)
{
  if ( (byte_5939607 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_5939607 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           receiveUserId,
           presentId,
           (const MethodInfo_38210F4 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *UserPresentBoxEntity__CreatePrimaryKey(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPresentBoxEntity__CreatePK(this->fields.receiveUserId, this->fields.presentId, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UserPresentBoxEntity__GetCountText(
        UserPresentBoxEntity_o *this,
        int32_t gType,
        ItemEntity_o *itemEnt,
        int32_t num,
        const MethodInfo *method)
{
  bool IsCountableWithPlus; // w0
  __int64 *v8; // x8
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = num;
  if ( (byte_593960B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    this = (UserPresentBoxEntity_o *)sub_21FFC50(&StringLiteral_26616/*"×"*/);
    byte_593960B = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_21FFECC(this, *(_QWORD *)&gType);
    IsCountableWithPlus = ItemType__IsCountableWithPlus(itemEnt->fields.type, 0);
  }
  else
  {
    IsCountableWithPlus = (unsigned int)(gType - 3) < 2;
  }
  v8 = &StringLiteral_861/*"+"*/;
  if ( !IsCountableWithPlus )
    v8 = &StringLiteral_26616/*"×"*/;
  v9 = (System_String_o *)*v8;
  v10 = System_Int32__ToString_76925352((int32_t)&v12, (System_String_o *)StringLiteral_9604/*"N0"*/, 0);
  return System_String__Concat_75438412(v9, v10, 0);
}


void UserPresentBoxEntity__GetInfo(
        UserPresentBoxEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t giftType; // w8
  void *Instance; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x22
  __int64 *v15; // x8
  System_String_o *Name; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  LocalizationManager_c *v23; // x0
  System_String_o *unknownNameText; // x1
  UserPresentBoxEntity_o *v25; // x0
  const MethodInfo *v26; // x4
  int32_t v27; // w1
  int32_t num; // w3
  ItemEntity_o *v29; // x2
  System_String_o *v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t objectId; // w21
  __int64 v38; // x1
  ServantCostumeEntity_o *Entity; // x21
  System_String_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x1
  ItemEntity_o *v48; // x22

  if ( (byte_5939608 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6793/*"FRIENDSHIP_NAME"*/);
    sub_21FFC50(&StringLiteral_15412/*"USER_EXP_NAME"*/);
    sub_21FFC50(&StringLiteral_9061/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939608 = 1;
  }
  giftType = this->fields.giftType;
  if ( giftType > 3 )
  {
    if ( giftType <= 8 )
    {
      if ( giftType != 4 )
      {
        if ( giftType == 5 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
            if ( Instance )
            {
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.objectId,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
              if ( Instance )
              {
                v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
LABEL_23:
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13);
                Name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v14, 0);
                goto LABEL_41;
              }
            }
          }
          goto LABEL_55;
        }
        goto LABEL_30;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v15 = &StringLiteral_15412/*"USER_EXP_NAME"*/;
      goto LABEL_40;
    }
    if ( giftType == 9 )
    {
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_55;
      Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9061/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
      if ( !Entity )
        goto LABEL_55;
      v40 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0);
      LODWORD(unknownNameText) = (_DWORD)v40;
      *nameText = v40;
LABEL_49:
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)nameText,
        (int32_t)unknownNameText,
        (System_String_o *)countText,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      v30 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_50;
    }
    if ( giftType == 11 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
          if ( Instance )
          {
            v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 6);
            goto LABEL_23;
          }
        }
      }
LABEL_55:
      sub_21FFECC(Instance, v13);
    }
    goto LABEL_30;
  }
  if ( giftType != 1 )
  {
    if ( giftType == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( Instance )
          {
            v47 = (System_String_o *)*((_QWORD *)Instance + 3);
            v48 = (ItemEntity_o *)Instance;
            *nameText = v47;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v47, v41, v42, v43, v44, v45, v46);
            v27 = this->fields.giftType;
            num = this->fields.num;
            v29 = v48;
            goto LABEL_42;
          }
        }
      }
      goto LABEL_55;
    }
    if ( giftType == 3 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v15 = &StringLiteral_6793/*"FRIENDSHIP_NAME"*/;
LABEL_40:
      Name = LocalizationManager__Get((System_String_o *)*v15, 0);
      goto LABEL_41;
    }
LABEL_30:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
    if ( !byte_593385D )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_593385D = 1;
    }
    v23 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v23 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v23->static_fields->unknownNameText;
    *nameText = unknownNameText;
    goto LABEL_49;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.objectId,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_55;
  Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0, 0);
LABEL_41:
  *nameText = Name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)Name, v17, v18, v19, v20, v21, v22);
  v27 = this->fields.giftType;
  num = this->fields.num;
  v29 = 0;
LABEL_42:
  v30 = UserPresentBoxEntity__GetCountText(v25, v27, v29, num, v26);
LABEL_50:
  *countText = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)countText, (int32_t)v30, v31, v32, v33, v34, v35, v36);
}


bool UserPresentBoxEntity__IsEnableFlag(UserPresentBoxEntity_o *this, int32_t flagIndex, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.flag & (1 << flagIndex)) < 0) ^ v3 | ((this->fields.flag & (1 << flagIndex)) == 0));
}


// local variable allocation has failed, the output may be wrong!
bool UserPresentBoxEntity__IsExpired(UserPresentBoxEntity_o *this, bool checkItemExpireTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t Time; // x20
  const MethodInfo *v8; // x1
  __int64 v10; // x1
  int64_t v11; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593960A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593960A = 1;
  }
  entity = 0;
  if ( !checkItemExpireTime || this->fields.giftType != 2 )
    goto LABEL_13;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.objectId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
LABEL_13:
    v11 = UserPresentBoxEntity__expireAt(this, (const MethodInfo *)checkItemExpireTime);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    return v11 <= NetworkManager__getTime(0);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, checkItemExpireTime);
  Time = NetworkManager__getTime(0);
  Instance = (DataManager_o *)UserPresentBoxEntity__expireAt(this, v8);
  if ( (__int64)Instance <= Time )
    return 1;
  if ( !entity )
LABEL_21:
    sub_21FFECC(Instance, v6);
  return (__int64)entity[6].klass <= Time;
}


int64_t UserPresentBoxEntity__expireAt(UserPresentBoxEntity_o *this, const MethodInfo *method)
{
  UserPresentBoxMaster_c *v3; // x0
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v6; // x0
  int64_t createdAt; // x19

  if ( (byte_5939609 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UserPresentBoxMaster_TypeInfo);
    byte_5939609 = 1;
  }
  v3 = UserPresentBoxMaster_TypeInfo;
  if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, method);
    v3 = UserPresentBoxMaster_TypeInfo;
  }
  if ( ((1 << v3->static_fields->INDEFINITE_PERIOD) & this->fields.flag) < 1 )
  {
    v6 = BalanceConfig_TypeInfo;
    createdAt = this->fields.createdAt;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v6 = BalanceConfig_TypeInfo;
    }
    return createdAt + v6->static_fields->PresentBoxValidTime;
  }
  else
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v4 = BalanceConfig_TypeInfo;
    }
    return v4->static_fields->NoneExpireTime;
  }
}