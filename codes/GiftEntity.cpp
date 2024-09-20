void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B431 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B431 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void __fastcall GiftEntity___ctor_39365712(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // d0

  if ( (byte_4A5B432 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B432 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B8880C(v9, v10);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v11;
}


System_String_o *__fastcall GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4A5B430 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B430 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GiftEntity__CreatePrimaryKey(GiftEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GiftEntity__CreatePK(this->fields.id, this->fields.type, this->fields.objectId, v2);
}


void __fastcall GiftEntity__GetInfo(
        GiftEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  ServantEntity_o *v9; // x22
  System_String_o *Name; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 *v13; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  LocalizationManager_c *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *klass; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x1
  ItemEntity_o *v23; // x22
  const MethodInfo *v24; // x2
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v32; // x22
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o **v36; // x0
  System_String_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *Entity; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5B433 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3740/*"COMMAND_CODE_UNIT"*/);
    sub_1B885B0(&StringLiteral_6489/*"FRIENDSHIP_UNIT"*/);
    sub_1B885B0(&StringLiteral_6488/*"FRIENDSHIP_NAME"*/);
    sub_1B885B0(&StringLiteral_14797/*"UNIT_INFO"*/);
    sub_1B885B0(&StringLiteral_14832/*"USER_EXP_UNIT"*/);
    sub_1B885B0(&StringLiteral_14831/*"USER_EXP_NAME"*/);
    sub_1B885B0(&StringLiteral_11950/*"SERVANT_UNIT"*/);
    sub_1B885B0(&StringLiteral_5745/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1B885B0(&StringLiteral_11602/*"SERVANT_EQUIP_UNIT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B433 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v9 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0LL);
      *nameText = Name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)Name, v11, v12);
      if ( ServantEntity__get_IsServant(v9, 0LL) || ServantEntity__get_IsServantMaterialTd(v9, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11950/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v9, 0LL)
             || ServantEntity__get_IsCombineMaterial(v9, 0LL)
             || ServantEntity__get_IsStatusUp(v9, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11602/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_5745/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_61;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v22 = (System_String_o *)*((_QWORD *)Instance + 3);
      v23 = (ItemEntity_o *)Instance;
      *nameText = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v22, v20, v21);
      v25 = ItemEntity__GetCountText(v23, this->fields.num, v24);
      LODWORD(klass) = (_DWORD)v25;
      *countText = v25;
      goto LABEL_43;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6488/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v26, v27, v28);
      v13 = &StringLiteral_6489/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_61;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_14831/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v29;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v29, v30, v31);
      v13 = &StringLiteral_14832/*"USER_EXP_UNIT"*/;
      goto LABEL_61;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(v32, 0LL);
      *nameText = v33;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v33, v34, v35);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_14797/*"UNIT_INFO"*/;
      goto LABEL_61;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)nameText,
        (int32_t)StringLiteral_1/*""*/,
        (int32_t)countText,
        (int32_t)method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = (_DWORD)StringLiteral_1/*""*/;
      goto LABEL_43;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = ServantCostumeMaster__GetEntity(
                   (ServantCostumeMaster_o *)Instance,
                   objectId / 100,
                   objectId % 100,
                   0LL);
      if ( !Instance )
        goto LABEL_65;
      unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
      goto LABEL_23;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v37 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
      *nameText = v37;
      sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v37, v38, v39);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_3740/*"COMMAND_CODE_UNIT"*/;
LABEL_61:
      v43 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
      num = this->fields.num;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v44, v45, v46);
      v48 = System_String__Format(v43, v47, 0LL);
      *countText = v48;
      sub_1B88554((ServantStatusBattleListViewItem_o *)countText, (int32_t)v48, v49, v50);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
        || (Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__),
            *countText = (System_String_o *)StringLiteral_1/*""*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v41, v42),
            !Entity) )
      {
LABEL_65:
        sub_1B8880C(Instance, v8);
      }
      klass = (System_String_o *)Entity[2].klass;
      v36 = nameText;
      *nameText = klass;
      goto LABEL_44;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4A56A2D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A56A2D = 1;
      }
      v16 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v16->static_fields->unknownNameText;
LABEL_23:
      *nameText = unknownNameText;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)nameText,
        (int32_t)unknownNameText,
        (int32_t)countText,
        (int32_t)method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = (_DWORD)StringLiteral_1/*""*/;
LABEL_43:
      v36 = countText;
LABEL_44:
      sub_1B88554((ServantStatusBattleListViewItem_o *)v36, (int32_t)klass, v17, v18);
      return;
  }
}


System_String_o *__fastcall GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  const MethodInfo *v6; // x2
  System_String_o *v7; // x20
  System_String_o *CountText; // x2
  __int64 *v9; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v10; // x19
  int32_t v11; // w19
  LocalizationManager_c *v12; // x0
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v15; // x20
  Il2CppObject *ShortName; // x0
  Il2CppObject *v17; // x19

  if ( (byte_4A5B434 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&StringLiteral_8682/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    sub_1B885B0(&StringLiteral_8681/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_6488/*"FRIENDSHIP_NAME"*/);
    sub_1B885B0(&StringLiteral_14831/*"USER_EXP_NAME"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B434 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0LL);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v7 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v6);
      return System_String__Concat_61718292(v7, (System_String_o *)StringLiteral_117/*" "*/, CountText, 0LL);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_6488/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_14831/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0LL);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(v10, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !Entity )
        goto LABEL_62;
      v15 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0LL);
      goto LABEL_61;
    case 0xA:
      v11 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity(
                        (ServantCostumeMaster_o *)Master_object,
                        v11 / 100,
                        v11 % 100,
                        0LL);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v17 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8681/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v17 )
        goto LABEL_62;
      v15 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v17, 0LL);
LABEL_61:
      result = System_String__Format(v15, ShortName, 0LL);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_62:
        sub_1B8880C(Master_object, v4);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4A56A2D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A56A2D = 1;
      }
      v12 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = LocalizationManager_TypeInfo;
      }
      result = v12->static_fields->unknownNameText;
      break;
  }
  return result;
}


void __fastcall GiftEntity__SetReplacedData(GiftEntity_o *this, bool flag, const MethodInfo *method)
{
  this->fields._IsReplacedData_k__BackingField = flag;
}


bool __fastcall GiftEntity__checkGiftType(GiftEntity_o *this, int32_t checkType, const MethodInfo *method)
{
  return this->fields.type == checkType;
}


int32_t __fastcall GiftEntity__getIconImageId(GiftEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A5B436 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B436 = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, v4);
}


bool __fastcall GiftEntity__get_IsReplacedData(GiftEntity_o *this, const MethodInfo *method)
{
  return this->fields._IsReplacedData_k__BackingField;
}


int32_t __fastcall GiftEntity__get_mPrioredIconId(GiftEntity_o *this, const MethodInfo *method)
{
  return this->fields.prioredIconId;
}


bool __fastcall GiftEntity__isQp(GiftEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B435 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B435 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  return Entity && (LODWORD(Entity[3].klass) == 1 || LODWORD(Entity[3].klass) == 16);
}


void __fastcall GiftEntity__set_IsReplacedData(GiftEntity_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsReplacedData_k__BackingField = value;
}


void __fastcall GiftEntity__set_mPrioredIconId(GiftEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.prioredIconId = value;
}