void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C838 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C838 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void __fastcall GiftEntity___ctor_41403344(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // d0

  if ( (byte_4B1C839 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4B1C839 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BCB254(v9, v10);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v11;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4B1C837 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4B1C837 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_30190BC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  void *Instance; // x0
  __int64 v35; // x1
  ServantEntity_o *v36; // x22
  System_String_o *Name; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 *v40; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x1
  ItemEntity_o *v46; // x22
  const MethodInfo *v47; // x2
  System_String_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_String_o *klass; // x1
  System_String_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_String_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v58; // x22
  System_String_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_String_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppObject *Entity; // x20
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  LocalizationManager_c *v68; // x0
  System_String_o **v69; // x0
  Il2CppObject *v70; // x19
  System_String_o *v71; // x0
  System_String_o *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  System_String_o *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1C83A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EquipMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v15);
    sub_1BCAFF8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v16);
    sub_1BCAFF8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v17);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v18);
    sub_1BCAFF8(&int_TypeInfo, v19);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BCAFF8(&StringLiteral_3632/*"COMMAND_CODE_UNIT"*/, v23);
    sub_1BCAFF8(&StringLiteral_6472/*"FRIENDSHIP_UNIT"*/, v24);
    sub_1BCAFF8(&StringLiteral_6471/*"FRIENDSHIP_NAME"*/, v25);
    sub_1BCAFF8(&StringLiteral_14692/*"UNIT_INFO"*/, v26);
    sub_1BCAFF8(&StringLiteral_14726/*"USER_EXP_UNIT"*/, v27);
    sub_1BCAFF8(&StringLiteral_14725/*"USER_EXP_NAME"*/, v28);
    sub_1BCAFF8(&StringLiteral_11011/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, v29);
    sub_1BCAFF8(&StringLiteral_11903/*"SERVANT_UNIT"*/, v30);
    sub_1BCAFF8(&StringLiteral_5704/*"EXCEPT_SERVANT_UNIT"*/, v31);
    sub_1BCAFF8(&StringLiteral_11530/*"SERVANT_EQUIP_UNIT"*/, v32);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v33);
    byte_4B1C83A = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v36 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0, 0LL);
      *nameText = Name;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)Name, v38, v39);
      if ( ServantEntity__get_IsServant(v36, 0LL) || ServantEntity__get_IsServantMaterialTd(v36, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_11903/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v36, 0LL)
             || ServantEntity__get_IsCombineMaterial(v36, 0LL)
             || ServantEntity__get_IsStatusUp(v36, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_11530/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_5704/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_68;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v45 = (System_String_o *)*((_QWORD *)Instance + 3);
      v46 = (ItemEntity_o *)Instance;
      *nameText = v45;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)v45, v43, v44);
      v48 = ItemEntity__GetCountText(v46, this->fields.num, v47);
      LODWORD(klass) = (_DWORD)v48;
      *countText = v48;
      goto LABEL_53;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_6471/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v52;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)v52, v53, v54);
      v40 = &StringLiteral_6472/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_68;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_14725/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v55;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)v55, v56, v57);
      v40 = &StringLiteral_14726/*"USER_EXP_UNIT"*/;
      goto LABEL_68;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v58 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(v58, 0LL);
      *nameText = v59;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)v59, v60, v61);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = &StringLiteral_14692/*"UNIT_INFO"*/;
      goto LABEL_68;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)StringLiteral_1/*""*/, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = (_DWORD)StringLiteral_1/*""*/;
      goto LABEL_53;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = ServantCostumeMaster__GetEntity(
                   (ServantCostumeMaster_o *)Instance,
                   objectId / 100,
                   objectId % 100,
                   0LL);
      if ( !Instance )
        goto LABEL_72;
      unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
      goto LABEL_52;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_72;
      v62 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
      *nameText = v62;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)v62, v63, v64);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = &StringLiteral_3632/*"COMMAND_CODE_UNIT"*/;
LABEL_68:
      v72 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
      num = this->fields.num;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v73, v74, v75);
      v77 = System_String__Format(v72, v76, 0LL);
      *countText = v77;
      sub_1BCAF9C((CGThumbnailListItem_o *)countText, (int32_t)v77, v78, v79);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
      if ( !Instance )
        goto LABEL_72;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 this->fields.objectId,
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v66, v67);
      if ( !Entity )
        goto LABEL_72;
      klass = (System_String_o *)Entity[2].klass;
      *nameText = klass;
      goto LABEL_60;
    case 0x12:
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)countText, (int32_t)StringLiteral_1/*""*/, (int32_t)countText, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_72;
      v70 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              this->fields.objectId,
              (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11011/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, 0LL);
      if ( !v70 )
LABEL_72:
        sub_1BCB254(Instance, v35);
      v71 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)v70[1].monitor, 0LL);
      LODWORD(klass) = (_DWORD)v71;
      *nameText = v71;
LABEL_60:
      v69 = nameText;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4B1794E )
      {
        sub_1BCAFF8(&LocalizationManager_TypeInfo, nameText);
        byte_4B1794E = 1;
      }
      v68 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v68 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v68->static_fields->unknownNameText;
LABEL_52:
      *nameText = unknownNameText;
      sub_1BCAF9C((CGThumbnailListItem_o *)nameText, (int32_t)unknownNameText, (int32_t)countText, method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = (_DWORD)StringLiteral_1/*""*/;
LABEL_53:
      v69 = countText;
      break;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)v69, (int32_t)klass, v49, v50);
}


System_String_o *__fastcall GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *Master_object; // x0
  __int64 v23; // x1
  System_String_o *result; // x0
  const MethodInfo *v25; // x2
  System_String_o *v26; // x20
  System_String_o *CountText; // x2
  __int64 *v28; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x19
  int32_t v30; // w19
  LocalizationManager_c *v31; // x0
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v34; // x20
  Il2CppObject *ShortName; // x0
  Il2CppObject *v36; // x19

  if ( (byte_4B1C83B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommandCodeMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EquipMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventPointBuffMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCostumeMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v11);
    sub_1BCAFF8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_8643/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v16);
    sub_1BCAFF8(&StringLiteral_8642/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, v17);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v18);
    sub_1BCAFF8(&StringLiteral_6471/*"FRIENDSHIP_NAME"*/, v19);
    sub_1BCAFF8(&StringLiteral_14725/*"USER_EXP_NAME"*/, v20);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v21);
    byte_4B1C83B = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0, 0LL);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v26 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v25);
      return System_String__Concat_62488672(v26, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0LL);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = &StringLiteral_6471/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v28, 0LL);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = &StringLiteral_14725/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v28, 0LL);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(v29, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !Entity )
        goto LABEL_62;
      v34 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0LL);
      goto LABEL_61;
    case 0xA:
      v30 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity(
                        (ServantCostumeMaster_o *)Master_object,
                        v30 / 100,
                        v30 % 100,
                        0LL);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v36 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8642/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v36 )
        goto LABEL_62;
      v34 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v36, 0LL);
LABEL_61:
      result = System_String__Format(v34, ShortName, 0LL);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_62:
        sub_1BCB254(Master_object, v23);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4B1794E )
      {
        sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
        byte_4B1794E = 1;
      }
      v31 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager_TypeInfo;
      }
      result = v31->static_fields->unknownNameText;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1C83D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1C83D = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B1C83C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1C83C = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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