void GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C275F1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void GiftEntity___ctor_42013572(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // d0

  if ( (byte_4C275F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C275F2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C2D6EC(v9, v10);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v11;
}


System_String_o *GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4C275F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C275F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *klass; // x1
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v31; // x22
  System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *Entity; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  LocalizationManager_c *v41; // x0
  System_String_o **v42; // x0
  Il2CppObject *v43; // x19
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C275F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3660/*"COMMAND_CODE_UNIT"*/);
    sub_1C2D490(&StringLiteral_6515/*"FRIENDSHIP_UNIT"*/);
    sub_1C2D490(&StringLiteral_6514/*"FRIENDSHIP_NAME"*/);
    sub_1C2D490(&StringLiteral_14809/*"UNIT_INFO"*/);
    sub_1C2D490(&StringLiteral_14843/*"USER_EXP_UNIT"*/);
    sub_1C2D490(&StringLiteral_14842/*"USER_EXP_NAME"*/);
    sub_1C2D490(&StringLiteral_11101/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/);
    sub_1C2D490(&StringLiteral_12001/*"SERVANT_UNIT"*/);
    sub_1C2D490(&StringLiteral_5741/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C2D490(&StringLiteral_11628/*"SERVANT_EQUIP_UNIT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C275F3 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v9 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0, 0);
      *nameText = Name;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)Name, v11, v12);
      if ( ServantEntity__get_IsServant(v9, 0) || ServantEntity__get_IsServantMaterialTd(v9, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_12001/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v9, 0)
             || ServantEntity__get_IsCombineMaterial(v9, 0)
             || ServantEntity__get_IsStatusUp(v9, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11628/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_5741/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_68;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v18 = (System_String_o *)*((_QWORD *)Instance + 3);
      v19 = (ItemEntity_o *)Instance;
      *nameText = v18;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)v18, v16, v17);
      v21 = ItemEntity__GetCountText(v19, this->fields.num, v20);
      LODWORD(klass) = (_DWORD)v21;
      *countText = v21;
      goto LABEL_53;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6514/*"FRIENDSHIP_NAME"*/, 0);
      *nameText = v25;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)v25, v26, v27);
      v13 = &StringLiteral_6515/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_68;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_14842/*"USER_EXP_NAME"*/, 0);
      *nameText = v28;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)v28, v29, v30);
      v13 = &StringLiteral_14843/*"USER_EXP_UNIT"*/;
      goto LABEL_68;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(v31, 0);
      *nameText = v32;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)v32, v33, v34);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_14809/*"UNIT_INFO"*/;
      goto LABEL_68;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, StringLiteral_1/*""*/, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
      goto LABEL_53;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      if ( !Instance )
        goto LABEL_72;
      unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
      goto LABEL_52;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v35 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
      *nameText = v35;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)v35, v36, v37);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_3660/*"COMMAND_CODE_UNIT"*/;
LABEL_68:
      v45 = LocalizationManager__Get((System_String_o *)*v13, 0);
      num = this->fields.num;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v46, v47, v48);
      v50 = System_String__Format(v45, v49, 0);
      *countText = v50;
      sub_1C2D434((CGThumbnailListItem_o *)countText, (int32_t)v50, v51, v52);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
      if ( !Instance )
        goto LABEL_72;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 this->fields.objectId,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C2D434((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, v39, v40);
      if ( !Entity )
        goto LABEL_72;
      klass = (System_String_o *)Entity[2].klass;
      *nameText = klass;
      goto LABEL_60;
    case 0x12:
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C2D434((CGThumbnailListItem_o *)countText, StringLiteral_1/*""*/, (int32_t)countText, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_72;
      v43 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              this->fields.objectId,
              (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11101/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, 0);
      if ( !v43 )
LABEL_72:
        sub_1C2D6EC(Instance, v8);
      v44 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)v43[1].monitor, 0);
      LODWORD(klass) = (_DWORD)v44;
      *nameText = v44;
LABEL_60:
      v42 = nameText;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C2267D )
      {
        sub_1C2D490(&LocalizationManager_TypeInfo);
        byte_4C2267D = 1;
      }
      v41 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v41->static_fields->unknownNameText;
LABEL_52:
      *nameText = unknownNameText;
      sub_1C2D434((CGThumbnailListItem_o *)nameText, (int32_t)unknownNameText, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
LABEL_53:
      v42 = countText;
      break;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v42, (int32_t)klass, v22, v23);
}


System_String_o *GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4C275F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&StringLiteral_8707/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    sub_1C2D490(&StringLiteral_8706/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_6514/*"FRIENDSHIP_NAME"*/);
    sub_1C2D490(&StringLiteral_14842/*"USER_EXP_NAME"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C275F4 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0, 0);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v7 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v6);
      return System_String__Concat_63496112(v7, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_6514/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_14842/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(v10, 0);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8707/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
      if ( !Entity )
        goto LABEL_62;
      v15 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0);
      goto LABEL_61;
    case 0xA:
      v11 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, v11 / 100, v11 % 100, 0);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v17 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8706/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0);
      if ( !v17 )
        goto LABEL_62;
      v15 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v17, 0);
LABEL_61:
      result = System_String__Format(v15, ShortName, 0);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0 )
      {
LABEL_62:
        sub_1C2D6EC(Master_object, v4);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C2267D )
      {
        sub_1C2D490(&LocalizationManager_TypeInfo);
        byte_4C2267D = 1;
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
  const MethodInfo *v4; // x1

  if ( (byte_4C275F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C275F6 = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, v4);
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

  if ( (byte_4C275F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C275F5 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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