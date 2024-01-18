void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188F0D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188F0D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void __fastcall GiftEntity___ctor_27329868(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t lv; // w8

  if ( (byte_4188F0E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4188F0E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B2C434(v9, v10);
  this->fields.id = cSrc->fields.id;
  this->fields.type = cSrc->fields.type;
  this->fields.objectId = cSrc->fields.objectId;
  this->fields.num = cSrc->fields.num;
  this->fields.limitCount = cSrc->fields.limitCount;
  lv = cSrc->fields.lv;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  this->fields.lv = lv;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4188F0C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4188F0C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v34; // x1
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  ServantEntity_o *v37; // x22
  System_String_o *Name; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 *v45; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x22
  System_String_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_o *datalist; // x1
  ItemEntity_o *v63; // x22
  const MethodInfo *v64; // x2
  System_String_o *v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  WarEntity_o *Entity; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_o **v86; // x0
  System_String_o *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  LocalizationManager_c *v101; // x0
  System_String_o *v102; // x21
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188F0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v18);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B2C35C(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v20);
    sub_B2C35C(&int_TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&StringLiteral_3247/*"COMMAND_CODE_UNIT"*/, v25);
    sub_B2C35C(&StringLiteral_6455/*"FRIENDSHIP_UNIT"*/, v26);
    sub_B2C35C(&StringLiteral_6454/*"FRIENDSHIP_NAME"*/, v27);
    sub_B2C35C(&StringLiteral_14712/*"UNIT_INFO"*/, v28);
    sub_B2C35C(&StringLiteral_14743/*"USER_EXP_UNIT"*/, v29);
    sub_B2C35C(&StringLiteral_14742/*"USER_EXP_NAME"*/, v30);
    sub_B2C35C(&StringLiteral_12055/*"SERVANT_UNIT"*/, v31);
    sub_B2C35C(&StringLiteral_5752/*"EXCEPT_SERVANT_UNIT"*/, v32);
    sub_B2C35C(&StringLiteral_11717/*"SERVANT_EQUIP_UNIT"*/, v33);
    sub_B2C35C(&StringLiteral_1/*""*/, v34);
    byte_4188F0F = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      v37 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0LL);
      *nameText = Name;
      sub_B2C2F8((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v39, v40, v41, v42, v43, v44);
      if ( ServantEntity__get_IsServant(v37, 0LL) || ServantEntity__get_IsServantMaterialTd(v37, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v45 = &StringLiteral_12055/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v37, 0LL)
             || ServantEntity__get_IsCombineMaterial(v37, 0LL)
             || ServantEntity__get_IsStatusUp(v37, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v45 = &StringLiteral_11717/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v45 = &StringLiteral_5752/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_70;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      datalist = (System_String_o *)Instance->fields.datalist;
      v63 = (ItemEntity_o *)Instance;
      *nameText = datalist;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)datalist,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v65 = ItemEntity__GetCountText(v63, this->fields.num, v64);
      *countText = v65;
      goto LABEL_61;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_6454/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v87;
      sub_B2C2F8((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v87, v88, v89, v90, v91, v92, v93);
      v45 = &StringLiteral_6455/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_70;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_14742/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v72;
      sub_B2C2F8((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
      v45 = &StringLiteral_14743/*"USER_EXP_UNIT"*/;
      goto LABEL_70;
    case 5:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(lookup, 0LL);
      *nameText = v49;
      sub_B2C2F8((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = &StringLiteral_14712/*"UNIT_INFO"*/;
      goto LABEL_70;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)StringLiteral_1/*""*/,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v65 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_61;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                    (ServantCostumeMaster_o *)Instance,
                                    objectId / 100,
                                    objectId % 100,
                                    0LL);
      if ( !Instance )
        goto LABEL_75;
      unknownNameText = (System_String_o *)Instance->fields.lookup;
      goto LABEL_60;
    case 0xB:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      v94 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
      *nameText = v94;
      sub_B2C2F8((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v94, v95, v96, v97, v98, v99, v100);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = &StringLiteral_3247/*"COMMAND_CODE_UNIT"*/;
LABEL_70:
      v102 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
      num = this->fields.num;
      v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v104 = System_String__Format(v102, v103, 0LL);
      *countText = v104;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)countText,
        (System_Int32_array **)v104,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
      return;
    case 0xC:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
        || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__),
            *countText = (System_String_o *)StringLiteral_1/*""*/,
            sub_B2C2F8(
              (BattleServantConfConponent_o *)countText,
              (System_Int32_array **)StringLiteral_1/*""*/,
              v80,
              v81,
              v82,
              v83,
              v84,
              v85),
            !Entity) )
      {
LABEL_75:
        sub_B2C434(Instance, v36);
      }
      v65 = Entity->fields.name;
      v86 = nameText;
      *nameText = v65;
      goto LABEL_62;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4185BC0 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, nameText);
        byte_4185BC0 = 1;
      }
      v101 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v101 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v101->static_fields->unknownNameText;
LABEL_60:
      *nameText = unknownNameText;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v65 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
      v86 = countText;
LABEL_62:
      sub_B2C2F8((BattleServantConfConponent_o *)v86, (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
      return;
  }
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
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x19
  const MethodInfo *v26; // x2
  System_String_o *v27; // x20
  System_String_o *CountText; // x2
  __int64 *v29; // x8
  int32_t v30; // w19
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v33; // x20
  Il2CppObject *ShortName; // x0
  CommandCodeEntity_o *v35; // x19
  LocalizationManager_c *v36; // x0

  if ( (byte_4188F10 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommandCodeMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EquipMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_EventPointBuffMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCostumeMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_8758/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v16);
    sub_B2C35C(&StringLiteral_8757/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, v17);
    sub_B2C35C(&StringLiteral_80/*" "*/, v18);
    sub_B2C35C(&StringLiteral_6454/*"FRIENDSHIP_NAME"*/, v19);
    sub_B2C35C(&StringLiteral_14742/*"USER_EXP_NAME"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_4188F10 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                         this->fields.objectId,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      return ServantEntity__getName((ServantEntity_o *)Master_WarQuestSelectionMaster, this->fields.limitCount, -1, 0LL);
    case 2:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                         this->fields.objectId,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      v27 = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_WarQuestSelectionMaster, this->fields.num, v26);
      return System_String__Concat_44307816(v27, (System_String_o *)StringLiteral_80/*" "*/, CountText, 0LL);
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = &StringLiteral_6454/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v29, 0LL);
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = &StringLiteral_14742/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v29, 0LL);
    case 5:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                         this->fields.objectId,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v25, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                 objectId / 100,
                 objectId % 100,
                 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_8758/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !Entity )
        goto LABEL_76;
      v33 = (System_String_o *)Master_WarQuestSelectionMaster;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0LL);
      goto LABEL_65;
    case 0xA:
      v30 = this->fields.objectId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = ServantCostumeMaster__GetEntity(
                                           (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                                           v30 / 100,
                                           v30 % 100,
                                           0LL);
        if ( Master_WarQuestSelectionMaster )
          goto LABEL_40;
      }
      goto LABEL_76;
    case 0xB:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      v35 = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                     this->fields.objectId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_8757/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v35 )
        goto LABEL_76;
      v33 = (System_String_o *)Master_WarQuestSelectionMaster;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName(v35, 0LL);
LABEL_65:
      result = System_String__Format(v33, ShortName, 0LL);
      break;
    case 0xC:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_WarQuestSelectionMaster
        || (Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                               this->fields.objectId,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_76:
        sub_B2C434(Master_WarQuestSelectionMaster, v23);
      }
LABEL_40:
      result = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4185BC0 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, method);
        byte_4185BC0 = 1;
      }
      v36 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager_TypeInfo;
      }
      result = v36->static_fields->unknownNameText;
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
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4188F12 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188F12 = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.objectId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4188F11 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188F11 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  return Entity && (Entity->fields.bannerId == 1 || Entity->fields.bannerId == 16);
}


void __fastcall GiftEntity__set_IsReplacedData(GiftEntity_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsReplacedData_k__BackingField = value;
}


void __fastcall GiftEntity__set_mPrioredIconId(GiftEntity_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.prioredIconId = value;
}