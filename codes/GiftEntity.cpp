void GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CC85 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CC85 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
  this->fields._IsReplacedData_k__BackingField = 0;
  *(_QWORD *)&this->fields.prioredIconId = 0;
}


void GiftEntity___ctor_43100928(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // d0

  if ( (byte_4D2CC86 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CC86 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C942F0(v9, v10);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v11;
}


System_String_o *GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4D2CC84 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2CC84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  void *Instance; // x0
  __int64 v12; // x1
  ServantEntity_o *v13; // x22
  System_String_o *Name; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 *v21; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x1
  ItemEntity_o *v31; // x22
  const MethodInfo *v32; // x2
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_String_o *klass; // x1
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x22
  System_String_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_String_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  Il2CppObject *Entity; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  LocalizationManager_c *v77; // x0
  System_String_o **v78; // x0
  Il2CppObject *v79; // x19
  System_String_o *v80; // x0
  System_String_o *v81; // x21
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2CC87 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_3672/*"COMMAND_CODE_UNIT"*/);
    sub_1C94098(&StringLiteral_6528/*"FRIENDSHIP_UNIT"*/);
    sub_1C94098(&StringLiteral_6527/*"FRIENDSHIP_NAME"*/);
    sub_1C94098(&StringLiteral_14873/*"UNIT_INFO"*/);
    sub_1C94098(&StringLiteral_14904/*"USER_EXP_UNIT"*/);
    sub_1C94098(&StringLiteral_14903/*"USER_EXP_NAME"*/);
    sub_1C94098(&StringLiteral_11149/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/);
    sub_1C94098(&StringLiteral_12055/*"SERVANT_UNIT"*/);
    sub_1C94098(&StringLiteral_5754/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C94098(&StringLiteral_11682/*"SERVANT_EQUIP_UNIT"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2CC87 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v13 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0, 0);
      *nameText = Name;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)nameText, (int32_t)Name, v15, v16, v17, v18, v19, v20);
      if ( ServantEntity__get_IsServant(v13, 0) || ServantEntity__get_IsServantMaterialTd(v13, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = &StringLiteral_12055/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v13, 0)
             || ServantEntity__get_IsCombineMaterial(v13, 0)
             || ServantEntity__get_IsStatusUp(v13, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = &StringLiteral_11682/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = &StringLiteral_5754/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_68;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v30 = (System_String_o *)*((_QWORD *)Instance + 3);
      v31 = (ItemEntity_o *)Instance;
      *nameText = v30;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)nameText, (int32_t)v30, v24, v25, v26, v27, v28, v29);
      v33 = ItemEntity__GetCountText(v31, this->fields.num, v32);
      LODWORD(klass) = (_DWORD)v33;
      *countText = v33;
      goto LABEL_53;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FRIENDSHIP_NAME"*/, 0);
      *nameText = v41;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)nameText, (int32_t)v41, v42, v43, v44, v45, v46, v47);
      v21 = &StringLiteral_6528/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_68;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_14903/*"USER_EXP_NAME"*/, 0);
      *nameText = v48;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)nameText, (int32_t)v48, v49, v50, v51, v52, v53, v54);
      v21 = &StringLiteral_14904/*"USER_EXP_UNIT"*/;
      goto LABEL_68;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(v55, 0);
      *nameText = v56;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)nameText, (int32_t)v56, v57, v58, v59, v60, v61, v62);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_14873/*"UNIT_INFO"*/;
      goto LABEL_68;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)nameText,
        StringLiteral_1/*""*/,
        (int32_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
      goto LABEL_53;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
      if ( !Instance )
        goto LABEL_72;
      unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
      goto LABEL_52;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v63 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
      *nameText = v63;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)nameText, (int32_t)v63, v64, v65, v66, v67, v68, v69);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_3672/*"COMMAND_CODE_UNIT"*/;
LABEL_68:
      v81 = LocalizationManager__Get((System_String_o *)*v21, 0);
      num = this->fields.num;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v83 = System_String__Format(v81, v82, 0);
      *countText = v83;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)countText, (int32_t)v83, v84, v85, v86, v87, v88, v89);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
      if ( !Instance )
        goto LABEL_72;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 this->fields.objectId,
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)countText, StringLiteral_1/*""*/, v71, v72, v73, v74, v75, v76);
      if ( !Entity )
        goto LABEL_72;
      klass = (System_String_o *)Entity[2].klass;
      *nameText = klass;
      goto LABEL_60;
    case 0x12:
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)countText,
        StringLiteral_1/*""*/,
        (int32_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_72;
      v79 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              this->fields.objectId,
              (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11149/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, 0);
      if ( !v79 )
LABEL_72:
        sub_1C942F0(Instance, v12);
      v80 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)v79[1].monitor, 0);
      LODWORD(klass) = (_DWORD)v80;
      *nameText = v80;
LABEL_60:
      v78 = nameText;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D277C7 )
      {
        sub_1C94098(&LocalizationManager_TypeInfo);
        byte_4D277C7 = 1;
      }
      v77 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v77 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v77->static_fields->unknownNameText;
LABEL_52:
      *nameText = unknownNameText;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)nameText,
        (int32_t)unknownNameText,
        (int32_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = StringLiteral_1/*""*/;
LABEL_53:
      v78 = countText;
      break;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v78, (int32_t)klass, v34, v35, v36, v37, v38, v39);
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

  if ( (byte_4D2CC88 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&StringLiteral_8734/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    sub_1C94098(&StringLiteral_8733/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_6527/*"FRIENDSHIP_NAME"*/);
    sub_1C94098(&StringLiteral_14903/*"USER_EXP_NAME"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2CC88 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0, 0);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v7 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v6);
      return System_String__Concat_64456008(v7, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_6527/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_14903/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(v10, 0);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
      if ( !Entity )
        goto LABEL_62;
      v15 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0);
      goto LABEL_61;
    case 0xA:
      v11 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, v11 / 100, v11 % 100, 0);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v17 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8733/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0 )
      {
LABEL_62:
        sub_1C942F0(Master_object, v4);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D277C7 )
      {
        sub_1C94098(&LocalizationManager_TypeInfo);
        byte_4D277C7 = 1;
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

  if ( (byte_4D2CC8A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CC8A = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, v4);
}


bool GiftEntity__get_IsReplacedData(GiftEntity_o *this, const MethodInfo *method)
{
  return this->fields._IsReplacedData_k__BackingField;
}


int32_t GiftEntity__get_PrioredNum(GiftEntity_o *this, const MethodInfo *method)
{
  return this->fields._PrioredNum_k__BackingField;
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

  if ( (byte_4D2CC89 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CC89 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  return Entity && (LODWORD(Entity[3].klass) == 1 || LODWORD(Entity[3].klass) == 16);
}


void GiftEntity__set_IsReplacedData(GiftEntity_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsReplacedData_k__BackingField = value;
}


void GiftEntity__set_PrioredNum(GiftEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PrioredNum_k__BackingField = value;
}


void GiftEntity__set_mPrioredIconId(GiftEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.prioredIconId = value;
}