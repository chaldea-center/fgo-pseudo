void UserPresentListViewItem___ctor(
        UserPresentListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *presentData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Instance; // x0
  struct System_String_o *message; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Entity; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  CGThumbnailListItem_o *p_svtEnt; // x0
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x0
  int32_t objectId; // w19
  struct ServantCostumeEntity_o *v29; // x0
  Il2CppObject *v30; // x0

  if ( (byte_4C41CE6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C41CE6 = 1;
  }
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields.svtEnt = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtEnt, 0, v7, v8);
  this->fields.itemEnt = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemEnt, 0, v9, v10);
  this->fields.equipEnt = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipEnt, 0, v11, v12);
  this->fields.commandCodeEnt = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.commandCodeEnt, 0, v13, v14);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.usrPresentEnt, (int32_t)presentData, v15, v16);
  if ( !presentData )
LABEL_21:
    sub_1C372B4(Instance);
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0);
  this->fields.presentId = presentData->fields.presentId;
  this->fields.giftType = presentData->fields.giftType;
  message = presentData->fields.message;
  this->fields.presentMsg = message;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.presentMsg, (int32_t)message, v19, v20);
  switch ( this->fields.giftType )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v24 = (int)Entity;
      this->fields.svtEnt = (struct ServantEntity_o *)Entity;
      p_svtEnt = (CGThumbnailListItem_o *)&this->fields.svtEnt;
      break;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_21;
      v26 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v24 = (int)v26;
      this->fields.itemEnt = (struct ItemEntity_o *)v26;
      p_svtEnt = (CGThumbnailListItem_o *)&this->fields.itemEnt;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_21;
      v27 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      v24 = (int)v27;
      this->fields.equipEnt = (struct EquipEntity_o *)v27;
      p_svtEnt = (CGThumbnailListItem_o *)&this->fields.equipEnt;
      break;
    case 9:
      objectId = presentData->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v29 = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      this->fields.costumeEnt = v29;
      v24 = (int)v29;
      p_svtEnt = (CGThumbnailListItem_o *)&this->fields.costumeEnt;
      break;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v30 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v24 = (int)v30;
      this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)v30;
      p_svtEnt = (CGThumbnailListItem_o *)&this->fields.commandCodeEnt;
      break;
    default:
      return;
  }
  sub_1C36FFC(p_svtEnt, v24, v22, v23);
}


void UserPresentListViewItem__Finalize(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool UserPresentListViewItem__SetSortValue(
        UserPresentListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  UserPresentListViewItem_o *v4; // x19
  const MethodInfo *v5; // x1
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxEntity_o *v7; // x20
  struct ItemEntity_o *itemEnt; // x8
  int64_t v9; // x8
  struct UserPresentBoxEntity_o *v10; // x9
  bool result; // w0

  v4 = this;
  if ( (byte_4C41CE7 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    this = (UserPresentListViewItem_o *)sub_1C37058(&UserPresentBoxMaster_TypeInfo);
    byte_4C41CE7 = 1;
  }
  v4->fields.sortValue0 = 0;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__GetFilter_43866292(sort, 13, 0) )
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
           0) )
    {
      goto LABEL_13;
    }
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
    v7 = v4->fields.usrPresentEnt;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    if ( !v7 )
      goto LABEL_22;
    if ( UserPresentBoxEntity__IsEnableFlag(v7, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0) )
LABEL_13:
      v4->fields.sortValue0 = 1;
  }
  this = (UserPresentListViewItem_o *)UserPresentListViewItem__isItemLimitedPeriod(v4, v5);
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
    sub_1C372B4(this);
  }
  v9 = 0;
LABEL_20:
  v10 = v4->fields.usrPresentEnt;
  v4->fields.sortValue0B = v9;
  if ( !v10 )
    goto LABEL_22;
  result = 1;
  v4->fields.sortValue1 = v10->fields.presentId;
  return result;
}


int32_t UserPresentListViewItem__get_ImageId(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.presentImgId;
}


ItemEntity_o *UserPresentListViewItem__get_ItemEntity(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
}


int32_t UserPresentListViewItem__get_ListType(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.giftType;
}


System_String_o *UserPresentListViewItem__get_MsgText(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.presentMsg;
}


System_String_o *UserPresentListViewItem__get_NameText(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_4C41CE8 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&StringLiteral_8711/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_1C37058(&StringLiteral_19069/*"error"*/);
    byte_4C41CE8 = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_40427180(this->fields.giftType, 0) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0, 0);
LABEL_26:
    sub_1C372B4(svtEnt);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(name, 0);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_19069/*"error"*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEnt = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8711/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
  costumeEnt = this->fields.costumeEnt;
  if ( !costumeEnt )
    goto LABEL_26;
  return System_String__Format((System_String_o *)svtEnt, (Il2CppObject *)costumeEnt->fields.name, 0);
}


System_String_o *UserPresentListViewItem__get_NumText(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.presentNum;
}


int64_t UserPresentListViewItem__get_PresentId(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.presentId;
}


int32_t UserPresentListViewItem__get_PresentObjId(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8

  usrPresentEnt = this->fields.usrPresentEnt;
  if ( usrPresentEnt )
    return usrPresentEnt->fields.objectId;
  else
    return 0;
}


ServantCostumeEntity_o *UserPresentListViewItem__get_ServantCostumeEntity(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeEnt;
}


ServantEntity_o *UserPresentListViewItem__get_SvtEntity(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t UserPresentListViewItem__get_Type(UserPresentListViewItem_o *this, const MethodInfo *method)
{
  struct UserPresentBoxEntity_o *usrPresentEnt; // x8

  usrPresentEnt = this->fields.usrPresentEnt;
  if ( usrPresentEnt )
    return usrPresentEnt->fields.giftType;
  else
    return 0;
}


UserPresentBoxEntity_o *UserPresentListViewItem__get_UserPresentEntity(
        UserPresentListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.usrPresentEnt;
}


bool UserPresentListViewItem__isItemLimitedPeriod(UserPresentListViewItem_o *this, const MethodInfo *method)
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
        sub_1C372B4(usrPresentEnt);
      endedAt = itemEnt->fields.endedAt;
      LOBYTE(usrPresentEnt) = endedAt < UserPresentBoxEntity__expireAt(usrPresentEnt, 0);
    }
    else
    {
      LOBYTE(usrPresentEnt) = 0;
    }
  }
  return (char)usrPresentEnt;
}


void UserPresentListViewItem__setBlocked(UserPresentListViewItem_o *this, bool blocked, const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *viewObject; // x21
  const MethodInfo *v7; // x2
  struct ListViewObject_o *v8; // x0
  __int64 naturalAligment; // x9

  v5 = blocked;
  if ( (byte_4C41CEA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UserPresentListViewObject_TypeInfo);
    byte_4C41CEA = 1;
  }
  this->fields.blocked = v5;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    v8 = this->fields.viewObject;
    if ( v8 )
    {
      naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment;
      if ( v8->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewObject_c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v8, blocked, v7);
        return;
      }
      sub_1C37574(v8);
    }
    sub_1C372B4(v8);
  }
}


void UserPresentListViewItem__setCheckBoxed(
        UserPresentListViewItem_o *this,
        bool checkBoxed,
        int32_t count,
        const MethodInfo *method)
{
  bool v7; // w23
  UnityEngine_Object_o *viewObject; // x22
  const MethodInfo *v9; // x3
  struct ListViewObject_o *v10; // x0
  __int64 naturalAligment; // x9

  v7 = checkBoxed;
  if ( (byte_4C41CE9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UserPresentListViewObject_TypeInfo);
    byte_4C41CE9 = 1;
  }
  this->fields.checkBoxed = v7;
  this->fields.checkCount = count;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    v10 = this->fields.viewObject;
    if ( v10 )
    {
      naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment;
      if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewObject_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v10, checkBoxed, count, v9);
        return;
      }
      sub_1C37574(v10);
    }
    sub_1C372B4(v10);
  }
}