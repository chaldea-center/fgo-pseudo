void GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37CE9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37CE9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void GiftEntity___ctor_42143040(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // d0

  if ( (byte_4C37CEA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37CEA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C32E7C(v9);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v10 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v10;
}


System_String_o *GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4C37CE8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C37CE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GiftEntity__CreatePrimaryKey(GiftEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GiftEntity__CreatePK(this->fields.id, this->fields.type, this->fields.objectId, v2);
}


void GiftEntity__GetInfo(
        GiftEntity_o *this,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  void *Instance; // x0
  ServantEntity_o *v8; // x22
  System_String_o *Name; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 *v12; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x1
  ItemEntity_o *v18; // x22
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *klass; // x1
  System_String_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x22
  System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *Entity; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  LocalizationManager_c *v39; // x0
  System_String_o **v40; // x0
  Il2CppObject *v41; // x19
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C37CEB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3667/*"COMMAND_CODE_UNIT"*/);
    sub_1C32C20(&StringLiteral_6520/*"FRIENDSHIP_UNIT"*/);
    sub_1C32C20(&StringLiteral_6519/*"FRIENDSHIP_NAME"*/);
    sub_1C32C20(&StringLiteral_14812/*"UNIT_INFO"*/);
    sub_1C32C20(&StringLiteral_14846/*"USER_EXP_UNIT"*/);
    sub_1C32C20(&StringLiteral_14845/*"USER_EXP_NAME"*/);
    sub_1C32C20(&StringLiteral_11107/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/);
    sub_1C32C20(&StringLiteral_12007/*"SERVANT_UNIT"*/);
    sub_1C32C20(&StringLiteral_5749/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C32C20(&StringLiteral_11634/*"SERVANT_EQUIP_UNIT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37CEB = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v8 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0, 0);
      *nameText = Name;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)Name, v10, v11);
      if ( ServantEntity__get_IsServant(v8, 0) || ServantEntity__get_IsServantMaterialTd(v8, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = &StringLiteral_12007/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v8, 0)
             || ServantEntity__get_IsCombineMaterial(v8, 0)
             || ServantEntity__get_IsStatusUp(v8, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = &StringLiteral_11634/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = &StringLiteral_5749/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_68;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v17 = (System_String_o *)*((_QWORD *)Instance + 3);
      v18 = (ItemEntity_o *)Instance;
      *nameText = v17;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)v17, v15, v16);
      v19 = ItemEntity__GetCountText(v18, this->fields.num, 0);
      LODWORD(klass) = (_DWORD)v19;
      *countText = v19;
      goto LABEL_53;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6519/*"FRIENDSHIP_NAME"*/, 0);
      *nameText = v23;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)v23, v24, v25);
      v12 = &StringLiteral_6520/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_68;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_14845/*"USER_EXP_NAME"*/, 0);
      *nameText = v26;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)v26, v27, v28);
      v12 = &StringLiteral_14846/*"USER_EXP_UNIT"*/;
      goto LABEL_68;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(v29, 0);
      *nameText = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)v30, v31, v32);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_14812/*"UNIT_INFO"*/;
      goto LABEL_68;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, StringLiteral_1/*""*/, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
      goto LABEL_53;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      if ( !Instance )
        goto LABEL_72;
      unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
      goto LABEL_52;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v33 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
      *nameText = v33;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)v33, v34, v35);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_3667/*"COMMAND_CODE_UNIT"*/;
LABEL_68:
      v43 = LocalizationManager__Get((System_String_o *)*v12, 0);
      num = this->fields.num;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v44, v45, v46, v47, v48, v49);
      v51 = System_String__Format(v43, v50, 0);
      *countText = v51;
      sub_1C32BC4((CGThumbnailListItem_o *)countText, (int32_t)v51, v52, v53);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
      if ( !Instance )
        goto LABEL_72;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 this->fields.objectId,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C32BC4((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, v37, v38);
      if ( !Entity )
        goto LABEL_72;
      klass = (System_String_o *)Entity[2].klass;
      *nameText = klass;
      goto LABEL_60;
    case 0x12:
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C32BC4((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, (int32_t)countText, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_72;
      v41 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              this->fields.objectId,
              (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, 0);
      if ( !v41 )
LABEL_72:
        sub_1C32E7C(Instance);
      v42 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)v41[1].monitor, 0);
      LODWORD(klass) = (_DWORD)v42;
      *nameText = v42;
LABEL_60:
      v40 = nameText;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C32D4C )
      {
        sub_1C32C20(&LocalizationManager_TypeInfo);
        byte_4C32D4C = 1;
      }
      v39 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v39->static_fields->unknownNameText;
LABEL_52:
      *nameText = unknownNameText;
      sub_1C32BC4((CGThumbnailListItem_o *)nameText, (int32_t)unknownNameText, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
LABEL_53:
      v40 = countText;
      break;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)v40, (int32_t)klass, v20, v21);
}


System_String_o *GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
{
  void *Master_object; // x0
  System_String_o *result; // x0
  System_String_o *v5; // x20
  System_String_o *CountText; // x2
  __int64 *v7; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v8; // x19
  int32_t v9; // w19
  LocalizationManager_c *v10; // x0
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v13; // x20
  Il2CppObject *ShortName; // x0
  Il2CppObject *v15; // x19

  if ( (byte_4C37CEC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&StringLiteral_8713/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    sub_1C32C20(&StringLiteral_8712/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_6519/*"FRIENDSHIP_NAME"*/);
    sub_1C32C20(&StringLiteral_14845/*"USER_EXP_NAME"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37CEC = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0, 0);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v5 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, 0);
      return System_String__Concat_63556792(v5, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_6519/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_14845/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(v8, 0);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8713/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
      if ( !Entity )
        goto LABEL_62;
      v13 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0);
      goto LABEL_61;
    case 0xA:
      v9 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, v9 / 100, v9 % 100, 0);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v15 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8712/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0);
      if ( !v15 )
        goto LABEL_62;
      v13 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v15, 0);
LABEL_61:
      result = System_String__Format(v13, ShortName, 0);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_3396838 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0 )
      {
LABEL_62:
        sub_1C32E7C(Master_object);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C32D4C )
      {
        sub_1C32C20(&LocalizationManager_TypeInfo);
        byte_4C32D4C = 1;
      }
      v10 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = LocalizationManager_TypeInfo;
      }
      result = v10->static_fields->unknownNameText;
      break;
  }
  return result;
}


void GiftEntity__SetReplacedData(GiftEntity_o *this, bool flag, const MethodInfo *method)
{
  this->fields._IsReplacedData_k__BackingField = flag;
}


bool GiftEntity__checkGiftType(GiftEntity_o *this, int32_t checkType, const MethodInfo *method)
{
  return this->fields.type == checkType;
}


int32_t GiftEntity__getIconImageId(GiftEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C37CEE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37CEE = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, 0);
}


bool GiftEntity__get_IsReplacedData(GiftEntity_o *this, const MethodInfo *method)
{
  return this->fields._IsReplacedData_k__BackingField;
}


int32_t GiftEntity__get_mPrioredIconId(GiftEntity_o *this, const MethodInfo *method)
{
  return this->fields.prioredIconId;
}


bool GiftEntity__isQp(GiftEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4C37CED & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37CED = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  return Entity && (LODWORD(Entity[3].klass) == 1 || LODWORD(Entity[3].klass) == 16);
}


void GiftEntity__set_IsReplacedData(GiftEntity_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsReplacedData_k__BackingField = value;
}


void GiftEntity__set_mPrioredIconId(GiftEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.prioredIconId = value;
}