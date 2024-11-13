// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItem___ctor(
        UserPresentListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *presentData,
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *Instance; // x0
  __int64 v56; // x1
  struct System_String_o *message; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *Entity; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  PartyOrganizationUtility_o *p_svtEnt; // x0
  int32_t objectId; // w19
  struct ServantCostumeEntity_o *v73; // x0

  if ( (byte_4B1502C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index, presentData);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B1502C = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.svtEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEnt, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.itemEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemEnt, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.equipEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipEnt, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.commandCodeEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.commandCodeEnt, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.usrPresentEnt,
    (int64_t)presentData,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !presentData )
LABEL_21:
    sub_1BCAA3C(Instance, v56);
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0LL);
  this->fields.presentId = presentData->fields.presentId;
  this->fields.giftType = presentData->fields.giftType;
  message = presentData->fields.message;
  this->fields.presentMsg = message;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.presentMsg, (int64_t)message, v58, v59, v60, v61, v62, v63);
  switch ( this->fields.giftType )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.svtEnt = (struct ServantEntity_o *)Entity;
      p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.svtEnt;
      break;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      this->fields.itemEnt = (struct ItemEntity_o *)Entity;
      p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.itemEnt;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      this->fields.equipEnt = (struct EquipEntity_o *)Entity;
      p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.equipEnt;
      break;
    case 9:
      objectId = presentData->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v73 = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      this->fields.costumeEnt = v73;
      Entity = (Il2CppObject *)v73;
      p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.costumeEnt;
      break;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)Entity;
      p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.commandCodeEnt;
      break;
    default:
      return;
  }
  sub_1BCA784(p_svtEnt, (int64_t)Entity, v65, v66, v67, v68, v69, v70);
}


void __fastcall UserPresentListViewItem__Finalize(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall UserPresentListViewItem__SetSortValue(
        UserPresentListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserPresentListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxEntity_o *v8; // x20
  struct ItemEntity_o *itemEnt; // x8
  int64_t v10; // x8
  struct UserPresentBoxEntity_o *v11; // x9
  bool result; // w0

  v4 = this;
  if ( (byte_4B1502D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, sort, method);
    this = (UserPresentListViewItem_o *)sub_1BCA7E0(&UserPresentBoxMaster_TypeInfo, v5, v6);
    byte_4B1502D = 1;
  }
  v4->fields.sortValue0 = 0LL;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__GetFilter_41507228(sort, 13, 0LL) )
  {
    usrPresentEnt = v4->fields.usrPresentEnt;
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, sort);
    if ( !usrPresentEnt )
      goto LABEL_22;
    if ( UserPresentBoxEntity__IsEnableFlag(
           usrPresentEnt,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0LL) )
    {
      goto LABEL_13;
    }
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
    v8 = v4->fields.usrPresentEnt;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, sort);
    if ( !v8 )
      goto LABEL_22;
    if ( UserPresentBoxEntity__IsEnableFlag(v8, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
LABEL_13:
      v4->fields.sortValue0 = 1LL;
  }
  this = (UserPresentListViewItem_o *)UserPresentListViewItem__isItemLimitedPeriod(v4, (const MethodInfo *)sort);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserPresentListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort);
    itemEnt = v4->fields.itemEnt;
    if ( itemEnt )
    {
      v10 = BalanceConfig_TypeInfo->static_fields->NoneExpireTime - itemEnt->fields.endedAt;
      goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(this, sort);
  }
  v10 = 0LL;
LABEL_20:
  v11 = v4->fields.usrPresentEnt;
  v4->fields.sortValue0B = v10;
  if ( !v11 )
    goto LABEL_22;
  result = 1;
  v4->fields.sortValue1 = v11->fields.presentId;
  return result;
}


int32_t __fastcall UserPresentListViewItem__get_ImageId(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.presentImgId;
}


ItemEntity_o *__fastcall UserPresentListViewItem__get_ItemEntity(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEnt;
}


int32_t __fastcall UserPresentListViewItem__get_ListType(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.giftType;
}


System_String_o *__fastcall UserPresentListViewItem__get_MsgText(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.presentMsg;
}


System_String_o *__fastcall UserPresentListViewItem__get_NameText(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_4B1502E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8806/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v8, v9);
    byte_4B1502E = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_38401528(this->fields.giftType, 0LL) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0LL);
LABEL_26:
    sub_1BCAA3C(svtEnt, method);
  }
  itemEnt = this->fields.itemEnt;
  if ( itemEnt && this->fields.giftType == 2 )
    return itemEnt->fields.name;
  equipEnt = this->fields.equipEnt;
  if ( equipEnt && this->fields.giftType == 5 )
  {
    name = equipEnt->fields.name;
LABEL_16:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(name, 0LL);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  svtEnt = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
  costumeEnt = this->fields.costumeEnt;
  if ( !costumeEnt )
    goto LABEL_26;
  return System_String__Format((System_String_o *)svtEnt, (Il2CppObject *)costumeEnt->fields.name, 0LL);
}


System_String_o *__fastcall UserPresentListViewItem__get_NumText(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.presentNum;
}


int64_t __fastcall UserPresentListViewItem__get_PresentId(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.presentId;
}


int32_t __fastcall UserPresentListViewItem__get_PresentObjId(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8

  usrPresentEnt = this->fields.usrPresentEnt;
  if ( usrPresentEnt )
    return usrPresentEnt->fields.objectId;
  else
    return 0;
}


ServantCostumeEntity_o *__fastcall UserPresentListViewItem__get_ServantCostumeEntity(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeEnt;
}


ServantEntity_o *__fastcall UserPresentListViewItem__get_SvtEntity(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t __fastcall UserPresentListViewItem__get_Type(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8

  usrPresentEnt = this->fields.usrPresentEnt;
  if ( usrPresentEnt )
    return usrPresentEnt->fields.giftType;
  else
    return 0;
}


UserPresentBoxEntity_o *__fastcall UserPresentListViewItem__get_UserPresentEntity(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.usrPresentEnt;
}


bool __fastcall UserPresentListViewItem__isItemLimitedPeriod(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *usrPresentEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  int64_t endedAt; // x19

  usrPresentEnt = this->fields.usrPresentEnt;
  if ( usrPresentEnt )
  {
    if ( usrPresentEnt->fields.giftType == 2 )
    {
      itemEnt = this->fields.itemEnt;
      if ( !itemEnt )
        sub_1BCAA3C(usrPresentEnt, method);
      endedAt = itemEnt->fields.endedAt;
      LOBYTE(usrPresentEnt) = endedAt < UserPresentBoxEntity__expireAt(usrPresentEnt, 0LL);
    }
    else
    {
      LOBYTE(usrPresentEnt) = 0;
    }
  }
  return (char)usrPresentEnt;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItem__setBlocked(
        UserPresentListViewItem_o *this,
        bool blocked,
        const MethodInfo *method)
{
  bool v5; // w22
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *viewObject; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct ListViewObject_o *v11; // x0
  __int64 methodPtr_low; // x9

  v5 = blocked;
  if ( (byte_4B15030 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, blocked, method);
    sub_1BCA7E0(&UserPresentListViewObject_TypeInfo, v6, v7);
    byte_4B15030 = 1;
  }
  this->fields.blocked = v5;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, blocked);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v11 = this->fields.viewObject;
    if ( v11 )
    {
      methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewObject_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v11, blocked, v10);
        return;
      }
      sub_1BCACFC(v11);
    }
    sub_1BCAA3C(v11, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItem__setCheckBoxed(
        UserPresentListViewItem_o *this,
        bool checkBoxed,
        int32_t count,
        const MethodInfo *method)
{
  bool v7; // w23
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  struct ListViewObject_o *v13; // x0
  __int64 methodPtr_low; // x9

  v7 = checkBoxed;
  if ( (byte_4B1502F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, checkBoxed, *(_QWORD *)&count);
    sub_1BCA7E0(&UserPresentListViewObject_TypeInfo, v8, v9);
    byte_4B1502F = 1;
  }
  this->fields.checkBoxed = v7;
  this->fields.checkCount = count;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, checkBoxed);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v13 = this->fields.viewObject;
    if ( v13 )
    {
      methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewObject_c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v13, checkBoxed, count, v12);
        return;
      }
      sub_1BCACFC(v13);
    }
    sub_1BCAA3C(v13, v11);
  }
}