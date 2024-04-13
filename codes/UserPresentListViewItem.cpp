void __fastcall UserPresentListViewItem___ctor(
        UserPresentListViewItem_o *this,
        int32_t index,
        UserPresentBoxEntity_o *presentData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  DataManager_o *Instance; // x0
  __int64 v65; // x1
  struct System_String_o *message; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct ServantEntity_o *Entity; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  BattleServantConfConponent_o *p_svtEnt; // x0
  int32_t objectId; // w19
  struct ServantCostumeEntity_o *v82; // x0

  if ( (byte_42E6A5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, index, (_DWORD)presentData, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42E6A5E = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.svtEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.svtEnt, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.itemEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemEnt, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.equipEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipEnt, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.commandCodeEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandCodeEnt, 0LL, v52, v53, v54, v55, v56, v57);
  this->fields.usrPresentEnt = presentData;
  this->fields.checkBoxed = 0;
  this->fields.checkCount = -1;
  this->fields.blocked = 0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrPresentEnt,
    (System_Int32_array **)presentData,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !presentData )
LABEL_21:
    sub_B5D69C(Instance, v65);
  UserPresentBoxEntity__GetInfo(presentData, &this->fields.presentName, &this->fields.presentNum, 0LL);
  this->fields.presentId = presentData->fields.presentId;
  this->fields.giftType = presentData->fields.giftType;
  message = presentData->fields.message;
  this->fields.presentMsg = message;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.presentMsg,
    (System_Int32_array **)message,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  switch ( this->fields.giftType )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           presentData->fields.objectId,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.svtEnt = Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.svtEnt;
      break;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           presentData->fields.objectId,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      this->fields.itemEnt = (struct ItemEntity_o *)Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.itemEnt;
      break;
    case 5:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           presentData->fields.objectId,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      this->fields.equipEnt = (struct EquipEntity_o *)Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.equipEnt;
      break;
    case 9:
      objectId = presentData->fields.objectId;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_21;
      v82 = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0LL);
      this->fields.costumeEnt = v82;
      Entity = (struct ServantEntity_o *)v82;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.costumeEnt;
      break;
    case 0xB:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_21;
      Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                           presentData->fields.objectId,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      this->fields.commandCodeEnt = (struct CommandCodeEntity_o *)Entity;
      p_svtEnt = (BattleServantConfConponent_o *)&this->fields.commandCodeEnt;
      break;
    default:
      return;
  }
  sub_B5D560(p_svtEnt, (System_Int32_array **)Entity, v74, v75, v76, v77, v78, v79);
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
  __int64 v3; // x3
  UserPresentListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UserPresentBoxEntity_o *usrPresentEnt; // x20
  UserPresentBoxEntity_o *v10; // x20
  struct ItemEntity_o *itemEnt; // x8
  int64_t v12; // x8
  struct UserPresentBoxEntity_o *v13; // x9
  bool result; // w0

  v5 = this;
  if ( (byte_42E6A5F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    this = (UserPresentListViewItem_o *)sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v6, v7, v8);
    byte_42E6A5F = 1;
  }
  v5->fields.sortValue0 = 0LL;
  if ( !sort )
    goto LABEL_25;
  if ( ListViewSort__GetFilter_34050856(sort, 13, 0LL) )
  {
    usrPresentEnt = v5->fields.usrPresentEnt;
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
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
    this = (UserPresentListViewItem_o *)UserPresentBoxMaster_TypeInfo;
    v10 = v5->fields.usrPresentEnt;
    if ( (BYTE3(UserPresentBoxMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxMaster_TypeInfo);
    }
    if ( !v10 )
      goto LABEL_25;
    if ( UserPresentBoxEntity__IsEnableFlag(v10, UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_LIMIT, 0LL) )
LABEL_15:
      v5->fields.sortValue0 = 1LL;
  }
  this = (UserPresentListViewItem_o *)UserPresentListViewItem__isItemLimitedPeriod(v5, (const MethodInfo *)sort);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UserPresentListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    itemEnt = v5->fields.itemEnt;
    if ( itemEnt )
    {
      v12 = BalanceConfig_TypeInfo->static_fields->NoneExpireTime - itemEnt->fields.endedAt;
      goto LABEL_23;
    }
LABEL_25:
    sub_B5D69C(this, sort);
  }
  v12 = 0LL;
LABEL_23:
  v13 = v5->fields.usrPresentEnt;
  v5->fields.sortValue0B = v12;
  if ( !v13 )
    goto LABEL_25;
  result = 1;
  v5->fields.sortValue1 = v13->fields.presentId;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  ServantEntity_o *svtEnt; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct EquipEntity_o *equipEnt; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19
  struct CommandCodeEntity_o *commandCodeEnt; // x8
  struct ServantCostumeEntity_o *costumeEnt; // x8

  if ( (byte_42E6A60 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8845/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v11, v12, v13);
    byte_42E6A60 = 1;
  }
  if ( this->fields.svtEnt && Gift__IsServant_28424960(this->fields.giftType, 0LL) )
  {
    svtEnt = this->fields.svtEnt;
    if ( svtEnt )
      return ServantEntity__getName(svtEnt, 0, -1, 0LL);
LABEL_28:
    sub_B5D69C(svtEnt, v14);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(name, 0LL);
  }
  commandCodeEnt = this->fields.commandCodeEnt;
  if ( commandCodeEnt && this->fields.giftType == 11 )
  {
    name = commandCodeEnt->fields.name;
    goto LABEL_16;
  }
  if ( !this->fields.costumeEnt || this->fields.giftType != 9 )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  svtEnt = (ServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0LL);
  costumeEnt = this->fields.costumeEnt;
  if ( !costumeEnt )
    goto LABEL_28;
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
        sub_B5D69C(usrPresentEnt, method);
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


void __fastcall UserPresentListViewItem__setBlocked(
        UserPresentListViewItem_o *this,
        bool blocked,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *viewObject; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct ListViewObject_o *v12; // x0
  __int64 v13; // x9

  if ( (byte_42E6A62 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, blocked, (_DWORD)method, v3);
    sub_B5D5C4(&UserPresentListViewObject_TypeInfo, v6, v7, v8);
    byte_42E6A62 = 1;
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
    v12 = this->fields.viewObject;
    if ( v12 )
    {
      v13 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (UserPresentListViewObject_c *)v12->klass->_2.typeHierarchy[v13 - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setBlocked((UserPresentListViewObject_o *)v12, blocked, v11);
        return;
      }
      v12 = (struct ListViewObject_o *)sub_B5D990(v12);
    }
    sub_B5D69C(v12, v10);
  }
}


void __fastcall UserPresentListViewItem__setCheckBoxed(
        UserPresentListViewItem_o *this,
        bool checkBoxed,
        int32_t count,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *viewObject; // x22
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  struct ListViewObject_o *v13; // x0
  __int64 v14; // x9

  if ( (byte_42E6A61 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, checkBoxed, count, method);
    sub_B5D5C4(&UserPresentListViewObject_TypeInfo, v7, v8, v9);
    byte_42E6A61 = 1;
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
    v13 = this->fields.viewObject;
    if ( v13 )
    {
      v14 = *(&UserPresentListViewObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (UserPresentListViewObject_c *)v13->klass->_2.typeHierarchy[v14 - 1] == UserPresentListViewObject_TypeInfo )
      {
        UserPresentListViewObject__setCheckBoxed((UserPresentListViewObject_o *)v13, checkBoxed, count, v12);
        return;
      }
      v13 = (struct ListViewObject_o *)sub_B5D990(v13);
    }
    sub_B5D69C(v13, v11);
  }
}