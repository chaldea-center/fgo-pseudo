// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItem___ctor(
        UserPresentListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *presentData,
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  struct System_String_o *message; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *Entity; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  ServantStatusBattleListViewItem_o *p_svtEnt; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  int32_t objectId; // w19
  struct ServantCostumeEntity_o *v39; // x0
  Il2CppObject *v40; // x0

  if ( (byte_4A6EBFF & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1B90010(&Method_DataManager_GetMasterData_EquipMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B90010(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v13);
    sub_1B90010(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A6EBFF = 1;
  }
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  this->fields.svtEnt = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEnt, 0, v16, v17);
  this->fields.itemEnt = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, 0, v18, v19);
  this->fields.equipEnt = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipEnt, 0, v20, v21);
  this->fields.commandCodeEnt = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEnt, 0, v22, v23);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.usrPresentEnt, (int32_t)presentData, v24, v25);
  if ( !presentData )
LABEL_21:
    sub_1B9026C(Instance, v27);
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0LL);
  this->fields.presentId = presentData->fields.presentId;
  this->fields.giftType = presentData->fields.giftType;
  message = presentData->fields.message;
  this->fields.presentMsg = message;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.presentMsg, (int32_t)message, v29, v30);
  switch ( this->fields.giftType )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v34 = (int)Entity;
      this->fields.svtEnt = (struct ServantEntity_o *)Entity;
      p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.svtEnt;
      break;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_21;
      v36 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v34 = (int)v36;
      this->fields.itemEnt = (struct ItemEntity_o *)v36;
      p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.itemEnt;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_21;
      v37 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_312C5A8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      v34 = (int)v37;
      this->fields.equipEnt = (struct EquipEntity_o *)v37;
      p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.equipEnt;
      break;
    case 9:
      objectId = presentData->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v39 = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      this->fields.costumeEnt = v39;
      v34 = (int)v39;
      p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.costumeEnt;
      break;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v40 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_312C5A8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v34 = (int)v40;
      this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)v40;
      p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEnt;
      break;
    default:
      return;
  }
  sub_1B8FFB4(p_svtEnt, v34, v32, v33);
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
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxEntity_o *v7; // x20
  struct ItemEntity_o *itemEnt; // x8
  int64_t v9; // x8
  struct UserPresentBoxEntity_o *v10; // x9
  bool result; // w0

  v4 = this;
  if ( (byte_4A6EC00 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, sort);
    this = (UserPresentListViewItem_o *)sub_1B90010(&UserPresentBoxMaster_TypeInfo, v5);
    byte_4A6EC00 = 1;
  }
  v4->fields.sortValue0 = 0LL;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__GetFilter_40839612(sort, 13, 0LL) )
  {
    usrPresentEnt = v4->fields.usrPresentEnt;
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
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
    v7 = v4->fields.usrPresentEnt;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    if ( !v7 )
      goto LABEL_22;
    if ( UserPresentBoxEntity__IsEnableFlag(v7, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
LABEL_13:
      v4->fields.sortValue0 = 1LL;
  }
  this = (UserPresentListViewItem_o *)UserPresentListViewItem__isItemLimitedPeriod(v4, (const MethodInfo *)sort);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserPresentListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    itemEnt = v4->fields.itemEnt;
    if ( itemEnt )
    {
      v9 = BalanceConfig_TypeInfo->static_fields->NoneExpireTime - itemEnt->fields.endedAt;
      goto LABEL_20;
    }
LABEL_22:
    sub_1B9026C(this, sort);
  }
  v9 = 0LL;
LABEL_20:
  v10 = v4->fields.usrPresentEnt;
  v4->fields.sortValue0B = v9;
  if ( !v10 )
    goto LABEL_22;
  result = 1;
  v4->fields.sortValue1 = v10->fields.presentId;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_4A6EC01 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, method);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    sub_1B90010(&StringLiteral_8683/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v4);
    sub_1B90010(&StringLiteral_19079/*"error"*/, v5);
    byte_4A6EC01 = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_37739920(this->fields.giftType, 0LL) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0LL);
LABEL_26:
    sub_1B9026C(svtEnt, v6);
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
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(name, 0LL);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_19079/*"error"*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEnt = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
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
        sub_1B9026C(usrPresentEnt, method);
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
  UnityEngine_Object_o *viewObject; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct ListViewObject_o *v10; // x0
  __int64 methodPtr_low; // x9

  v5 = blocked;
  if ( (byte_4A6EC03 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, blocked);
    sub_1B90010(&UserPresentListViewObject_TypeInfo, v6);
    byte_4A6EC03 = 1;
  }
  this->fields.blocked = v5;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v10 = this->fields.viewObject;
    if ( v10 )
    {
      methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewObject_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v10, blocked, v9);
        return;
      }
      sub_1B9052C(v10);
    }
    sub_1B9026C(v10, v8);
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
  UnityEngine_Object_o *viewObject; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct ListViewObject_o *v12; // x0
  __int64 methodPtr_low; // x9

  v7 = checkBoxed;
  if ( (byte_4A6EC02 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, checkBoxed);
    sub_1B90010(&UserPresentListViewObject_TypeInfo, v8);
    byte_4A6EC02 = 1;
  }
  this->fields.checkBoxed = v7;
  this->fields.checkCount = count;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v12 = this->fields.viewObject;
    if ( v12 )
    {
      methodPtr_low = LOBYTE(UserPresentListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v12->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (UserPresentListViewObject_c *)v12->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v12, checkBoxed, count, v11);
        return;
      }
      sub_1B9052C(v12);
    }
    sub_1B9026C(v12, v10);
  }
}