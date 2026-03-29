void UserPresentListViewItem___ctor(
        UserPresentListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *presentData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  struct System_String_o *message; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *Entity; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  GrandQuestFolderBoardItem_o *p_svtEnt; // x0
  Il2CppObject *v55; // x0
  Il2CppObject *v56; // x0
  int32_t objectId; // w19
  struct ServantCostumeEntity_o *v58; // x0
  Il2CppObject *v59; // x0

  if ( (byte_4D2F715 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2F715 = 1;
  }
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.svtEnt = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.svtEnt, 0, v7, v8, v9, v10, v11, v12);
  this->fields.itemEnt = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemEnt, 0, v13, v14, v15, v16, v17, v18);
  this->fields.equipEnt = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipEnt, 0, v19, v20, v21, v22, v23, v24);
  this->fields.commandCodeEnt = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEnt, 0, v25, v26, v27, v28, v29, v30);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.usrPresentEnt,
    (int32_t)presentData,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !presentData )
LABEL_21:
    sub_1C93D2C(Instance, v38);
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0);
  this->fields.presentId = presentData->fields.presentId;
  this->fields.giftType = presentData->fields.giftType;
  message = presentData->fields.message;
  this->fields.presentMsg = message;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.presentMsg, (int32_t)message, v40, v41, v42, v43, v44, v45);
  switch ( this->fields.giftType )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 presentData->fields.objectId,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v53 = (int)Entity;
      this->fields.svtEnt = (struct ServantEntity_o *)Entity;
      p_svtEnt = (GrandQuestFolderBoardItem_o *)&this->fields.svtEnt;
      break;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_21;
      v55 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v53 = (int)v55;
      this->fields.itemEnt = (struct ItemEntity_o *)v55;
      p_svtEnt = (GrandQuestFolderBoardItem_o *)&this->fields.itemEnt;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_21;
      v56 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_3463274 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      v53 = (int)v56;
      this->fields.equipEnt = (struct EquipEntity_o *)v56;
      p_svtEnt = (GrandQuestFolderBoardItem_o *)&this->fields.equipEnt;
      break;
    case 9:
      objectId = presentData->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v58 = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      this->fields.costumeEnt = v58;
      v53 = (int)v58;
      p_svtEnt = (GrandQuestFolderBoardItem_o *)&this->fields.costumeEnt;
      break;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v59 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              presentData->fields.objectId,
              (const MethodInfo_3463274 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      v53 = (int)v59;
      this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)v59;
      p_svtEnt = (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEnt;
      break;
    default:
      return;
  }
  sub_1C93A78(p_svtEnt, v53, v47, v48, v49, v50, v51, v52);
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
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxEntity_o *v6; // x20
  struct ItemEntity_o *itemEnt; // x8
  int64_t v8; // x8
  struct UserPresentBoxEntity_o *v9; // x9

  v4 = this;
  if ( (byte_4D2F716 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    this = (UserPresentListViewItem_o *)sub_1C93AD4(&UserPresentBoxMaster_TypeInfo);
    byte_4D2F716 = 1;
  }
  v4->fields.sortValue0 = 0;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__GetFilter_44547292(sort, 13, 0) )
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
    v6 = v4->fields.usrPresentEnt;
    if ( !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    if ( !v6 )
      goto LABEL_22;
    if ( UserPresentBoxEntity__IsEnableFlag(v6, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0) )
LABEL_13:
      v4->fields.sortValue0 = 1;
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
      v8 = BalanceConfig_TypeInfo->static_fields->NoneExpireTime - itemEnt->fields.endedAt;
      goto LABEL_20;
    }
LABEL_22:
    sub_1C93D2C(this, sort);
  }
  v8 = 0;
LABEL_20:
  v9 = v4->fields.usrPresentEnt;
  v4->fields.sortValue0B = v8;
  if ( !v9 )
    goto LABEL_22;
  v4->fields.sortValue1 = v9->fields.presentId;
  return 1;
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
  __int64 v3; // x1
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_4D2F717 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&StringLiteral_8762/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_1C93AD4(&StringLiteral_19260/*"error"*/);
    byte_4D2F717 = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_41140096(this->fields.giftType, 0) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0, 0);
LABEL_26:
    sub_1C93D2C(svtEnt, v3);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(name, 0);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_19260/*"error"*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEnt = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8762/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
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
        sub_1C93D2C(usrPresentEnt, method);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct ListViewObject_o *v9; // x0
  __int64 naturalAligment; // x9

  v5 = blocked;
  if ( (byte_4D2F719 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UserPresentListViewObject_TypeInfo);
    byte_4D2F719 = 1;
  }
  this->fields.blocked = v5;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    v9 = this->fields.viewObject;
    if ( v9 )
    {
      naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment;
      if ( v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewObject_c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v9, blocked, v8);
        return;
      }
      sub_1C940C8(v9);
    }
    sub_1C93D2C(v9, v7);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct ListViewObject_o *v11; // x0
  __int64 naturalAligment; // x9

  v7 = checkBoxed;
  if ( (byte_4D2F718 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UserPresentListViewObject_TypeInfo);
    byte_4D2F718 = 1;
  }
  this->fields.checkBoxed = v7;
  this->fields.checkCount = count;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    v11 = this->fields.viewObject;
    if ( v11 )
    {
      naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment;
      if ( v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewObject_c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v11, checkBoxed, count, v10);
        return;
      }
      sub_1C940C8(v11);
    }
    sub_1C93D2C(v11, v9);
  }
}