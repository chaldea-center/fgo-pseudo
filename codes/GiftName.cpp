void GiftName_BonusItemBySummonHistory___ctor(
        GiftName_BonusItemBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Entity; // x21
  System_String_o *v12; // x22
  Il2CppObject *monitor; // x21
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5936ECB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12950/*"SUMMON_HISTORY_BOUNS_ITEMS_GIFT_MSG"*/);
    byte_5936ECB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             objectId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12950/*"SUMMON_HISTORY_BOUNS_ITEMS_GIFT_MSG"*/, 0);
  if ( !Entity )
LABEL_9:
    sub_21FFECC(Instance, v8);
  v12 = (System_String_o *)Instance;
  monitor = (Il2CppObject *)Entity[1].monitor;
  v22 = count;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
  v15 = System_String__Format_75484576(v12, monitor, v14, 0);
  this->fields.name = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}


void GiftName_CommandCode___ctor(
        GiftName_CommandCode_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x21
  struct System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x0
  struct System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5936EC6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_3804/*"COMMAND_CODE_UNIT"*/);
    byte_5936EC6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      objectId,
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v8);
  }
  lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8, v9);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(lookup, 0);
  this->fields.name = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMAND_CODE_UNIT"*/, 0);
  v21 = Gift__CountTextWithPrefix(11, v20, count, 0);
  this->fields.count = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


void GiftName_CommandCodeBySummonHistory___ctor(
        GiftName_CommandCodeBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Entity; // x23
  System_String_o *v14; // x21
  System_Object_array *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x24
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppClass *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x23
  struct System_String_o *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x0
  struct System_String_o *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x0
  int klass; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936ECC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_3804/*"COMMAND_CODE_UNIT"*/);
    sub_21FFC50(&StringLiteral_3803/*"COMMAND_CODE_TAKE"*/);
    sub_21FFC50(&StringLiteral_7189/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/);
    byte_5936ECC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objectId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_7189/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, 0);
  v15 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3803/*"COMMAND_CODE_TAKE"*/,
                                                                  0);
  if ( !v15 )
    goto LABEL_24;
  v22 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFDA4(
                                                                    Master_object,
                                                                    v15->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_23;
  v15->m_Items[0] = v22;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v15->m_Items, (int32_t)v22, v16, v17, v18, v19, v20, v21);
  if ( !Entity )
LABEL_24:
    sub_21FFECC(Master_object, v10);
  klass = (int)Entity[4].klass;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)j_il2cpp_value_box_0(qword_594C070, &klass);
  v30 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFDA4(
                                                                    Master_object,
                                                                    v15->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v15->m_Items[1] = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->m_Items[1], (int32_t)v30, v24, v25, v26, v27, v28, v29);
  v37 = Entity[3].klass;
  if ( v37 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFDA4(v37, v15->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_23;
  v15->m_Items[2] = (Il2CppObject *)v37;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->m_Items[2], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  v44 = **(Il2CppObject ***)(qword_594C0B8 + 184);
  if ( v44 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFDA4(v44, v15->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_25:
      v60 = sub_21FFEF0(Master_object, v23);
      sub_21FFD90(v60, 0);
    }
  }
  if ( (v15->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_21FFED4(Master_object);
  v15->m_Items[3] = v44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->m_Items[3], (int32_t)v44, v38, v39, v40, v41, v42, v43);
  v45 = System_String__Format_75484712(v14, v15, 0);
  this->fields.name = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMAND_CODE_UNIT"*/, 0);
  v53 = Gift__CountTextWithPrefix(11, v52, count, 0);
  this->fields.count = v53;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v53, v54, v55, v56, v57, v58, v59);
}


void GiftName_CostumeRelease___ctor(
        GiftName_CostumeRelease_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  ServantCostumeEntity_o *Entity; // x20
  struct System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5936EC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9061/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936EC7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9061/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
  if ( !Entity )
LABEL_9:
    sub_21FFECC(Instance, v7);
  v11 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0);
  this->fields.name = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.count = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, v18, v19, v20, v21, v22, v23, v24);
}


void GiftName_Equip___ctor(GiftName_Equip_o *this, int32_t objectId, int32_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x21
  struct System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x0
  struct System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5936EC5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_15382/*"UNIT_INFO"*/);
    byte_5936EC5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     objectId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v8);
  }
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance[2].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8, v9);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(klass, 0);
  this->fields.name = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15382/*"UNIT_INFO"*/, 0);
  v21 = Gift__CountTextWithPrefix(5, v20, count, 0);
  this->fields.count = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


void GiftName_FriendShip___ctor(GiftName_FriendShip_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x0
  struct System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5936EC3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6794/*"FRIENDSHIP_UNIT"*/);
    sub_21FFC50(&StringLiteral_6793/*"FRIENDSHIP_NAME"*/);
    byte_5936EC3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_6793/*"FRIENDSHIP_NAME"*/, 0);
  this->fields.name = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_6794/*"FRIENDSHIP_UNIT"*/, 0);
  v15 = Gift__CountTextWithPrefix(3, v14, count, 0);
  this->fields.count = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}


void GiftName_GiftNameBase___ctor(GiftName_GiftNameBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *GiftName_GiftNameBase__GetGiftCountString(GiftName_GiftNameBase_o *this, const MethodInfo *method)
{
  return this->fields.count;
}


System_String_o *GiftName_GiftNameBase__GetGiftName(GiftName_GiftNameBase_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


void GiftName_GiftNameFactory___ctor(GiftName_GiftNameFactory_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


GiftName_GiftNameBase_o *GiftName_GiftNameFactory__Create(
        int32_t type,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  GiftName_CostumeRelease_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_5936ECD & 1) == 0 )
  {
    sub_21FFC50(&GiftName_CommandCode_TypeInfo);
    sub_21FFC50(&GiftName_CostumeRelease_TypeInfo);
    sub_21FFC50(&GiftName_Equip_TypeInfo);
    sub_21FFC50(&GiftName_FriendShip_TypeInfo);
    sub_21FFC50(&GiftName_Item_TypeInfo);
    sub_21FFC50(&GiftName_Servant_TypeInfo);
    sub_21FFC50(&GiftName_Unknown_TypeInfo);
    sub_21FFC50(&GiftName_UserExp_TypeInfo);
    byte_5936ECD = 1;
  }
  if ( type > 4 )
  {
    if ( type > 8 )
    {
      if ( type == 9 )
      {
        v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_CostumeRelease_TypeInfo);
        GiftName_CostumeRelease___ctor(v7, objectId, v14, v15);
        return (GiftName_GiftNameBase_o *)v7;
      }
      if ( type == 11 )
      {
        v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_CommandCode_TypeInfo);
        GiftName_CommandCode___ctor((GiftName_CommandCode_o *)v7, objectId, count, v11);
        return (GiftName_GiftNameBase_o *)v7;
      }
      goto LABEL_20;
    }
    if ( type == 5 )
    {
      v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_Equip_TypeInfo);
      GiftName_Equip___ctor((GiftName_Equip_o *)v7, objectId, count, v12);
      return (GiftName_GiftNameBase_o *)v7;
    }
    if ( type != 6 )
      goto LABEL_20;
LABEL_11:
    v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_Servant_TypeInfo);
    GiftName_Servant___ctor((GiftName_Servant_o *)v7, objectId, count, v9);
    return (GiftName_GiftNameBase_o *)v7;
  }
  if ( type <= 2 )
  {
    if ( type != 1 )
    {
      if ( type == 2 )
      {
        v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_Item_TypeInfo);
        GiftName_Item___ctor((GiftName_Item_o *)v7, objectId, count, v8);
        return (GiftName_GiftNameBase_o *)v7;
      }
LABEL_20:
      v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_Unknown_TypeInfo);
      GiftName_Unknown___ctor((GiftName_Unknown_o *)v7, v16);
      return (GiftName_GiftNameBase_o *)v7;
    }
    goto LABEL_11;
  }
  if ( type == 3 )
  {
    v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_FriendShip_TypeInfo);
    GiftName_FriendShip___ctor((GiftName_FriendShip_o *)v7, count, v13);
  }
  else
  {
    v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_UserExp_TypeInfo);
    GiftName_UserExp___ctor((GiftName_UserExp_o *)v7, count, v10);
  }
  return (GiftName_GiftNameBase_o *)v7;
}


void GiftName_GiftNameFactoryBySummonHistory___ctor(
        GiftName_GiftNameFactoryBySummonHistory_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


GiftName_GiftNameBase_o *GiftName_GiftNameFactoryBySummonHistory__Create(
        int32_t type,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  GiftName_CostumeRelease_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_5936EC9 & 1) == 0 )
  {
    sub_21FFC50(&GiftName_BonusItemBySummonHistory_TypeInfo);
    sub_21FFC50(&GiftName_CommandCodeBySummonHistory_TypeInfo);
    sub_21FFC50(&GiftName_CostumeRelease_TypeInfo);
    sub_21FFC50(&GiftName_Equip_TypeInfo);
    sub_21FFC50(&GiftName_FriendShip_TypeInfo);
    sub_21FFC50(&GiftName_ServantBySummonHistory_TypeInfo);
    sub_21FFC50(&GiftName_Unknown_TypeInfo);
    sub_21FFC50(&GiftName_UserExp_TypeInfo);
    byte_5936EC9 = 1;
  }
  if ( type > 4 )
  {
    if ( type > 8 )
    {
      if ( type == 9 )
      {
        v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_CostumeRelease_TypeInfo);
        GiftName_CostumeRelease___ctor(v7, objectId, v14, v15);
        return (GiftName_GiftNameBase_o *)v7;
      }
      if ( type == 11 )
      {
        v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_CommandCodeBySummonHistory_TypeInfo);
        GiftName_CommandCodeBySummonHistory___ctor((GiftName_CommandCodeBySummonHistory_o *)v7, objectId, count, v11);
        return (GiftName_GiftNameBase_o *)v7;
      }
      goto LABEL_20;
    }
    if ( type == 5 )
    {
      v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_Equip_TypeInfo);
      GiftName_Equip___ctor((GiftName_Equip_o *)v7, objectId, count, v12);
      return (GiftName_GiftNameBase_o *)v7;
    }
    if ( type != 6 )
      goto LABEL_20;
LABEL_11:
    v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_ServantBySummonHistory_TypeInfo);
    GiftName_ServantBySummonHistory___ctor((GiftName_ServantBySummonHistory_o *)v7, objectId, count, v9);
    return (GiftName_GiftNameBase_o *)v7;
  }
  if ( type <= 2 )
  {
    if ( type != 1 )
    {
      if ( type == 2 )
      {
        v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_BonusItemBySummonHistory_TypeInfo);
        GiftName_BonusItemBySummonHistory___ctor((GiftName_BonusItemBySummonHistory_o *)v7, objectId, count, v8);
        return (GiftName_GiftNameBase_o *)v7;
      }
LABEL_20:
      v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_Unknown_TypeInfo);
      GiftName_Unknown___ctor((GiftName_Unknown_o *)v7, v16);
      return (GiftName_GiftNameBase_o *)v7;
    }
    goto LABEL_11;
  }
  if ( type == 3 )
  {
    v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_FriendShip_TypeInfo);
    GiftName_FriendShip___ctor((GiftName_FriendShip_o *)v7, count, v13);
  }
  else
  {
    v7 = (GiftName_CostumeRelease_o *)sub_21FFEBC(GiftName_UserExp_TypeInfo);
    GiftName_UserExp___ctor((GiftName_UserExp_o *)v7, count, v10);
  }
  return (GiftName_GiftNameBase_o *)v7;
}


void GiftName_GiftNameFactoryBySummonHistory__OutputWarnLog(int32_t type, const MethodInfo *method)
{
  ;
}


void GiftName_Item___ctor(GiftName_Item_o *this, int32_t objectId, int32_t count, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_o *m_CancellationTokenSource; // x1
  ItemEntity_o *v16; // x21
  struct System_String_o *CountTextWithPrefix; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5936EC1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936EC1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      objectId,
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v8);
  }
  m_CancellationTokenSource = (struct System_String_o *)Instance->fields.m_CancellationTokenSource;
  v16 = (ItemEntity_o *)Instance;
  this->fields.name = m_CancellationTokenSource;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)m_CancellationTokenSource,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CountTextWithPrefix = ItemEntity__GetCountTextWithPrefix(v16, count, 0);
  this->fields.count = CountTextWithPrefix;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.count,
    (int32_t)CountTextWithPrefix,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void GiftName_Servant___ctor(GiftName_Servant_o *this, int32_t objectId, int32_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantEntity_o *v9; // x21
  struct System_String_o *Name; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *CountFormat; // x0
  struct System_String_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5936EC2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936EC2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     objectId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v8);
  }
  v9 = (ServantEntity_o *)Instance;
  Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0, 0);
  this->fields.name = Name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)Name, v11, v12, v13, v14, v15, v16);
  CountFormat = ServantEntity__GetCountFormat(v9, 0);
  v18 = Gift__CountTextWithPrefix(1, CountFormat, count, 0);
  this->fields.count = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void GiftName_ServantBySummonHistory___ctor(
        GiftName_ServantBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 Master_object; // x0
  __int64 v10; // x1
  ServantEntity_o *v11; // x20
  System_String_o *CountFormat; // x0
  struct System_String_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantEntity_o *Entity; // x23
  int v21; // w22
  __int64 v22; // x1
  __int64 v23; // x2
  bool IsServantEquip; // w8
  int v25; // w9
  System_String_o *v26; // x21
  System_Object_array *v27; // x23
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x24
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x20
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject *monitor; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  Il2CppObject *v59; // x24
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  Il2CppObject *v66; // x25
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  Il2CppObject *v73; // x22
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  Il2CppObject *v80; // x20
  struct System_String_o *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x0
  int v89; // [xsp+8h] [xbp-48h] BYREF
  int v90; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936ECA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_12119/*"SERVANT_EQUIP_TAKE"*/);
    sub_21FFC50(&StringLiteral_7189/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/);
    sub_21FFC50(&StringLiteral_7188/*"GACHA_HISTORY_LIST_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12496/*"SERVANT_TAKE"*/);
    byte_5936ECA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             objectId,
                             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_45;
  v11 = (ServantEntity_o *)Master_object;
  CountFormat = ServantEntity__GetCountFormat((ServantEntity_o *)Master_object, 0);
  v13 = Gift__CountTextWithPrefix(1, CountFormat, count, 0);
  this->fields.count = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                objectId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    goto LABEL_45;
  Master_object = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)Master_object, objectId, 0);
  if ( !Entity )
    goto LABEL_45;
  v21 = Master_object;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0);
  v25 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !IsServantEquip )
  {
    if ( !v25 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_7188/*"GACHA_HISTORY_LIST_MESSAGE"*/, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57, v58);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( Master_object )
    {
      v59 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              Entity->fields.classId,
              (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      v27 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12496/*"SERVANT_TAKE"*/, 0);
      if ( v27 )
      {
        v66 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_21FFDA4(Master_object, v27->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_47;
        }
        if ( !LODWORD(v27->max_length) )
          goto LABEL_46;
        v27->m_Items[0] = v66;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v27->m_Items, (int32_t)v66, v60, v61, v62, v63, v64, v65);
        v90 = v21;
        Master_object = j_il2cpp_value_box_0(qword_594C070, &v90);
        v73 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_21FFDA4(Master_object, v27->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_47;
        }
        if ( (v27->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_46;
        v27->m_Items[1] = v73;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[1], (int32_t)v73, v67, v68, v69, v70, v71, v72);
        Master_object = (__int64)ServantEntity__getName(v11, 0, -1, 1, 0, 0);
        v80 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_21FFDA4(Master_object, v27->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_47;
        }
        if ( LODWORD(v27->max_length) <= 2 )
          goto LABEL_46;
        v27->m_Items[2] = v80;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[2], (int32_t)v80, v74, v75, v76, v77, v78, v79);
        if ( v59 )
        {
          monitor = (Il2CppObject *)v59[1].monitor;
          if ( !monitor )
            goto LABEL_43;
LABEL_42:
          Master_object = sub_21FFDA4(monitor, v27->obj.klass->_1.element_class);
          if ( Master_object )
            goto LABEL_43;
LABEL_47:
          v88 = sub_21FFEF0(Master_object, v35);
          sub_21FFD90(v88, 0);
        }
      }
    }
LABEL_45:
    sub_21FFECC(Master_object, v10);
  }
  if ( !v25 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_7189/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, 0);
  v27 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_EQUIP_TAKE"*/, 0);
  if ( !v27 )
    goto LABEL_45;
  v34 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_21FFDA4(Master_object, v27->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_47;
  }
  if ( !LODWORD(v27->max_length) )
    goto LABEL_46;
  v27->m_Items[0] = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v27->m_Items, (int32_t)v34, v28, v29, v30, v31, v32, v33);
  v89 = v21;
  Master_object = j_il2cpp_value_box_0(qword_594C070, &v89);
  v42 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_21FFDA4(Master_object, v27->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_47;
  }
  if ( (v27->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_46;
  v27->m_Items[1] = v42;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[1], (int32_t)v42, v36, v37, v38, v39, v40, v41);
  Master_object = (__int64)ServantEntity__getName(v11, 0, -1, 0, 0, 0);
  v49 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_21FFDA4(Master_object, v27->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_47;
  }
  if ( LODWORD(v27->max_length) <= 2 )
    goto LABEL_46;
  v27->m_Items[2] = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[2], (int32_t)v49, v43, v44, v45, v46, v47, v48);
  monitor = **(Il2CppObject ***)(qword_594C0B8 + 184);
  if ( monitor )
    goto LABEL_42;
LABEL_43:
  if ( (v27->max_length & 0xFFFFFFFC) == 0 )
LABEL_46:
    sub_21FFED4(Master_object);
  v27->m_Items[3] = monitor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->m_Items[3], (int32_t)monitor, v50, v51, v52, v53, v54, v55);
  v81 = System_String__Format_75484712(v26, v27, 0);
  this->fields.name = v81;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v81, v82, v83, v84, v85, v86, v87);
}


void GiftName_Unknown___ctor(GiftName_Unknown_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  LocalizationManager_c *v10; // x0
  struct System_String_o *unknownNameText; // x1
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5936EC8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936EC8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  if ( !byte_593385D )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_593385D = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
    v10 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v10->static_fields->unknownNameText;
  this->fields.name = unknownNameText;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)unknownNameText, v4, v5, v6, v7, v8, v9);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.count = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, v12, v13, v14, v15, v16, v17, v18);
}


void GiftName_UserExp___ctor(GiftName_UserExp_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x0
  struct System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5936EC4 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15413/*"USER_EXP_UNIT"*/);
    sub_21FFC50(&StringLiteral_15412/*"USER_EXP_NAME"*/);
    byte_5936EC4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"USER_EXP_NAME"*/, 0);
  this->fields.name = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15413/*"USER_EXP_UNIT"*/, 0);
  v15 = Gift__CountTextWithPrefix(4, v14, count, 0);
  this->fields.count = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.count, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}