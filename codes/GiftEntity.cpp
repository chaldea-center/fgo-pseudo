void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA45F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA45F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftEntity___ctor_28430744(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t lv; // w8

  if ( (byte_42EA460 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)cSrc, priorIconId, replace);
    byte_42EA460 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B5D69C(v9, v10);
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


System_String_o *__fastcall GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_42EA45E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, type, objectId, method);
    byte_42EA45E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  DataManager_o *Instance; // x0
  __int64 v84; // x1
  ServantEntity_o *v85; // x22
  System_String_o *Name; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 *v93; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x22
  System_String_o *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_o *datalist; // x1
  ItemEntity_o *v111; // x22
  const MethodInfo *v112; // x2
  System_String_o *v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_o *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  WarEntity_o *Entity; // x20
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_o **v134; // x0
  System_String_o *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_o *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  LocalizationManager_c *v149; // x0
  System_String_o *v150; // x21
  Il2CppObject *v151; // x0
  System_String_o *v152; // x0
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA461 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)nameText, (_DWORD)countText, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v38, v39, v40);
    sub_B5D5C4(&int_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3312/*"COMMAND_CODE_UNIT"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_6534/*"FRIENDSHIP_UNIT"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_6533/*"FRIENDSHIP_NAME"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_14869/*"UNIT_INFO"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_14901/*"USER_EXP_UNIT"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_14900/*"USER_EXP_NAME"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_12202/*"SERVANT_UNIT"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_11856/*"SERVANT_EQUIP_UNIT"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_1/*""*/, v80, v81, v82);
    byte_42EA461 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      v85 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0LL);
      *nameText = Name;
      sub_B5D560((BattleServantConfConponent_o *)nameText, (System_Int32_array **)Name, v87, v88, v89, v90, v91, v92);
      if ( ServantEntity__get_IsServant(v85, 0LL) || ServantEntity__get_IsServantMaterialTd(v85, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v93 = &StringLiteral_12202/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v85, 0LL)
             || ServantEntity__get_IsCombineMaterial(v85, 0LL)
             || ServantEntity__get_IsStatusUp(v85, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v93 = &StringLiteral_11856/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v93 = &StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_70;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      datalist = (System_String_o *)Instance->fields.datalist;
      v111 = (ItemEntity_o *)Instance;
      *nameText = datalist;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)datalist,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      v113 = ItemEntity__GetCountText(v111, this->fields.num, v112);
      *countText = v113;
      goto LABEL_61;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v135 = LocalizationManager__Get((System_String_o *)StringLiteral_6533/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v135;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)v135,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141);
      v93 = &StringLiteral_6534/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_70;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_14900/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v120;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)v120,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
      v93 = &StringLiteral_14901/*"USER_EXP_UNIT"*/;
      goto LABEL_70;
    case 5:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(lookup, 0LL);
      *nameText = v97;
      sub_B5D560((BattleServantConfConponent_o *)nameText, (System_Int32_array **)v97, v98, v99, v100, v101, v102, v103);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v93 = &StringLiteral_14869/*"UNIT_INFO"*/;
      goto LABEL_70;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)StringLiteral_1/*""*/,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v113 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_61;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_75;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_75;
      v142 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
      *nameText = v142;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)v142,
        v143,
        v144,
        v145,
        v146,
        v147,
        v148);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v93 = &StringLiteral_3312/*"COMMAND_CODE_UNIT"*/;
LABEL_70:
      v150 = LocalizationManager__Get((System_String_o *)*v93, 0LL);
      num = this->fields.num;
      v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v152 = System_String__Format(v150, v151, 0LL);
      *countText = v152;
      sub_B5D560(
        (BattleServantConfConponent_o *)countText,
        (System_Int32_array **)v152,
        v153,
        v154,
        v155,
        v156,
        v157,
        v158);
      return;
    case 0xC:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
        || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__),
            *countText = (System_String_o *)StringLiteral_1/*""*/,
            sub_B5D560(
              (BattleServantConfConponent_o *)countText,
              (System_Int32_array **)StringLiteral_1/*""*/,
              v128,
              v129,
              v130,
              v131,
              v132,
              v133),
            !Entity) )
      {
LABEL_75:
        sub_B5D69C(Instance, v84);
      }
      v113 = Entity->fields.name;
      v134 = nameText;
      *nameText = v113;
      goto LABEL_62;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_42E6772 )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)nameText, (_DWORD)countText, method);
        byte_42E6772 = 1;
      }
      v149 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v149 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v149->static_fields->unknownNameText;
LABEL_60:
      *nameText = unknownNameText;
      sub_B5D560(
        (BattleServantConfConponent_o *)nameText,
        (System_Int32_array **)unknownNameText,
        (System_String_array **)countText,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      v113 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
      v134 = countText;
LABEL_62:
      sub_B5D560((BattleServantConfConponent_o *)v134, (System_Int32_array **)v113, v114, v115, v116, v117, v118, v119);
      return;
  }
}


System_String_o *__fastcall GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v63; // x1
  System_String_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v65; // x19
  const MethodInfo *v66; // x2
  System_String_o *v67; // x20
  System_String_o *CountText; // x2
  __int64 *v69; // x8
  int32_t v70; // w19
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v73; // x20
  Il2CppObject *ShortName; // x0
  CommandCodeEntity_o *v75; // x19
  LocalizationManager_c *v76; // x0

  if ( (byte_42EA462 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EquipMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventPointBuffMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCostumeMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v35, v36, v37);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_8848/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_8847/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_6533/*"FRIENDSHIP_NAME"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_14900/*"USER_EXP_NAME"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_1/*""*/, v59, v60, v61);
    byte_42EA462 = 1;
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
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                         this->fields.objectId,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      return ServantEntity__getName((ServantEntity_o *)Master_WarQuestSelectionMaster, this->fields.limitCount, -1, 0LL);
    case 2:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                         this->fields.objectId,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      v67 = (System_String_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_WarQuestSelectionMaster, this->fields.num, v66);
      return System_String__Concat_44580072(v67, (System_String_o *)StringLiteral_81/*" "*/, CountText, 0LL);
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = &StringLiteral_6533/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v69, 0LL);
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = &StringLiteral_14900/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v69, 0LL);
    case 5:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                         this->fields.objectId,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      v65 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_WarQuestSelectionMaster + 4);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v65, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
      Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !Entity )
        goto LABEL_76;
      v73 = (System_String_o *)Master_WarQuestSelectionMaster;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0LL);
      goto LABEL_65;
    case 0xA:
      v70 = this->fields.objectId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = ServantCostumeMaster__GetEntity(
                                           (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                                           v70 / 100,
                                           v70 % 100,
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
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_76;
      v75 = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                     this->fields.objectId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v75 )
        goto LABEL_76;
      v73 = (System_String_o *)Master_WarQuestSelectionMaster;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName(v75, 0LL);
LABEL_65:
      result = System_String__Format(v73, ShortName, 0LL);
      break;
    case 0xC:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_WarQuestSelectionMaster
        || (Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                               this->fields.objectId,
                                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_76:
        sub_B5D69C(Master_WarQuestSelectionMaster, v63);
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
      if ( !byte_42E6772 )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E6772 = 1;
      }
      v76 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager_TypeInfo;
      }
      result = v76->static_fields->unknownNameText;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EA464 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA464 = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.objectId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42EA463 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA463 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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