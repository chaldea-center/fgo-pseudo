void GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6600 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6600 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void GiftEntity___ctor_42484180(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // d0

  if ( (byte_4CB6601 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6601 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C6BC60(v9, v10);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v11;
}


System_String_o *GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4CB65FF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CB65FF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_3139980 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v8; // x1
  ServantEntity_o *v9; // x22
  System_String_o *Name; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 *v13; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x1
  ItemEntity_o *v19; // x22
  System_String_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *klass; // x1
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x22
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *Entity; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  LocalizationManager_c *v40; // x0
  System_String_o **v41; // x0
  Il2CppObject *v42; // x19
  System_String_o *v43; // x0
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6602 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_3659/*"COMMAND_CODE_UNIT"*/);
    sub_1C6BA08(&StringLiteral_6513/*"FRIENDSHIP_UNIT"*/);
    sub_1C6BA08(&StringLiteral_6512/*"FRIENDSHIP_NAME"*/);
    sub_1C6BA08(&StringLiteral_14814/*"UNIT_INFO"*/);
    sub_1C6BA08(&StringLiteral_14845/*"USER_EXP_UNIT"*/);
    sub_1C6BA08(&StringLiteral_14844/*"USER_EXP_NAME"*/);
    sub_1C6BA08(&StringLiteral_11106/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/);
    sub_1C6BA08(&StringLiteral_12007/*"SERVANT_UNIT"*/);
    sub_1C6BA08(&StringLiteral_5740/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C6BA08(&StringLiteral_11634/*"SERVANT_EQUIP_UNIT"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6602 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v9 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0, 0);
      *nameText = Name;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)Name, v11, v12);
      if ( ServantEntity__get_IsServant(v9, 0) || ServantEntity__get_IsServantMaterialTd(v9, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_12007/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v9, 0)
             || ServantEntity__get_IsCombineMaterial(v9, 0)
             || ServantEntity__get_IsStatusUp(v9, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11634/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_5740/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_68;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v18 = (System_String_o *)*((_QWORD *)Instance + 3);
      v19 = (ItemEntity_o *)Instance;
      *nameText = v18;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)v18, v16, v17);
      v20 = ItemEntity__GetCountText(v19, this->fields.num, 0);
      LODWORD(klass) = (_DWORD)v20;
      *countText = v20;
      goto LABEL_53;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6512/*"FRIENDSHIP_NAME"*/, 0);
      *nameText = v24;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)v24, v25, v26);
      v13 = &StringLiteral_6513/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_68;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_14844/*"USER_EXP_NAME"*/, 0);
      *nameText = v27;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)v27, v28, v29);
      v13 = &StringLiteral_14845/*"USER_EXP_UNIT"*/;
      goto LABEL_68;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49268864(v30, 0);
      *nameText = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)v31, v32, v33);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_14814/*"UNIT_INFO"*/;
      goto LABEL_68;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, StringLiteral_1/*""*/, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
      goto LABEL_53;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      if ( !Instance )
        goto LABEL_72;
      unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
      goto LABEL_52;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v34 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
      *nameText = v34;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)v34, v35, v36);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_3659/*"COMMAND_CODE_UNIT"*/;
LABEL_68:
      v44 = LocalizationManager__Get((System_String_o *)*v13, 0);
      num = this->fields.num;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v46 = System_String__Format(v44, v45, 0);
      *countText = v46;
      sub_1C6B9AC((CGThumbnailListItem_o *)countText, (int32_t)v46, v47, v48);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
      if ( !Instance )
        goto LABEL_72;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 this->fields.objectId,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, v38, v39);
      if ( !Entity )
        goto LABEL_72;
      klass = (System_String_o *)Entity[2].klass;
      *nameText = klass;
      goto LABEL_60;
    case 0x12:
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, (int32_t)countText, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_72;
      v42 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              this->fields.objectId,
              (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, 0);
      if ( !v42 )
LABEL_72:
        sub_1C6BC60(Instance, v8);
      v43 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)v42[1].monitor, 0);
      LODWORD(klass) = (_DWORD)v43;
      *nameText = v43;
LABEL_60:
      v41 = nameText;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CB159D )
      {
        sub_1C6BA08(&LocalizationManager_TypeInfo);
        byte_4CB159D = 1;
      }
      v40 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v40->static_fields->unknownNameText;
LABEL_52:
      *nameText = unknownNameText;
      sub_1C6B9AC((CGThumbnailListItem_o *)nameText, (int32_t)unknownNameText, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
LABEL_53:
      v41 = countText;
      break;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v41, (int32_t)klass, v21, v22);
}


System_String_o *GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  System_String_o *v6; // x20
  System_String_o *CountText; // x2
  __int64 *v8; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v9; // x19
  int32_t v10; // w19
  LocalizationManager_c *v11; // x0
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v14; // x20
  Il2CppObject *ShortName; // x0
  Il2CppObject *v16; // x19

  if ( (byte_4CB6603 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C6BA08(&StringLiteral_8711/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    sub_1C6BA08(&StringLiteral_8710/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_6512/*"FRIENDSHIP_NAME"*/);
    sub_1C6BA08(&StringLiteral_14844/*"USER_EXP_NAME"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6603 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0, 0);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v6 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, 0);
      return System_String__Concat_64005056(v6, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_6512/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_14844/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49268864(v9, 0);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8711/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
      if ( !Entity )
        goto LABEL_62;
      v14 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0);
      goto LABEL_61;
    case 0xA:
      v10 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, v10 / 100, v10 % 100, 0);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v16 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_33F90DC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8710/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0);
      if ( !v16 )
        goto LABEL_62;
      v14 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v16, 0);
LABEL_61:
      result = System_String__Format(v14, ShortName, 0);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_33F90DC *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0 )
      {
LABEL_62:
        sub_1C6BC60(Master_object, v4);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CB159D )
      {
        sub_1C6BA08(&LocalizationManager_TypeInfo);
        byte_4CB159D = 1;
      }
      v11 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager_TypeInfo;
      }
      result = v11->static_fields->unknownNameText;
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
  __int64 v4; // x1

  if ( (byte_4CB6605 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6605 = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
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
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CB6604 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6604 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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