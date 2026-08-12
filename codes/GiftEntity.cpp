void GiftEntity___ctor(GiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970C97 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970C97 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  this->fields._IsReplacedData_k__BackingField = 0;
  *(_QWORD *)&this->fields.prioredIconId = 0;
}


void GiftEntity___ctor_49346944(
        GiftEntity_o *this,
        GiftEntity_o *cSrc,
        int32_t priorIconId,
        bool replace,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int128 v11; // q0

  if ( (byte_5970C98 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970C98 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_2213CDC(v9, v10);
  v11 = *(_OWORD *)&cSrc->fields.id;
  this->fields._IsReplacedData_k__BackingField = replace;
  *(_OWORD *)&this->fields.id = v11;
  *(_QWORD *)&v11 = *(_QWORD *)&cSrc->fields.limitCount;
  this->fields.prioredIconId = priorIconId;
  *(_QWORD *)&this->fields.limitCount = v11;
}


System_String_o *GiftEntity__CreatePK(int32_t id, int32_t type, int32_t objectId, const MethodInfo *method)
{
  if ( (byte_5970C96 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970C96 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           objectId,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t type; // w8
  System_String_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 *v19; // x8
  int32_t objectId; // w20
  void *Instance; // x0
  __int64 v22; // x1
  System_String_o *unknownNameText; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x22
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  int32_t v33; // w1
  __int64 v34; // x1
  Il2CppObject *v35; // x19
  System_String_o *klass; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  ServantEntity_o *v43; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x1
  ItemEntity_o *v59; // x22
  const MethodInfo *v60; // x2
  int32_t v61; // w1
  LocalizationManager_c *v62; // x0
  System_String_o **v63; // x0
  System_String_o *Name; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x1
  Il2CppObject *Entity; // x20
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x1
  System_String_o *v88; // x21
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t num; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5970C99 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3809/*"COMMAND_CODE_UNIT"*/);
    sub_2213A60(&StringLiteral_6806/*"FRIENDSHIP_UNIT"*/);
    sub_2213A60(&StringLiteral_6805/*"FRIENDSHIP_NAME"*/);
    sub_2213A60(&StringLiteral_15412/*"UNIT_INFO"*/);
    sub_2213A60(&StringLiteral_15443/*"USER_EXP_UNIT"*/);
    sub_2213A60(&StringLiteral_15442/*"USER_EXP_NAME"*/);
    sub_2213A60(&StringLiteral_11589/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/);
    sub_2213A60(&StringLiteral_12523/*"SERVANT_UNIT"*/);
    sub_2213A60(&StringLiteral_5981/*"EXCEPT_SERVANT_UNIT"*/);
    sub_2213A60(&StringLiteral_12143/*"SERVANT_EQUIP_UNIT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970C99 = 1;
  }
  type = this->fields.type;
  if ( type > 7 )
  {
    if ( type > 10 )
    {
      switch ( type )
      {
        case 11:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
            if ( Instance )
            {
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           this->fields.objectId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
              if ( Instance )
              {
                Name = CommandCodeEntity__GetName((CommandCodeEntity_o *)Instance, 0);
                *nameText = Name;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)Name, v65, v66, v67, v68, v69, v70);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
                v19 = &StringLiteral_3809/*"COMMAND_CODE_UNIT"*/;
                goto LABEL_81;
              }
            }
          }
          goto LABEL_85;
        case 12:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_85;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
          if ( !Instance )
            goto LABEL_85;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
          v73 = (int)StringLiteral_1/*""*/;
          *countText = (System_String_o *)StringLiteral_1/*""*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)countText, v73, v74, v75, v76, v77, v78, v79);
          if ( !Entity )
            goto LABEL_85;
          klass = (System_String_o *)Entity[2].klass;
          break;
        case 18:
          v33 = (int)StringLiteral_1/*""*/;
          *countText = (System_String_o *)StringLiteral_1/*""*/;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)countText,
            v33,
            (System_String_o *)countText,
            (System_String_o *)method,
            v4,
            v5,
            v6,
            v7);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_85;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
          if ( !Instance )
            goto LABEL_85;
          v35 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  this->fields.objectId,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11589/*"RESULT_BOUNDS_GET_CLASS_SKILL"*/, 0);
          if ( !v35 )
            goto LABEL_85;
          klass = System_String__Format((System_String_o *)Instance, (Il2CppObject *)v35[1].monitor, 0);
          break;
        default:
          goto LABEL_51;
      }
      v63 = nameText;
      *nameText = klass;
      goto LABEL_71;
    }
    if ( (unsigned int)(type - 9) >= 2 )
    {
      if ( type != 8 )
        goto LABEL_51;
      v61 = (int)StringLiteral_1/*""*/;
      *nameText = (System_String_o *)StringLiteral_1/*""*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)nameText,
        v61,
        (System_String_o *)countText,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      klass = (System_String_o *)StringLiteral_1/*""*/;
LABEL_59:
      v63 = countText;
      *countText = klass;
LABEL_71:
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v63, (int32_t)klass, v37, v38, v39, v40, v41, v42);
      return;
    }
    objectId = this->fields.objectId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( Instance )
      {
        Instance = ServantCostumeMaster__GetEntity(
                     (ServantCostumeMaster_o *)Instance,
                     objectId / 100,
                     objectId % 100,
                     0);
        if ( Instance )
        {
          unknownNameText = (System_String_o *)*((_QWORD *)Instance + 4);
LABEL_58:
          *nameText = unknownNameText;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)nameText,
            (int32_t)unknownNameText,
            (System_String_o *)countText,
            (System_String_o *)method,
            v4,
            v5,
            v6,
            v7);
          klass = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_59;
        }
      }
    }
LABEL_85:
    sub_2213CDC(Instance, v22);
  }
  if ( type > 3 )
  {
    if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type == 4 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_15442/*"USER_EXP_NAME"*/, 0);
        *nameText = v80;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v80, v81, v82, v83, v84, v85, v86);
        v19 = &StringLiteral_15443/*"USER_EXP_UNIT"*/;
        goto LABEL_81;
      }
      if ( type != 5 )
        goto LABEL_51;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( Instance )
        {
          Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.objectId,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
          if ( Instance )
          {
            v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Instance + 4);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22);
            v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v24, 0);
            *nameText = v25;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v25, v26, v27, v28, v29, v30, v31);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
            v19 = &StringLiteral_15412/*"UNIT_INFO"*/;
            goto LABEL_81;
          }
        }
      }
      goto LABEL_85;
    }
LABEL_37:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          v43 = (ServantEntity_o *)Instance;
          v44 = ServantEntity__getName((ServantEntity_o *)Instance, this->fields.limitCount, -1, 0, 0, 0);
          *nameText = v44;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v44, v45, v46, v47, v48, v49, v50);
          if ( ServantEntity__get_IsServant(v43, 0) || ServantEntity__get_IsServantMaterialTd(v43, 0) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
            v19 = &StringLiteral_12523/*"SERVANT_UNIT"*/;
          }
          else if ( ServantEntity__get_IsServantEquip(v43, 0)
                 || ServantEntity__get_IsCombineMaterial(v43, 0)
                 || ServantEntity__get_IsStatusUp(v43, 0) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
            v19 = &StringLiteral_12143/*"SERVANT_EQUIP_UNIT"*/;
          }
          else
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
            v19 = &StringLiteral_5981/*"EXCEPT_SERVANT_UNIT"*/;
          }
          goto LABEL_81;
        }
      }
    }
    goto LABEL_85;
  }
  if ( type == 1 )
    goto LABEL_37;
  if ( type == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance )
        {
          v58 = (System_String_o *)*((_QWORD *)Instance + 3);
          v59 = (ItemEntity_o *)Instance;
          *nameText = v58;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v58, v52, v53, v54, v55, v56, v57);
          klass = ItemEntity__GetCountText(v59, this->fields.num, v60);
          goto LABEL_59;
        }
      }
    }
    goto LABEL_85;
  }
  if ( type != 3 )
  {
LABEL_51:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v62 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
      v62 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v62->static_fields->unknownNameText;
    goto LABEL_58;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, nameText);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6805/*"FRIENDSHIP_NAME"*/, 0);
  *nameText = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = &StringLiteral_6806/*"FRIENDSHIP_UNIT"*/;
LABEL_81:
  v88 = LocalizationManager__Get((System_String_o *)*v19, 0);
  num = this->fields.num;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &num);
  v90 = System_String__Format(v88, v89, 0);
  *countText = v90;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)countText, (int32_t)v90, v91, v92, v93, v94, v95, v96);
}


System_String_o *GiftEntity__GetRewardName(GiftEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  int32_t v4; // w19
  void *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  ServantCostumeEntity_o *v8; // x19
  System_String_o *v9; // x20
  Il2CppObject *Name; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v11; // x19
  const MethodInfo *v13; // x2
  System_String_o *v14; // x20
  System_String_o *CountText; // x2
  __int64 *v16; // x8
  int32_t objectId; // w19
  __int64 v18; // x1
  Il2CppObject *Entity; // x19
  LocalizationManager_c *v20; // x0

  if ( (byte_5970C9A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EquipMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&StringLiteral_9077/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    sub_2213A60(&StringLiteral_9076/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_6805/*"FRIENDSHIP_NAME"*/);
    sub_2213A60(&StringLiteral_15442/*"USER_EXP_NAME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970C9A = 1;
  }
  type = this->fields.type;
  if ( type > 5 )
  {
    if ( type > 9 )
    {
      switch ( type )
      {
        case 10:
          objectId = this->fields.objectId;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          if ( !Master_object )
            goto LABEL_73;
          Master_object = ServantCostumeMaster__GetEntity(
                            (ServantCostumeMaster_o *)Master_object,
                            objectId / 100,
                            objectId % 100,
                            0);
          if ( !Master_object )
            goto LABEL_73;
          break;
        case 11:
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommandCodeMaster___);
          if ( Master_object )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       this->fields.objectId,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
            Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_9076/*"MISSION_REWARD_FOMAT_COMMANDCODE"*/, 0);
            if ( Entity )
            {
              v9 = (System_String_o *)Master_object;
              Name = (Il2CppObject *)CommandCodeEntity__GetName((CommandCodeEntity_o *)Entity, 0);
              return System_String__Format(v9, Name, 0);
            }
          }
LABEL_73:
          sub_2213CDC(Master_object, v6);
        case 12:
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
          if ( !Master_object )
            goto LABEL_73;
          Master_object = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            this->fields.objectId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_73;
          break;
        default:
          goto LABEL_66;
      }
      return (System_String_o *)*((_QWORD *)Master_object + 4);
    }
    if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type == 8 )
        return (System_String_o *)StringLiteral_1/*""*/;
      if ( type == 9 )
      {
        v4 = this->fields.objectId;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
        if ( Master_object )
        {
          v8 = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, v4 / 100, v4 % 100, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
          Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_9077/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
          if ( v8 )
          {
            v9 = (System_String_o *)Master_object;
            Name = (Il2CppObject *)ServantCostumeEntity__getShortName(v8, 0);
            return System_String__Format(v9, Name, 0);
          }
        }
        goto LABEL_73;
      }
      goto LABEL_66;
    }
    goto LABEL_40;
  }
  if ( type <= 2 )
  {
    if ( type != 1 )
    {
      if ( type == 2 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( Master_object )
        {
          Master_object = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            this->fields.objectId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( Master_object )
          {
            v14 = (System_String_o *)*((_QWORD *)Master_object + 3);
            CountText = ItemEntity__GetCountText((ItemEntity_o *)Master_object, this->fields.num, v13);
            return System_String__Concat_75694928(v14, (System_String_o *)StringLiteral_113/*" "*/, CountText, 0);
          }
        }
        goto LABEL_73;
      }
LABEL_66:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      if ( !byte_596B976 )
      {
        sub_2213A60(&LocalizationManager_TypeInfo);
        byte_596B976 = 1;
      }
      v20 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        v20 = LocalizationManager_TypeInfo;
      }
      return v20->static_fields->unknownNameText;
    }
LABEL_40:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        this->fields.objectId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Master_object )
        return ServantEntity__getName((ServantEntity_o *)Master_object, this->fields.limitCount, -1, 0, 0, 0);
    }
    goto LABEL_73;
  }
  if ( type == 3 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v16 = &StringLiteral_6805/*"FRIENDSHIP_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v16, 0);
  }
  if ( type == 4 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v16 = &StringLiteral_15442/*"USER_EXP_NAME"*/;
    return LocalizationManager__Get((System_String_o *)*v16, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EquipMaster___);
  if ( !Master_object )
    goto LABEL_73;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    this->fields.objectId,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_73;
  v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)*((_QWORD *)Master_object + 4);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v11, 0);
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

  if ( (byte_5970C9C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970C9C = 1;
  }
  if ( this->fields.type != 2 )
    return -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.objectId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v4);
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
  int klass; // w8

  if ( (byte_5970C9B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970C9B = 1;
  }
  if ( this->fields.type == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v4);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.objectId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Entity )
    {
      klass = (int)Entity[3].klass;
      LOBYTE(Entity) = klass == 1 || klass == 16;
    }
  }
  else
  {
    LOBYTE(Entity) = 0;
  }
  return (char)Entity;
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