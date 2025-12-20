void GiftName_BonusItemBySummonHistory___ctor(
        GiftName_BonusItemBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x21
  System_String_o *v10; // x22
  Il2CppObject *monitor; // x21
  Il2CppObject *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B00A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_12504/*"SUMMON_HISTORY_BOUNS_ITEMS_GIFT_MSG"*/);
    byte_4D2B00A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             objectId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12504/*"SUMMON_HISTORY_BOUNS_ITEMS_GIFT_MSG"*/, 0);
  if ( !Entity )
LABEL_9:
    sub_1C942F0(Instance, v8);
  v10 = (System_String_o *)Instance;
  monitor = (Il2CppObject *)Entity[1].monitor;
  v20 = count;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v13 = System_String__Format_64459052(v10, monitor, v12, 0);
  this->fields.name = v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v13, v14, v15, v16, v17, v18, v19);
}


void GiftName_CommandCode___ctor(
        GiftName_CommandCode_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *lookup; // x21
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *v17; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2B005 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_3672/*"COMMAND_CODE_UNIT"*/);
    byte_4D2B005 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      objectId,
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(lookup, 0);
  this->fields.name = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMMAND_CODE_UNIT"*/, 0);
  v18 = Gift__CountTextWithPrefix(11, v17, count, 0);
  this->fields.count = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void GiftName_CommandCodeBySummonHistory___ctor(
        GiftName_CommandCodeBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x23
  System_String_o *v10; // x21
  System_Object_array *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppClass *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_String_o *Empty; // x23
  struct System_String_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x0
  struct System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  __int64 v55; // x0
  int klass; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B00B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_3672/*"COMMAND_CODE_UNIT"*/);
    sub_1C94098(&StringLiteral_3671/*"COMMAND_CODE_TAKE"*/);
    sub_1C94098(&StringLiteral_6918/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/);
    byte_4D2B00B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objectId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6918/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, 0);
  v11 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3671/*"COMMAND_CODE_TAKE"*/,
                                                                  0);
  if ( !v11 )
    goto LABEL_24;
  v18 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C941D4(
                                                                    Master_object,
                                                                    v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_23;
  v11->m_Items[0] = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v11->m_Items, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  if ( !Entity )
LABEL_24:
    sub_1C942F0(Master_object, v8);
  klass = (int)Entity[4].klass;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  v25 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C941D4(
                                                                    Master_object,
                                                                    v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = v25;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11->m_Items[1], (int32_t)v25, v19, v20, v21, v22, v23, v24);
  v32 = Entity[3].klass;
  if ( v32 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C941D4(v32, v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = (Il2CppObject *)v32;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11->m_Items[2], (int32_t)v32, v26, v27, v28, v29, v30, v31);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( Empty )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C941D4(Empty, v11->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_25:
      v55 = sub_1C94314();
      sub_1C941C0(v55, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 3 )
LABEL_23:
    sub_1C942F8(Master_object);
  v11->m_Items[3] = (Il2CppObject *)Empty;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11->m_Items[3], (int32_t)Empty, v33, v34, v35, v36, v37, v38);
  v40 = System_String__Format_64459188(v10, v11, 0);
  this->fields.name = v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMMAND_CODE_UNIT"*/, 0);
  v48 = Gift__CountTextWithPrefix(11, v47, count, 0);
  this->fields.count = v48;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v48, v49, v50, v51, v52, v53, v54);
}


void GiftName_CostumeRelease___ctor(
        GiftName_CostumeRelease_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ServantCostumeEntity_o *Entity; // x20
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2B006 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_8731/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B006 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8731/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
  if ( !Entity )
LABEL_9:
    sub_1C942F0(Instance, v7);
  v9 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0);
  this->fields.name = v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.count = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, v16, v17, v18, v19, v20, v21, v22);
}


void GiftName_Equip___ctor(GiftName_Equip_o *this, int32_t objectId, int32_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x21
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *v17; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2B004 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_14873/*"UNIT_INFO"*/);
    byte_4D2B004 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     objectId,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(klass, 0);
  this->fields.name = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14873/*"UNIT_INFO"*/, 0);
  v18 = Gift__CountTextWithPrefix(5, v17, count, 0);
  this->fields.count = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void GiftName_FriendShip___ctor(GiftName_FriendShip_o *this, int32_t count, const MethodInfo *method)
{
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2B002 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_6528/*"FRIENDSHIP_UNIT"*/);
    sub_1C94098(&StringLiteral_6527/*"FRIENDSHIP_NAME"*/);
    byte_4D2B002 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FRIENDSHIP_NAME"*/, 0);
  this->fields.name = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6528/*"FRIENDSHIP_UNIT"*/, 0);
  v13 = Gift__CountTextWithPrefix(3, v12, count, 0);
  this->fields.count = v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v13, v14, v15, v16, v17, v18, v19);
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
  GiftName_Servant_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4D2B00C & 1) == 0 )
  {
    sub_1C94098(&GiftName_CommandCode_TypeInfo);
    sub_1C94098(&GiftName_CostumeRelease_TypeInfo);
    sub_1C94098(&GiftName_Equip_TypeInfo);
    sub_1C94098(&GiftName_FriendShip_TypeInfo);
    sub_1C94098(&GiftName_Item_TypeInfo);
    sub_1C94098(&GiftName_Servant_TypeInfo);
    sub_1C94098(&GiftName_Unknown_TypeInfo);
    sub_1C94098(&GiftName_UserExp_TypeInfo);
    byte_4D2B00C = 1;
  }
  switch ( type )
  {
    case 1:
    case 6:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_Servant_TypeInfo);
      GiftName_Servant___ctor(v7, objectId, count, v8);
      break;
    case 2:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_Item_TypeInfo);
      GiftName_Item___ctor((GiftName_Item_o *)v7, objectId, count, v9);
      break;
    case 3:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_FriendShip_TypeInfo);
      GiftName_FriendShip___ctor((GiftName_FriendShip_o *)v7, count, v10);
      break;
    case 4:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_UserExp_TypeInfo);
      GiftName_UserExp___ctor((GiftName_UserExp_o *)v7, count, v11);
      break;
    case 5:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_Equip_TypeInfo);
      GiftName_Equip___ctor((GiftName_Equip_o *)v7, objectId, count, v12);
      break;
    case 9:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_CostumeRelease_TypeInfo);
      GiftName_CostumeRelease___ctor((GiftName_CostumeRelease_o *)v7, objectId, v14, v15);
      break;
    case 11:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_CommandCode_TypeInfo);
      GiftName_CommandCode___ctor((GiftName_CommandCode_o *)v7, objectId, count, v16);
      break;
    default:
      v7 = (GiftName_Servant_o *)sub_1C942E4(GiftName_Unknown_TypeInfo);
      GiftName_Unknown___ctor((GiftName_Unknown_o *)v7, v13);
      break;
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
  GiftName_ServantBySummonHistory_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4D2B008 & 1) == 0 )
  {
    sub_1C94098(&GiftName_BonusItemBySummonHistory_TypeInfo);
    sub_1C94098(&GiftName_CommandCodeBySummonHistory_TypeInfo);
    sub_1C94098(&GiftName_CostumeRelease_TypeInfo);
    sub_1C94098(&GiftName_Equip_TypeInfo);
    sub_1C94098(&GiftName_FriendShip_TypeInfo);
    sub_1C94098(&GiftName_ServantBySummonHistory_TypeInfo);
    sub_1C94098(&GiftName_Unknown_TypeInfo);
    sub_1C94098(&GiftName_UserExp_TypeInfo);
    byte_4D2B008 = 1;
  }
  switch ( type )
  {
    case 1:
    case 6:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_ServantBySummonHistory_TypeInfo);
      GiftName_ServantBySummonHistory___ctor(v7, objectId, count, v8);
      break;
    case 2:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_BonusItemBySummonHistory_TypeInfo);
      GiftName_BonusItemBySummonHistory___ctor((GiftName_BonusItemBySummonHistory_o *)v7, objectId, count, v9);
      break;
    case 3:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_FriendShip_TypeInfo);
      GiftName_FriendShip___ctor((GiftName_FriendShip_o *)v7, count, v10);
      break;
    case 4:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_UserExp_TypeInfo);
      GiftName_UserExp___ctor((GiftName_UserExp_o *)v7, count, v11);
      break;
    case 5:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_Equip_TypeInfo);
      GiftName_Equip___ctor((GiftName_Equip_o *)v7, objectId, count, v12);
      break;
    case 9:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_CostumeRelease_TypeInfo);
      GiftName_CostumeRelease___ctor((GiftName_CostumeRelease_o *)v7, objectId, v14, v15);
      break;
    case 11:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_CommandCodeBySummonHistory_TypeInfo);
      GiftName_CommandCodeBySummonHistory___ctor((GiftName_CommandCodeBySummonHistory_o *)v7, objectId, count, v16);
      break;
    default:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C942E4(GiftName_Unknown_TypeInfo);
      GiftName_Unknown___ctor((GiftName_Unknown_o *)v7, v13);
      break;
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_String_o *m_CancellationTokenSource; // x1
  ItemEntity_o *v16; // x21
  struct System_String_o *CountTextWithPrefix; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2B000 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B000 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      objectId,
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  m_CancellationTokenSource = (struct System_String_o *)Instance->fields.m_CancellationTokenSource;
  v16 = (ItemEntity_o *)Instance;
  this->fields.name = m_CancellationTokenSource;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)m_CancellationTokenSource,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CountTextWithPrefix = ItemEntity__GetCountTextWithPrefix(v16, count, 0);
  this->fields.count = CountTextWithPrefix;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.count,
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *CountFormat; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2B001 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B001 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     objectId,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  v9 = (ServantEntity_o *)Instance;
  Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0);
  this->fields.name = Name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)Name, v11, v12, v13, v14, v15, v16);
  CountFormat = ServantEntity__GetCountFormat(v9, 0);
  v18 = Gift__CountTextWithPrefix(1, CountFormat, count, 0);
  this->fields.count = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void GiftName_ServantBySummonHistory___ctor(
        GiftName_ServantBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  __int64 v8; // x1
  ServantEntity_o *v9; // x20
  System_String_o *CountFormat; // x0
  struct System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ServantEntity_o *Entity; // x23
  int v19; // w22
  bool IsServantEquip; // w0
  bool v21; // w21
  System_String_o *v22; // x21
  System_Object_array *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *v30; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_String_o *monitor; // x20
  Il2CppObject *v52; // x24
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  Il2CppObject *v59; // x25
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  Il2CppObject *v66; // x22
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  Il2CppObject *v73; // x20
  struct System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  __int64 v81; // x0
  int v82; // [xsp+8h] [xbp-48h] BYREF
  int v83; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B009 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_11681/*"SERVANT_EQUIP_TAKE"*/);
    sub_1C94098(&StringLiteral_6918/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/);
    sub_1C94098(&StringLiteral_6917/*"GACHA_HISTORY_LIST_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12054/*"SERVANT_TAKE"*/);
    byte_4D2B009 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             objectId,
                             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_43;
  v9 = (ServantEntity_o *)Master_object;
  CountFormat = ServantEntity__GetCountFormat((ServantEntity_o *)Master_object, 0);
  v11 = Gift__CountTextWithPrefix(1, CountFormat, count, 0);
  this->fields.count = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_43;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                objectId,
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    goto LABEL_43;
  Master_object = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)Master_object, objectId, 0);
  if ( !Entity )
    goto LABEL_43;
  v19 = Master_object;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0);
  v21 = IsServantEquip;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsServantEquip )
      goto LABEL_12;
    goto LABEL_25;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v21 )
  {
LABEL_25:
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6917/*"GACHA_HISTORY_LIST_MESSAGE"*/, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( Master_object )
    {
      v52 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              Entity->fields.classId,
              (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      v23 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_TAKE"*/, 0);
      if ( v23 )
      {
        v59 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_1C941D4(Master_object, v23->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_45;
        }
        if ( !LODWORD(v23->max_length) )
          goto LABEL_44;
        v23->m_Items[0] = v59;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)v23->m_Items, (int32_t)v59, v53, v54, v55, v56, v57, v58);
        v83 = v19;
        Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v83);
        v66 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_1C941D4(Master_object, v23->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_45;
        }
        if ( LODWORD(v23->max_length) <= 1 )
          goto LABEL_44;
        v23->m_Items[1] = v66;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23->m_Items[1], (int32_t)v66, v60, v61, v62, v63, v64, v65);
        Master_object = (__int64)ServantEntity__getName(v9, 0, -1, 1, 0);
        v73 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_1C941D4(Master_object, v23->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_45;
        }
        if ( LODWORD(v23->max_length) <= 2 )
          goto LABEL_44;
        v23->m_Items[2] = v73;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23->m_Items[2], (int32_t)v73, v67, v68, v69, v70, v71, v72);
        if ( v52 )
        {
          monitor = (struct System_String_o *)v52[1].monitor;
          if ( !monitor )
            goto LABEL_41;
LABEL_40:
          Master_object = sub_1C941D4(monitor, v23->obj.klass->_1.element_class);
          if ( Master_object )
            goto LABEL_41;
LABEL_45:
          v81 = sub_1C94314();
          sub_1C941C0(v81, 0);
        }
      }
    }
LABEL_43:
    sub_1C942F0(Master_object, v8);
  }
LABEL_12:
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6918/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, 0);
  v23 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11681/*"SERVANT_EQUIP_TAKE"*/, 0);
  if ( !v23 )
    goto LABEL_43;
  v30 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C941D4(Master_object, v23->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_45;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_44;
  v23->m_Items[0] = v30;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v23->m_Items, (int32_t)v30, v24, v25, v26, v27, v28, v29);
  v82 = v19;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v37 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C941D4(Master_object, v23->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_44;
  v23->m_Items[1] = v37;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23->m_Items[1], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  Master_object = (__int64)ServantEntity__getName(v9, 0, -1, 0, 0);
  v44 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C941D4(Master_object, v23->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_44;
  v23->m_Items[2] = v44;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23->m_Items[2], (int32_t)v44, v38, v39, v40, v41, v42, v43);
  monitor = string_TypeInfo->static_fields->Empty;
  if ( monitor )
    goto LABEL_40;
LABEL_41:
  if ( LODWORD(v23->max_length) <= 3 )
LABEL_44:
    sub_1C942F8(Master_object);
  v23->m_Items[3] = (Il2CppObject *)monitor;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23->m_Items[3], (int32_t)monitor, v45, v46, v47, v48, v49, v50);
  v74 = System_String__Format_64459188(v22, v23, 0);
  this->fields.name = v74;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v74, v75, v76, v77, v78, v79, v80);
}


void GiftName_Unknown___ctor(GiftName_Unknown_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  LocalizationManager_c *v9; // x0
  struct System_String_o *unknownNameText; // x1
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2B007 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B007 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D277C7 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D277C7 = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v9->static_fields->unknownNameText;
  this->fields.name = unknownNameText;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)unknownNameText, v3, v4, v5, v6, v7, v8);
  v11 = StringLiteral_1/*""*/;
  this->fields.count = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, v11, v12, v13, v14, v15, v16, v17);
}


void GiftName_UserExp___ctor(GiftName_UserExp_o *this, int32_t count, const MethodInfo *method)
{
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2B003 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_14904/*"USER_EXP_UNIT"*/);
    sub_1C94098(&StringLiteral_14903/*"USER_EXP_NAME"*/);
    byte_4D2B003 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_14903/*"USER_EXP_NAME"*/, 0);
  this->fields.name = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_14904/*"USER_EXP_UNIT"*/, 0);
  v13 = Gift__CountTextWithPrefix(4, v12, count, 0);
  this->fields.count = v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.count, (int32_t)v13, v14, v15, v16, v17, v18, v19);
}