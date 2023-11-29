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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_String_o *message; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  BattleServantConfConponent_o *p_svtEnt; // x0
  int32_t objectId; // w19
  WebViewManager_o *v64; // x0
  ServantCostumeMaster_o *v65; // x0
  struct ServantCostumeEntity_o *v66; // x0
  WebViewManager_o *v67; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x0
  WebViewManager_o *v69; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x0
  WebViewManager_o *v71; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v72; // x0

  if ( (byte_40F8094 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F8094 = 1;
  }
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.svtEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.svtEnt, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.itemEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemEnt, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.equipEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipEnt, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.commandCodeEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCodeEnt, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrPresentEnt,
    (System_Int32_array **)presentData,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !presentData )
LABEL_21:
    sub_B170D4();
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0LL);
  this->fields.presentId = presentData->fields.presentId;
  this->fields.giftType = presentData->fields.giftType;
  message = presentData->fields.message;
  this->fields.presentMsg = message;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentMsg,
    (System_Int32_array **)message,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  switch ( this->fields.giftType )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           MasterData_WarQuestSelectionMaster,
                                           presentData->fields.objectId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.svtEnt = Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.svtEnt;
      break;
    case 2:
      v69 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v69 )
        goto LABEL_21;
      v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v69,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !v70 )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v70,
                                           presentData->fields.objectId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      this->fields.itemEnt = (struct ItemEntity_o *)Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.itemEnt;
      break;
    case 5:
      v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v71 )
        goto LABEL_21;
      v72 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v71,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !v72 )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v72,
                                           presentData->fields.objectId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      this->fields.equipEnt = (struct EquipEntity_o *)Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.equipEnt;
      break;
    case 9:
      objectId = presentData->fields.objectId;
      v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v64 )
        goto LABEL_21;
      v65 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v64,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !v65 )
        goto LABEL_21;
      v66 = ServantCostumeMaster__GetEntity(v65, objectId / 100, objectId % 100, 0LL);
      this->fields.costumeEnt = v66;
      Entity = (struct ServantEntity_o *)v66;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.costumeEnt;
      break;
    case 0xB:
      v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v67 )
        goto LABEL_21;
      v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v67,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !v68 )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v68,
                                           presentData->fields.objectId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.commandCodeEnt;
      break;
    default:
      return;
  }
  sub_B16F98(p_svtEnt, (System_Int32_array **)Entity, v56, v57, v58, v59, v60, v61);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxEntity_o *v8; // x20
  struct ItemEntity_o *itemEnt; // x8
  int64_t v10; // x8
  struct UserPresentBoxEntity_o *v11; // x9
  bool result; // w0

  if ( (byte_40F8095 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, sort);
    sub_B16FFC(&UserPresentBoxMaster_TypeInfo, v5);
    byte_40F8095 = 1;
  }
  this->fields.sortValue0 = 0LL;
  if ( !sort )
    goto LABEL_25;
  if ( ListViewSort__GetFilter_30229884(sort, 13, 0LL) )
  {
    usrPresentEnt = this->fields.usrPresentEnt;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    }
    if ( !usrPresentEnt )
      goto LABEL_25;
    if ( UserPresentBoxEntity__IsEnableFlag(
           usrPresentEnt,
           UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT,
           0LL) )
    {
      goto LABEL_15;
    }
    v8 = this->fields.usrPresentEnt;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    }
    if ( !v8 )
      goto LABEL_25;
    if ( UserPresentBoxEntity__IsEnableFlag(v8, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
LABEL_15:
      this->fields.sortValue0 = 1LL;
  }
  if ( UserPresentListViewItem__isItemLimitedPeriod(this, v6) )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    itemEnt = this->fields.itemEnt;
    if ( itemEnt )
    {
      v10 = BalanceConfig_TypeInfo->static_fields->NoneExpireTime - itemEnt->fields.endedAt;
      goto LABEL_23;
    }
LABEL_25:
    sub_B170D4();
  }
  v10 = 0LL;
LABEL_23:
  v11 = this->fields.usrPresentEnt;
  this->fields.sortValue0B = v10;
  if ( !v11 )
    goto LABEL_25;
  result = 1;
  this->fields.sortValue1 = v11->fields.presentId;
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
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  System_String_o *v12; // x0
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_40F8096 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8726, v4);
    sub_B16FFC(&StringLiteral_18326, v5);
    byte_40F8096 = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_28854740(this->fields.giftType, 0LL) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0LL);
LABEL_28:
    sub_B170D4();
  }
  itemEnt = this->fields.itemEnt;
  if ( itemEnt && this->fields.giftType == 2 )
    return itemEnt->fields.name;
  equipEnt = this->fields.equipEnt;
  if ( equipEnt && this->fields.giftType == 5 )
  {
    name = equipEnt->fields.name;
LABEL_16:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(name, 0LL);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_18326;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8726, 0LL);
  costumeEnt = this->fields.costumeEnt;
  if ( !costumeEnt )
    goto LABEL_28;
  return System_String__Format(v12, (Il2CppObject *)costumeEnt->fields.name, 0LL);
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
        sub_B170D4();
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
  __int64 v5; // x1
  UnityEngine_Object_o *viewObject; // x21
  const MethodInfo *v7; // x2
  struct ListViewObject_o *v8; // x0
  __int64 v9; // x9

  if ( (byte_40F8098 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, blocked);
    sub_B16FFC(&UserPresentListViewObject_TypeInfo, v5);
    byte_40F8098 = 1;
  }
  this->fields.blocked = blocked;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v8 = this->fields.viewObject;
    if ( v8 )
    {
      v9 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (UserPresentListViewObject_c *)v8->klass->_2.typeHierarchy[v9 - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v8, blocked, v7);
        return;
      }
      sub_B173C8(v8);
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewItem__setCheckBoxed(
        UserPresentListViewItem_o *this,
        bool checkBoxed,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *viewObject; // x22
  const MethodInfo *v9; // x3
  struct ListViewObject_o *v10; // x0
  __int64 v11; // x9

  if ( (byte_40F8097 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, checkBoxed);
    sub_B16FFC(&UserPresentListViewObject_TypeInfo, v7);
    byte_40F8097 = 1;
  }
  this->fields.checkCount = count;
  this->fields.checkBoxed = checkBoxed;
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    v10 = this->fields.viewObject;
    if ( v10 )
    {
      v11 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (UserPresentListViewObject_c *)v10->klass->_2.typeHierarchy[v11 - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v10, checkBoxed, count, v9);
        return;
      }
      sub_B173C8(v10);
    }
    sub_B170D4();
  }
}