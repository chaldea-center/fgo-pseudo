void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B164CA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftEntity___ctor_40088616(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // d0

  if ( (byte_4B164CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, cSrc, *(_QWORD *)&priorIconId);
    byte_4B164CB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v9, v10);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v11;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_4B164C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type, *(_QWORD *)&objectId);
    byte_4B164C9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  void *Instance; // x0
  __int64 v60; // x1
  ServantEntity_o *v61; // x22
  System_String_o *Name; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  __int64 *v70; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  LocalizationManager_c *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_String_o *klass; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_String_o *v87; // x1
  ItemEntity_o *v88; // x22
  const MethodInfo *v89; // x2
  System_String_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_String_o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v104; // x22
  System_String_o *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x1
  System_String_o **v113; // x0
  System_String_o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x1
  Il2CppObject *Entity; // x20
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  __int64 v129; // x1
  System_String_o *v130; // x21
  Il2CppObject *v131; // x0
  System_String_o *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B164CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText, countText);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&int_TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_3771/*"COMMAND_CODE_UNIT"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_6608/*"FRIENDSHIP_UNIT"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_6607/*"FRIENDSHIP_NAME"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_14962/*"UNIT_INFO"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_14997/*"USER_EXP_UNIT"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_14996/*"USER_EXP_NAME"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_12088/*"SERVANT_UNIT"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_11740/*"SERVANT_EQUIP_UNIT"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v57, v58);
    byte_4B164CC = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v61 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0LL);
      *nameText = Name;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)Name, v63, v64, v65, v66, v67, v68);
      if ( ServantEntity__get_IsServant(v61, 0LL) || ServantEntity__get_IsServantMaterialTd(v61, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
        v70 = &StringLiteral_12088/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v61, 0LL)
             || ServantEntity__get_IsCombineMaterial(v61, 0LL)
             || ServantEntity__get_IsStatusUp(v61, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v129);
        v70 = &StringLiteral_11740/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v129);
        v70 = &StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_61;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v87 = (System_String_o *)*((_QWORD *)Instance + 3);
      v88 = (ItemEntity_o *)Instance;
      *nameText = v87;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)v87, v81, v82, v83, v84, v85, v86);
      klass = ItemEntity__GetCountText(v88, this->fields.num, v89);
      *countText = klass;
      goto LABEL_43;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_6607/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v90;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)v90, v91, v92, v93, v94, v95, v96);
      v70 = &StringLiteral_6608/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_61;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_14996/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v97;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)v97, v98, v99, v100, v101, v102, v103);
      v70 = &StringLiteral_14997/*"USER_EXP_UNIT"*/;
      goto LABEL_61;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v104 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v60);
      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v104, 0LL);
      *nameText = v105;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)v105, v106, v107, v108, v109, v110, v111);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v112);
      v70 = &StringLiteral_14962/*"UNIT_INFO"*/;
      goto LABEL_61;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)nameText,
        (int64_t)StringLiteral_1/*""*/,
        (int64_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      klass = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_43;
    case 9:
    case 0xA:
      objectId = this->fields.objectId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v114 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
      *nameText = v114;
      sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)v114, v115, v116, v117, v118, v119, v120);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
      v70 = &StringLiteral_3771/*"COMMAND_CODE_UNIT"*/;
LABEL_61:
      v130 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
      num = this->fields.num;
      v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v132 = System_String__Format(v130, v131, 0LL);
      *countText = v132;
      sub_1BCA784((PartyOrganizationUtility_o *)countText, (int64_t)v132, v133, v134, v135, v136, v137, v138);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
        || (Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__),
            *countText = (System_String_o *)StringLiteral_1/*""*/,
            sub_1BCA784(
              (PartyOrganizationUtility_o *)countText,
              (int64_t)StringLiteral_1/*""*/,
              v123,
              v124,
              v125,
              v126,
              v127,
              v128),
            !Entity) )
      {
LABEL_65:
        sub_1BCAA3C(Instance, v60);
      }
      klass = (System_String_o *)Entity[2].klass;
      v113 = nameText;
      *nameText = klass;
      goto LABEL_44;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      if ( !byte_4B1194D )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, nameText, countText);
        byte_4B1194D = 1;
      }
      v73 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
        v73 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v73->static_fields->unknownNameText;
LABEL_23:
      *nameText = unknownNameText;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)nameText,
        (int64_t)unknownNameText,
        (int64_t)countText,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      klass = (System_String_o *)StringLiteral_1/*""*/;
LABEL_43:
      v113 = countText;
LABEL_44:
      sub_1BCA784((PartyOrganizationUtility_o *)v113, (int64_t)klass, v74, v75, v76, v77, v78, v79);
      return;
  }
}


System_String_o *__fastcall GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  void *Master_object; // x0
  __int64 v43; // x1
  System_String_o *result; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x20
  System_String_o *CountText; // x2
  __int64 *v48; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v49; // x19
  int32_t v50; // w19
  LocalizationManager_c *v51; // x0
  int32_t objectId; // w19
  __int64 v53; // x1
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v55; // x20
  Il2CppObject *ShortName; // x0
  __int64 v57; // x1
  Il2CppObject *v58; // x19

  if ( (byte_4B164CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommandCodeMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EquipMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventPointBuffMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCostumeMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v24, v25);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_8809/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_8808/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_6607/*"FRIENDSHIP_NAME"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_14996/*"USER_EXP_NAME"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    byte_4B164CD = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0LL);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v46 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v45);
      return System_String__Concat_62412480(v46, (System_String_o *)StringLiteral_116/*" "*/, CountText, 0LL);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v48 = &StringLiteral_6607/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v48, 0LL);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v48 = &StringLiteral_14996/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v48, 0LL);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v43);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v49, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !Entity )
        goto LABEL_62;
      v55 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0LL);
      goto LABEL_61;
    case 0xA:
      v50 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity(
                        (ServantCostumeMaster_o *)Master_object,
                        v50 / 100,
                        v50 % 100,
                        0LL);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v58 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8808/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v58 )
        goto LABEL_62;
      v55 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v58, 0LL);
LABEL_61:
      result = System_String__Format(v55, ShortName, 0LL);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_62:
        sub_1BCAA3C(Master_object, v43);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      if ( !byte_4B1194D )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
        byte_4B1194D = 1;
      }
      v51 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v51 = LocalizationManager_TypeInfo;
      }
      result = v51->static_fields->unknownNameText;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B164CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B164CF = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ItemEntity__GetImageId((ItemEntity_o *)Instance, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B164CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B164CE = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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