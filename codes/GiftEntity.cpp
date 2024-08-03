void __fastcall GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC6DD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC6DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
  this->fields.prioredIconId = 0;
  this->fields._IsReplacedData_k__BackingField = 0;
}


void __fastcall GiftEntity___ctor_39044080(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // d0

  if ( (byte_49FC6DE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_49FC6DE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64324(v9);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  v10 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_QWORD *)&this->fields.limitCount = v10;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_49FC6DC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_49FC6DC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  void *Instance; // x0
  ServantEntity_o *v32; // x22
  System_String_o *Name; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 *v36; // x8
  int32_t objectId; // w20
  System_String_o *unknownNameText; // x1
  LocalizationManager_c *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *klass; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x1
  ItemEntity_o *v46; // x22
  const MethodInfo *v47; // x2
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x22
  System_String_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o **v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *Entity; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x21
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FC6DF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, nameText);
    sub_1B640C8(&Method_DataManager_GetMasterData_EquipMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v16);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&StringLiteral_3718/*"COMMAND_CODE_UNIT"*/, v21);
    sub_1B640C8(&StringLiteral_6461/*"FRIENDSHIP_UNIT"*/, v22);
    sub_1B640C8(&StringLiteral_6460/*"FRIENDSHIP_NAME"*/, v23);
    sub_1B640C8(&StringLiteral_14726/*"UNIT_INFO"*/, v24);
    sub_1B640C8(&StringLiteral_14761/*"USER_EXP_UNIT"*/, v25);
    sub_1B640C8(&StringLiteral_14760/*"USER_EXP_NAME"*/, v26);
    sub_1B640C8(&StringLiteral_11895/*"SERVANT_UNIT"*/, v27);
    sub_1B640C8(&StringLiteral_5719/*"EXCEPT_SERVANT_UNIT"*/, v28);
    sub_1B640C8(&StringLiteral_11547/*"SERVANT_EQUIP_UNIT"*/, v29);
    sub_1B640C8(&StringLiteral_1/*""*/, v30);
    byte_49FC6DF = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v32 = (ServantEntity_o *)Instance;
      Name = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0LL);
      *nameText = Name;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)Name, v34, v35);
      if ( ServantEntity__get_IsServant(v32, 0LL) || ServantEntity__get_IsServantMaterialTd(v32, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = &StringLiteral_11895/*"SERVANT_UNIT"*/;
      }
      else if ( ServantEntity__get_IsServantEquip(v32, 0LL)
             || ServantEntity__get_IsCombineMaterial(v32, 0LL)
             || ServantEntity__get_IsStatusUp(v32, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = &StringLiteral_11547/*"SERVANT_EQUIP_UNIT"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = &StringLiteral_5719/*"EXCEPT_SERVANT_UNIT"*/;
      }
      goto LABEL_61;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v45 = (System_String_o *)*((_QWORD *)Instance + 3);
      v46 = (ItemEntity_o *)Instance;
      *nameText = v45;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v45, v43, v44);
      v48 = ItemEntity__GetCountText(v46, this->fields.num, v47);
      LODWORD(klass) = (_DWORD)v48;
      *countText = v48;
      goto LABEL_43;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_6460/*"FRIENDSHIP_NAME"*/, 0LL);
      *nameText = v49;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v49, v50, v51);
      v36 = &StringLiteral_6461/*"FRIENDSHIP_UNIT"*/;
      goto LABEL_61;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_14760/*"USER_EXP_NAME"*/, 0LL);
      *nameText = v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v52, v53, v54);
      v36 = &StringLiteral_14761/*"USER_EXP_UNIT"*/;
      goto LABEL_61;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v55, 0LL);
      *nameText = v56;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v56, v57, v58);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_14726/*"UNIT_INFO"*/;
      goto LABEL_61;
    case 8:
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_1B6406C(
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_65;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.objectId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_65;
      v60 = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0LL);
      *nameText = v60;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nameText, (int32_t)v60, v61, v62);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_3718/*"COMMAND_CODE_UNIT"*/;
LABEL_61:
      v66 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
      num = this->fields.num;
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
      v68 = System_String__Format(v66, v67, 0LL);
      *countText = v68;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)countText, (int32_t)v68, v69, v70);
      return;
    case 0xC:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
        || (Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__),
            *countText = (System_String_o *)StringLiteral_1/*""*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v64, v65),
            !Entity) )
      {
LABEL_65:
        sub_1B64324(Instance);
      }
      klass = (System_String_o *)Entity[2].klass;
      v59 = nameText;
      *nameText = klass;
      goto LABEL_44;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_49F7D6A )
      {
        sub_1B640C8(&LocalizationManager_TypeInfo, nameText);
        byte_49F7D6A = 1;
      }
      v39 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = LocalizationManager_TypeInfo;
      }
      unknownNameText = v39->static_fields->unknownNameText;
LABEL_23:
      *nameText = unknownNameText;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)nameText,
        (int32_t)unknownNameText,
        (int32_t)countText,
        (int32_t)method);
      *countText = (System_String_o *)StringLiteral_1/*""*/;
      LODWORD(klass) = (_DWORD)StringLiteral_1/*""*/;
LABEL_43:
      v59 = countText;
LABEL_44:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v59, (int32_t)klass, v40, v41);
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
  void *Master_object; // x0
  System_String_o *result; // x0
  const MethodInfo *v24; // x2
  System_String_o *v25; // x20
  System_String_o *CountText; // x2
  __int64 *v27; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x19
  int32_t v29; // w19
  LocalizationManager_c *v30; // x0
  int32_t objectId; // w19
  ServantCostumeEntity_o *Entity; // x19
  System_String_o *v33; // x20
  Il2CppObject *ShortName; // x0
  Il2CppObject *v35; // x19

  if ( (byte_49FC6E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommandCodeMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EquipMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_EventPointBuffMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCostumeMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_8642/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v16);
    sub_1B640C8(&StringLiteral_8641/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, v17);
    sub_1B640C8(&StringLiteral_117/*" "*/, v18);
    sub_1B640C8(&StringLiteral_6460/*"FRIENDSHIP_NAME"*/, v19);
    sub_1B640C8(&StringLiteral_14760/*"USER_EXP_NAME"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FC6E0 = 1;
  }
  switch ( this->fields.type )
  {
    case 1:
    case 6:
    case 7:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0LL);
    case 2:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v25 = (System_String_o *)*((_QWORD *)Master_object + 3);
      CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v24);
      return System_String__Concat_61386656(v25, (System_String_o *)StringLiteral_117/*" "*/, CountText, 0LL);
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_6460/*"FRIENDSHIP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v27, 0LL);
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_14760/*"USER_EXP_NAME"*/;
      return LocalizationManager__Get((System_String_o *)*v27, 0LL);
    case 5:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_62;
      v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v28, 0LL);
    case 8:
      return (System_String_o *)StringLiteral_1/*""*/;
    case 9:
      objectId = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)Master_object,
                 objectId / 100,
                 objectId % 100,
                 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8642/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
      if ( !Entity )
        goto LABEL_62;
      v33 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)ServantCostumeEntity__getShortName(Entity, 0LL);
      goto LABEL_61;
    case 0xA:
      v29 = this->fields.objectId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      Master_object = ServantCostumeMaster__GetEntity(
                        (ServantCostumeMaster_o *)Master_object,
                        v29 / 100,
                        v29 % 100,
                        0LL);
      if ( !Master_object )
        goto LABEL_62;
      goto LABEL_38;
    case 0xB:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommandCodeMaster___);
      if ( !Master_object )
        goto LABEL_62;
      v35 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              this->fields.objectId,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_8641/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0LL);
      if ( !v35 )
        goto LABEL_62;
      v33 = (System_String_o *)Master_object;
      ShortName = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)v35, 0LL);
LABEL_61:
      result = System_String__Format(v33, ShortName, 0LL);
      break;
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
      if ( !Master_object
        || (Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              this->fields.objectId,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL )
      {
LABEL_62:
        sub_1B64324(Master_object);
      }
LABEL_38:
      result = (System_String_o *)*((_QWORD *)Master_object + 4);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_49F7D6A )
      {
        sub_1B640C8(&LocalizationManager_TypeInfo, method);
        byte_49F7D6A = 1;
      }
      v30 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager_TypeInfo;
      }
      result = v30->static_fields->unknownNameText;
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

  if ( (byte_49FC6E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FC6E2 = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *Entity; // x0

  if ( (byte_49FC6E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FC6E1 = 1;
  }
  if ( this->fields.type != 2 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.objectId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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