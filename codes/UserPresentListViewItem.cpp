void UserPresentListViewItem___ctor(
        UserPresentListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *presentData,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  struct System_String_o *message; // x1
  int64_t presentId; // x8
  int32_t giftType; // w9
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w8
  Il2CppObject *v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  MissionNaviTransitionBoardItem_o *p_costumeEnt; // x0
  int32_t objectId; // w19
  struct ServantCostumeEntity_o *Entity; // x0

  if ( (byte_596F4D5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F4D5 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.svtEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtEnt, 0, v7, v8, v9, v10, v11, v12);
  this->fields.itemEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt, 0, v13, v14, v15, v16, v17, v18);
  this->fields.equipEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipEnt, 0, v19, v20, v21, v22, v23, v24);
  this->fields.commandCodeEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEnt, 0, v25, v26, v27, v28, v29, v30);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrPresentEnt,
    (int32_t)presentData,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !presentData )
    goto LABEL_28;
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0);
  message = presentData->fields.message;
  presentId = presentData->fields.presentId;
  giftType = presentData->fields.giftType;
  this->fields.presentMsg = message;
  this->fields.presentId = presentId;
  this->fields.giftType = giftType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.presentMsg,
    (int32_t)message,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = this->fields.giftType;
  if ( v48 > 5 )
  {
    if ( (unsigned int)(v48 - 6) >= 2 )
    {
      if ( v48 == 9 )
      {
        objectId = presentData->fields.objectId;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( Instance )
          {
            Entity = ServantCostumeMaster__GetEntity(
                       (ServantCostumeMaster_o *)Instance,
                       objectId / 100,
                       objectId % 100,
                       0);
            LODWORD(v49) = (_DWORD)Entity;
            this->fields.costumeEnt = Entity;
            p_costumeEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.costumeEnt;
            goto LABEL_27;
          }
        }
        goto LABEL_28;
      }
      if ( v48 == 11 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
          if ( Instance )
          {
            v49 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                    presentData->fields.objectId,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
            p_costumeEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEnt;
            this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)v49;
LABEL_27:
            sub_2213A04(p_costumeEnt, (int32_t)v49, v50, v51, v52, v53, v54, v55);
            return;
          }
        }
        goto LABEL_28;
      }
      return;
    }
LABEL_17:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v49 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                presentData->fields.objectId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_costumeEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.svtEnt;
        this->fields.svtEnt = (struct ServantEntity_o *)v49;
        goto LABEL_27;
      }
    }
    goto LABEL_28;
  }
  switch ( v48 )
  {
    case 1:
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( Instance )
        {
          v49 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  presentData->fields.objectId,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          p_costumeEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt;
          this->fields.itemEnt = (struct ItemEntity_o *)v49;
          goto LABEL_27;
        }
      }
      goto LABEL_28;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( Instance )
        {
          v49 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  presentData->fields.objectId,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
          p_costumeEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.equipEnt;
          this->fields.equipEnt = (struct EquipEntity_o *)v49;
          goto LABEL_27;
        }
      }
LABEL_28:
      sub_2213CDC(Instance, v38);
  }
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
  __int64 v5; // x2
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  __int64 v7; // x2
  UserPresentBoxEntity_o *v8; // x20
  __int64 v9; // x2
  struct ItemEntity_o *itemEnt; // x8
  int64_t v11; // x8
  struct UserPresentBoxEntity_o *v12; // x9
  bool result; // w0

  v4 = this;
  if ( (byte_596F4D6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (UserPresentListViewItem_o *)sub_2213A60(&UserPresentBoxMaster_TypeInfo);
    byte_596F4D6 = 1;
  }
  v4->fields.sortValue0 = 0;
  if ( !sort )
    goto LABEL_22;
  if ( ListViewSort__GetFilter_50882236(sort, 13, 0) )
  {
    usrPresentEnt = v4->fields.usrPresentEnt;
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
    if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, sort, v5);
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
    v8 = v4->fields.usrPresentEnt;
    if ( !*(&UserPresentBoxMaster_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo, sort, v7);
    if ( !v8 )
      goto LABEL_22;
    if ( UserPresentBoxEntity__IsEnableFlag(v8, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0) )
LABEL_13:
      v4->fields.sortValue0 = 1;
  }
  this = (UserPresentListViewItem_o *)UserPresentListViewItem__isItemLimitedPeriod(v4, (const MethodInfo *)sort);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserPresentListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort, v9);
    itemEnt = v4->fields.itemEnt;
    if ( itemEnt )
    {
      v11 = BalanceConfig_TypeInfo->static_fields->NoneExpireTime - itemEnt->fields.endedAt;
      goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(this, sort);
  }
  v11 = 0;
LABEL_20:
  v12 = v4->fields.usrPresentEnt;
  v4->fields.sortValue0B = v11;
  if ( !v12 )
    goto LABEL_22;
  result = 1;
  v4->fields.sortValue1 = v12->fields.presentId;
  return result;
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
  __int64 v2; // x2
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_596F4D7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&StringLiteral_9074/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596F4D7 = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_47387968(this->fields.giftType, 0) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0, 0, 0);
LABEL_26:
    sub_2213CDC(svtEnt, method);
  }
  itemEnt = this->fields.itemEnt;
  if ( itemEnt && this->fields.giftType == 2 )
    return itemEnt->fields.name;
  equipEnt = this->fields.equipEnt;
  if ( equipEnt && this->fields.giftType == 5 )
  {
    name = equipEnt->fields.name;
LABEL_16:
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(name, 0);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_19957/*"error"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  svtEnt = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9074/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
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
        sub_2213CDC(usrPresentEnt, method);
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


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewItem__setBlocked(UserPresentListViewItem_o *this, bool blocked, const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *viewObject; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x3
  struct ListViewObject_o *v11; // x0
  __int64 naturalAligment; // x9

  v5 = blocked;
  if ( (byte_596F4D9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UserPresentListViewObject_TypeInfo);
    byte_596F4D9 = 1;
  }
  v6 = UnityEngine_Object_TypeInfo;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  this->fields.blocked = v5;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, blocked, method);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    v11 = this->fields.viewObject;
    if ( v11 )
    {
      naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment;
      if ( v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewObject_c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v11, blocked, v9);
        return;
      }
      sub_221405C(v11, UserPresentListViewObject_TypeInfo, v9, v10);
    }
    sub_2213CDC(v11, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserPresentListViewItem__setCheckBoxed(
        UserPresentListViewItem_o *this,
        bool checkBoxed,
        int32_t count,
        const MethodInfo *method)
{
  bool v7; // w22
  UnityEngine_Object_c *v8; // x0
  UnityEngine_Object_o *viewObject; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  struct ListViewObject_o *v13; // x0
  __int64 naturalAligment; // x9

  v7 = checkBoxed;
  if ( (byte_596F4D8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UserPresentListViewObject_TypeInfo);
    byte_596F4D8 = 1;
  }
  v8 = UnityEngine_Object_TypeInfo;
  this->fields.checkBoxed = v7;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  this->fields.checkCount = count;
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, checkBoxed, *(_QWORD *)&count);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    v13 = this->fields.viewObject;
    if ( v13 )
    {
      naturalAligment = UserPresentListViewObject_TypeInfo->_2.naturalAligment;
      if ( v13->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (UserPresentListViewObject_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v13, checkBoxed, count, v12);
        return;
      }
      sub_221405C(v13, UserPresentListViewObject_TypeInfo, v11, v12);
    }
    sub_2213CDC(v13, v10);
  }
}