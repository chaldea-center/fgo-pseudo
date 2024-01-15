void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC119 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FC119 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void __fastcall GiftEntity___ctor_28860524(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  int32_t lv; // w8

  if ( (byte_40FC11A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_40FC11A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B170D4();
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
  if ( (byte_40FC118 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_40FC118 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v38; // x22
  System_String_o *Name; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 *v46; // x8
  int32_t objectId; // w20
  WebViewManager_o *v48; // x0
  ServantCostumeMaster_o *v49; // x0
  ServantCostumeEntity_o *v50; // x0
  System_String_o *unknownNameText; // x1
  WebViewManager_o *v52; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x0
  WarEntity_o *v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x22
  System_String_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  WebViewManager_o *v63; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x0
  WarEntity_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_o *age; // x1
  ItemEntity_o *v73; // x22
  System_String_o *v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  WebViewManager_o *v88; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v89; // x0
  WarEntity_o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_o **v97; // x0
  System_String_o *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  WebViewManager_o *v105; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x0
  CommandCodeEntity_o *v107; // x0
  System_String_o *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  LocalizationManager_c *v115; // x0
  System_String_o *v116; // x21
  Il2CppObject *v117; // x0
  System_String_o *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC11B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&StringLiteral_3238/*"COMMAND_CODE_UNIT"*/, v25);
    sub_B16FFC(&StringLiteral_6431/*"FRIENDSHIP_UNIT"*/, v26);
    sub_B16FFC(&StringLiteral_6430/*"FRIENDSHIP_NAME"*/, v27);
    sub_B16FFC(&StringLiteral_14652/*"UNIT_INFO"*/, v28);
    sub_B16FFC(&StringLiteral_14683/*"USER_EXP_UNIT"*/, v29);
    sub_B16FFC(&StringLiteral_14682/*"USER_EXP_NAME"*/, v30);
    sub_B16FFC(&StringLiteral_12004/*"SERVANT_UNIT"*/, v31);
    sub_B16FFC(&StringLiteral_5735/*"EXCEPT_SERVANT_UNIT"*/, v32);
    sub_B16FFC(&StringLiteral_11678/*"SERVANT_EQUIP_UNIT"*/, v33);
    sub_B16FFC(&StringLiteral_1/*""*/, v34);
    byte_40FC11B = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_75;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    this->fields.objectId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_75;
      v38 = Entity;
      Name = ServantEntity__getName(Entity, this->fields.limitCount, -1, 0LL);
      *nameText = Name;
      sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v40, v41, v42, v43, v44, v45);
      if ( ServantEntity__get_IsServant(v38, 0LL) || ServantEntity__get_IsServantMaterialTd(v38, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v46 = &StringLiteral_12004/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v38, 0LL)
             || ServantEntity__get_IsCombineMaterial(v38, 0LL)
             || ServantEntity__get_IsStatusUp(v38, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v46 = &StringLiteral_11678/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v46 = &StringLiteral_5735/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_70;
    case 2:
      v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v63 )
        goto LABEL_75;
      v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v63,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !v64 )
        goto LABEL_75;
      v65 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v64,
              this->fields.objectId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v65 )
        goto LABEL_75;
      age = v65->fields.age;
      v73 = (ItemEntity_o *)v65;
      *nameText = age;
      sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)age, v66, v67, v68, v69, v70, v71);
      v74 = ItemEntity__GetCountText(v73, this->fields.num, 0LL);
      *countText = v74;
      goto LABEL_61;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v98;
      sub_B16F98(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)v98,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
      v46 = &StringLiteral_6431/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_70;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_14682/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v81;
      sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
      v46 = &StringLiteral_14683/*"USER_EXP_UNIT"*/;
      goto LABEL_70;
    case 5:
      v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v52 )
        goto LABEL_75;
      v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v52,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !v53 )
        goto LABEL_75;
      v54 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v53,
              this->fields.objectId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !v54 )
        goto LABEL_75;
      v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v54->fields.name;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v55, 0LL);
      *nameText = v56;
      sub_B16F98((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = &StringLiteral_14652/*"UNIT_INFO"*/;
      goto LABEL_70;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_B16F98(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)StringLiteral_1/*""*/,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v74 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_61;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v48 )
        goto LABEL_75;
      v49 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v48,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !v49 )
        goto LABEL_75;
      v50 = ServantCostumeMaster__GetEntity(v49, objectId / 100, objectId % 100, 0LL);
      if ( !v50 )
        goto LABEL_75;
      unknownNameText = v50->fields.name;
      goto LABEL_60;
    case 0xB:
      v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v105 )
        goto LABEL_75;
      v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v105,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !v106 )
        goto LABEL_75;
      v107 = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v106,
                                      this->fields.objectId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !v107 )
        goto LABEL_75;
      v108 = CommandCodeEntity__GetName(v107, 0LL);
      *nameText = v108;
      sub_B16F98(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)v108,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = &StringLiteral_3238/*"COMMAND_CODE_UNIT"*/;
LABEL_70:
      v116 = LocalizationManager__Get((System_String_o *)*v46, 0LL);
      num = this->fields.num;
      v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v118 = System_String__Format(v116, v117, 0LL);
      *countText = v118;
      sub_B16F98(
        (BattleServantConfConponent_o *)countText,
        (System_Int32_array **)v118,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
      return;
    case 0xC:
      v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v88
        || (v89 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v88,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
        || (v90 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v89,
                    this->fields.objectId,
                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__),
            *countText = (System_String_o *)StringLiteral_1/*""*/,
            sub_B16F98(
              (BattleServantConfConponent_o *)countText,
              (System_Int32_array **)StringLiteral_1/*""*/,
              v91,
              v92,
              v93,
              v94,
              v95,
              v96),
            !v90) )
      {
LABEL_75:
        sub_B170D4();
      }
      v74 = v90->fields.name;
      v97 = nameText;
      *nameText = v74;
      goto LABEL_62;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_40F87E5 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, nameText);
        byte_40F87E5 = 1;
      }
      v115 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v115 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v115->static_fields->unknownNameText;
LABEL_60:
      *nameText = unknownNameText;
      sub_B16F98(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v74 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
      v97 = countText;
LABEL_62:
      sub_B16F98((BattleServantConfConponent_o *)v97, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  System_String_o *result; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x0
  WarEntity_o *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x0
  void *v29; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x0
  ItemEntity_o *v31; // x0
  System_String_o *name; // x20
  System_String_o *CountText; // x2
  __int64 *v34; // x8
  int32_t v35; // w19
  ServantCostumeMaster_o *v36; // x0
  int32_t objectId; // w19
  ServantCostumeMaster_o *v38; // x0
  ServantCostumeEntity_o *v39; // x19
  System_String_o *v40; // x0
  System_String_o *v41; // x20
  Il2CppObject *ShortName; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x0
  CommandCodeEntity_o *v44; // x19
  System_String_o *v45; // x0
  LocalizationManager_c *v46; // x0

  if ( (byte_40FC11C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommandCodeMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EquipMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_EventPointBuffMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCostumeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_8729/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v16);
    sub_B16FFC(&StringLiteral_8728/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, v17);
    sub_B16FFC(&StringLiteral_80/*" "*/, v18);
    sub_B16FFC(&StringLiteral_6430/*"FRIENDSHIP_NAME"*/, v19);
    sub_B16FFC(&StringLiteral_14682/*"USER_EXP_NAME"*/, v20);
    sub_B16FFC(&StringLiteral_1/*""*/, v21);
    byte_40FC11C = 1;
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
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    this->fields.objectId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_76;
      return ServantEntity__getName(Entity, this->fields.limitCount, -1, 0LL);
    case 2:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v30 )
        goto LABEL_76;
      v31 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v30,
                              this->fields.objectId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v31 )
        goto LABEL_76;
      name = v31->fields.name;
      CountText = ItemEntity__GetCountText(v31, this->fields.num, 0LL);
      return System_String__Concat_43746016(name, (System_String_o *)StringLiteral_80/*" "*/, CountText, 0LL);
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = &StringLiteral_6430/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v34, 0LL);
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = &StringLiteral_14682/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v34, 0LL);
    case 5:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !v25 )
        goto LABEL_76;
      v26 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v25,
              this->fields.objectId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !v26 )
        goto LABEL_76;
      v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v26->fields.name;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v27, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v38 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !v38 )
        goto LABEL_76;
      v39 = ServantCostumeMaster__GetEntity(v38, objectId / 100, objectId % 100, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8729/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !v39 )
        goto LABEL_76;
      v41 = v40;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(v39, 0LL);
      goto LABEL_65;
    case 0xA:
      v35 = this->fields.objectId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v36 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( v36 )
      {
        v29 = ServantCostumeMaster__GetEntity(v36, v35 / 100, v35 % 100, 0LL);
        if ( v29 )
          goto LABEL_40;
      }
      goto LABEL_76;
    case 0xB:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !v43 )
        goto LABEL_76;
      v44 = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v43,
                                     this->fields.objectId,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8728/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v44 )
        goto LABEL_76;
      v41 = v45;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName(v44, 0LL);
LABEL_65:
      result = System_String__Format(v41, ShortName, 0LL);
      break;
    case 0xC:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !v28
        || (v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v28,
                    this->fields.objectId,
                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_76:
        sub_B170D4();
      }
LABEL_40:
      result = (System_String_o *)*((_QWORD *)v29 + 4);
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_40F87E5 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, method);
        byte_40F87E5 = 1;
      }
      v46 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager_TypeInfo;
      }
      result = v46->static_fields->unknownNameText;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x0

  if ( (byte_40FC11E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC11E = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.objectId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return ItemEntity__GetImageId(Entity, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40FC11D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC11D = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.objectId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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