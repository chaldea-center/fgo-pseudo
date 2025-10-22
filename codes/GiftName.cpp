void GiftName_BonusItemBySummonHistory___ctor(
        GiftName_BonusItemBySummonHistory_o *this,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  System_String_o *v16; // x22
  Il2CppObject *monitor; // x21
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55608 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_12457/*"SUMMON_HISTORY_BOUNS_ITEMS_GIFT_MSG"*/);
    byte_4C55608 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             objectId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"SUMMON_HISTORY_BOUNS_ITEMS_GIFT_MSG"*/, 0);
  if ( !Entity )
LABEL_9:
    sub_1C3E7C0(Instance, v8);
  v16 = (System_String_o *)Instance;
  monitor = (Il2CppObject *)Entity[1].monitor;
  v22 = count;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v10, v11, v12, v13, v14, v15);
  v19 = System_String__Format_63677760(v16, monitor, v18, 0);
  this->fields.name = v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v19, v20, v21);
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
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C55603 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C3E564(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3667/*"COMMAND_CODE_UNIT"*/);
    byte_4C55603 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      objectId,
                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  lookup = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance->fields.lookup;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(lookup, 0);
  this->fields.name = v10;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v10, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3667/*"COMMAND_CODE_UNIT"*/, 0);
  v14 = Gift__CountTextWithPrefix(11, v13, count, 0);
  this->fields.count = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v14, v15, v16);
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
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x24
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppClass *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *Empty; // x23
  struct System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_o *v33; // x0
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x0
  int klass; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C55609 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_3667/*"COMMAND_CODE_UNIT"*/);
    sub_1C3E564(&StringLiteral_3666/*"COMMAND_CODE_TAKE"*/);
    sub_1C3E564(&StringLiteral_6908/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/);
    byte_4C55609 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             objectId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6908/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, 0);
  v11 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3666/*"COMMAND_CODE_TAKE"*/,
                                                                  0);
  if ( !v11 )
    goto LABEL_24;
  v14 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C3E6A0(
                                                                    Master_object,
                                                                    v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_23;
  v11->m_Items[0] = v14;
  sub_1C3E508((CGThumbnailListItem_o *)v11->m_Items, (int32_t)v14, v12, v13);
  if ( !Entity )
LABEL_24:
    sub_1C3E7C0(Master_object, v8);
  klass = (int)Entity[4].klass;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)j_il2cpp_value_box_0(
                                                                  int_TypeInfo,
                                                                  &klass,
                                                                  v15,
                                                                  v16,
                                                                  v17,
                                                                  v18,
                                                                  v19,
                                                                  v20);
  v23 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C3E6A0(
                                                                    Master_object,
                                                                    v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v23, v21, v22);
  v26 = Entity[3].klass;
  if ( v26 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C3E6A0(v26, v11->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_25;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = (Il2CppObject *)v26;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[2], (int32_t)v26, v24, v25);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( Empty )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C3E6A0(Empty, v11->obj.klass->_1.element_class);
    if ( !Master_object )
    {
LABEL_25:
      v37 = sub_1C3E7E4(Master_object);
      sub_1C3E68C(v37, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 3 )
LABEL_23:
    sub_1C3E7C8(Master_object, v8);
  v11->m_Items[3] = (Il2CppObject *)Empty;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)Empty, v27, v28);
  v30 = System_String__Format_63677896(v10, v11, 0);
  this->fields.name = v30;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v30, v31, v32);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3667/*"COMMAND_CODE_UNIT"*/, 0);
  v34 = Gift__CountTextWithPrefix(11, v33, count, 0);
  this->fields.count = v34;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v34, v35, v36);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C55604 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_8711/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C55604 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, objectId / 100, objectId % 100, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8711/*"MISSION_PEWARD_DETAIL_SVT_COSTUME"*/, 0);
  if ( !Entity )
LABEL_9:
    sub_1C3E7C0(Instance, v7);
  v9 = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0);
  this->fields.name = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.count = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, v12, v13, v14);
}


void GiftName_Equip___ctor(GiftName_Equip_o *this, int32_t objectId, int32_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x21
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C55602 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C3E564(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_14823/*"UNIT_INFO"*/);
    byte_4C55602 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     objectId,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Instance[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(klass, 0);
  this->fields.name = v10;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v10, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
  v14 = Gift__CountTextWithPrefix(5, v13, count, 0);
  this->fields.count = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v14, v15, v16);
}


void GiftName_FriendShip___ctor(GiftName_FriendShip_o *this, int32_t count, const MethodInfo *method)
{
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C55600 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_6521/*"FRIENDSHIP_UNIT"*/);
    sub_1C3E564(&StringLiteral_6520/*"FRIENDSHIP_NAME"*/);
    byte_4C55600 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6520/*"FRIENDSHIP_NAME"*/, 0);
  this->fields.name = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6521/*"FRIENDSHIP_UNIT"*/, 0);
  v9 = Gift__CountTextWithPrefix(3, v8, count, 0);
  this->fields.count = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v9, v10, v11);
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

  if ( (byte_4C5560A & 1) == 0 )
  {
    sub_1C3E564(&GiftName_CommandCode_TypeInfo);
    sub_1C3E564(&GiftName_CostumeRelease_TypeInfo);
    sub_1C3E564(&GiftName_Equip_TypeInfo);
    sub_1C3E564(&GiftName_FriendShip_TypeInfo);
    sub_1C3E564(&GiftName_Item_TypeInfo);
    sub_1C3E564(&GiftName_Servant_TypeInfo);
    sub_1C3E564(&GiftName_Unknown_TypeInfo);
    sub_1C3E564(&GiftName_UserExp_TypeInfo);
    byte_4C5560A = 1;
  }
  switch ( type )
  {
    case 1:
    case 6:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_Servant_TypeInfo);
      GiftName_Servant___ctor(v7, objectId, count, v8);
      break;
    case 2:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_Item_TypeInfo);
      GiftName_Item___ctor((GiftName_Item_o *)v7, objectId, count, v9);
      break;
    case 3:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_FriendShip_TypeInfo);
      GiftName_FriendShip___ctor((GiftName_FriendShip_o *)v7, count, v10);
      break;
    case 4:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_UserExp_TypeInfo);
      GiftName_UserExp___ctor((GiftName_UserExp_o *)v7, count, v11);
      break;
    case 5:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_Equip_TypeInfo);
      GiftName_Equip___ctor((GiftName_Equip_o *)v7, objectId, count, v12);
      break;
    case 9:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_CostumeRelease_TypeInfo);
      GiftName_CostumeRelease___ctor((GiftName_CostumeRelease_o *)v7, objectId, v14, v15);
      break;
    case 11:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_CommandCode_TypeInfo);
      GiftName_CommandCode___ctor((GiftName_CommandCode_o *)v7, objectId, count, v16);
      break;
    default:
      v7 = (GiftName_Servant_o *)sub_1C3E7B0(GiftName_Unknown_TypeInfo);
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

  if ( (byte_4C55606 & 1) == 0 )
  {
    sub_1C3E564(&GiftName_BonusItemBySummonHistory_TypeInfo);
    sub_1C3E564(&GiftName_CommandCodeBySummonHistory_TypeInfo);
    sub_1C3E564(&GiftName_CostumeRelease_TypeInfo);
    sub_1C3E564(&GiftName_Equip_TypeInfo);
    sub_1C3E564(&GiftName_FriendShip_TypeInfo);
    sub_1C3E564(&GiftName_ServantBySummonHistory_TypeInfo);
    sub_1C3E564(&GiftName_Unknown_TypeInfo);
    sub_1C3E564(&GiftName_UserExp_TypeInfo);
    byte_4C55606 = 1;
  }
  switch ( type )
  {
    case 1:
    case 6:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_ServantBySummonHistory_TypeInfo);
      GiftName_ServantBySummonHistory___ctor(v7, objectId, count, v8);
      break;
    case 2:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_BonusItemBySummonHistory_TypeInfo);
      GiftName_BonusItemBySummonHistory___ctor((GiftName_BonusItemBySummonHistory_o *)v7, objectId, count, v9);
      break;
    case 3:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_FriendShip_TypeInfo);
      GiftName_FriendShip___ctor((GiftName_FriendShip_o *)v7, count, v10);
      break;
    case 4:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_UserExp_TypeInfo);
      GiftName_UserExp___ctor((GiftName_UserExp_o *)v7, count, v11);
      break;
    case 5:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_Equip_TypeInfo);
      GiftName_Equip___ctor((GiftName_Equip_o *)v7, objectId, count, v12);
      break;
    case 9:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_CostumeRelease_TypeInfo);
      GiftName_CostumeRelease___ctor((GiftName_CostumeRelease_o *)v7, objectId, v14, v15);
      break;
    case 11:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_CommandCodeBySummonHistory_TypeInfo);
      GiftName_CommandCodeBySummonHistory___ctor((GiftName_CommandCodeBySummonHistory_o *)v7, objectId, count, v16);
      break;
    default:
      v7 = (GiftName_ServantBySummonHistory_o *)sub_1C3E7B0(GiftName_Unknown_TypeInfo);
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
  const MethodInfo *v10; // x3
  struct System_String_o *m_CancellationTokenSource; // x1
  ItemEntity_o *v12; // x21
  struct System_String_o *CountTextWithPrefix; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C555FE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C555FE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      objectId,
                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  m_CancellationTokenSource = (struct System_String_o *)Instance->fields.m_CancellationTokenSource;
  v12 = (ItemEntity_o *)Instance;
  this->fields.name = m_CancellationTokenSource;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)m_CancellationTokenSource, v9, v10);
  CountTextWithPrefix = ItemEntity__GetCountTextWithPrefix(v12, count, 0);
  this->fields.count = CountTextWithPrefix;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)CountTextWithPrefix, v14, v15);
}


void GiftName_Servant___ctor(GiftName_Servant_o *this, int32_t objectId, int32_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantEntity_o *v9; // x21
  struct System_String_o *Name; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *CountFormat; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C555FF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C555FF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     objectId,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  v9 = (ServantEntity_o *)Instance;
  Name = ServantEntity__getName((ServantEntity_o *)Instance, 0, -1, 0, 0);
  this->fields.name = Name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)Name, v11, v12);
  CountFormat = ServantEntity__GetCountFormat(v9, 0);
  v14 = Gift__CountTextWithPrefix(1, CountFormat, count, 0);
  this->fields.count = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v14, v15, v16);
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
  const MethodInfo *v13; // x3
  ServantEntity_o *Entity; // x23
  int v15; // w22
  bool IsServantEquip; // w0
  bool v17; // w21
  System_String_o *v18; // x21
  System_Object_array *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x24
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_String_o *monitor; // x20
  Il2CppObject *v38; // x24
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x25
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x20
  struct System_String_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  int v58; // [xsp+8h] [xbp-48h] BYREF
  int v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C55607 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_11636/*"SERVANT_EQUIP_TAKE"*/);
    sub_1C3E564(&StringLiteral_6908/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/);
    sub_1C3E564(&StringLiteral_6907/*"GACHA_HISTORY_LIST_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12009/*"SERVANT_TAKE"*/);
    byte_4C55607 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             objectId,
                             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_43;
  v9 = (ServantEntity_o *)Master_object;
  CountFormat = ServantEntity__GetCountFormat((ServantEntity_o *)Master_object, 0);
  v11 = Gift__CountTextWithPrefix(1, CountFormat, count, 0);
  this->fields.count = v11;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v11, v12, v13);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_43;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                objectId,
                                (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    goto LABEL_43;
  Master_object = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)Master_object, objectId, 0);
  if ( !Entity )
    goto LABEL_43;
  v15 = Master_object;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0);
  v17 = IsServantEquip;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsServantEquip )
      goto LABEL_12;
    goto LABEL_25;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v17 )
  {
LABEL_25:
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6907/*"GACHA_HISTORY_LIST_MESSAGE"*/, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( Master_object )
    {
      v38 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              Entity->fields.classId,
              (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      v19 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12009/*"SERVANT_TAKE"*/, 0);
      if ( v19 )
      {
        v41 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_1C3E6A0(Master_object, v19->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_45;
        }
        if ( !LODWORD(v19->max_length) )
          goto LABEL_44;
        v19->m_Items[0] = v41;
        sub_1C3E508((CGThumbnailListItem_o *)v19->m_Items, (int32_t)v41, v39, v40);
        v59 = v15;
        Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v59, v42, v43, v44, v45, v46, v47);
        v50 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_1C3E6A0(Master_object, v19->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_45;
        }
        if ( LODWORD(v19->max_length) <= 1 )
          goto LABEL_44;
        v19->m_Items[1] = v50;
        sub_1C3E508((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v50, v48, v49);
        Master_object = (__int64)ServantEntity__getName(v9, 0, -1, 1, 0);
        v53 = (Il2CppObject *)Master_object;
        if ( Master_object )
        {
          Master_object = sub_1C3E6A0(Master_object, v19->obj.klass->_1.element_class);
          if ( !Master_object )
            goto LABEL_45;
        }
        if ( LODWORD(v19->max_length) <= 2 )
          goto LABEL_44;
        v19->m_Items[2] = v53;
        sub_1C3E508((CGThumbnailListItem_o *)&v19->m_Items[2], (int32_t)v53, v51, v52);
        if ( v38 )
        {
          monitor = (struct System_String_o *)v38[1].monitor;
          if ( !monitor )
            goto LABEL_41;
LABEL_40:
          Master_object = sub_1C3E6A0(monitor, v19->obj.klass->_1.element_class);
          if ( Master_object )
            goto LABEL_41;
LABEL_45:
          v57 = sub_1C3E7E4(Master_object);
          sub_1C3E68C(v57, 0);
        }
      }
    }
LABEL_43:
    sub_1C3E7C0(Master_object, v8);
  }
LABEL_12:
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6908/*"GACHA_HISTORY_LIST_MESSAGE_NO_CLASS"*/, 0);
  v19 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11636/*"SERVANT_EQUIP_TAKE"*/, 0);
  if ( !v19 )
    goto LABEL_43;
  v22 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C3E6A0(Master_object, v19->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_45;
  }
  if ( !LODWORD(v19->max_length) )
    goto LABEL_44;
  v19->m_Items[0] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)v19->m_Items, (int32_t)v22, v20, v21);
  v58 = v15;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &v58, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C3E6A0(Master_object, v19->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_45;
  }
  if ( LODWORD(v19->max_length) <= 1 )
    goto LABEL_44;
  v19->m_Items[1] = v31;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v31, v29, v30);
  Master_object = (__int64)ServantEntity__getName(v9, 0, -1, 0, 0);
  v34 = (Il2CppObject *)Master_object;
  if ( Master_object )
  {
    Master_object = sub_1C3E6A0(Master_object, v19->obj.klass->_1.element_class);
    if ( !Master_object )
      goto LABEL_45;
  }
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_44;
  v19->m_Items[2] = v34;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->m_Items[2], (int32_t)v34, v32, v33);
  monitor = string_TypeInfo->static_fields->Empty;
  if ( monitor )
    goto LABEL_40;
LABEL_41:
  if ( LODWORD(v19->max_length) <= 3 )
LABEL_44:
    sub_1C3E7C8(Master_object, v8);
  v19->m_Items[3] = (Il2CppObject *)monitor;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)monitor, v35, v36);
  v54 = System_String__Format_63677896(v18, v19, 0);
  this->fields.name = v54;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v54, v55, v56);
}


void GiftName_Unknown___ctor(GiftName_Unknown_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  LocalizationManager_c *v5; // x0
  struct System_String_o *unknownNameText; // x1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C55605 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C55605 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C5204F )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C5204F = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v5->static_fields->unknownNameText;
  this->fields.name = unknownNameText;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)unknownNameText, v3, v4);
  v7 = StringLiteral_1/*""*/;
  this->fields.count = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, v7, v8, v9);
}


void GiftName_UserExp___ctor(GiftName_UserExp_o *this, int32_t count, const MethodInfo *method)
{
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C55601 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_14858/*"USER_EXP_UNIT"*/);
    sub_1C3E564(&StringLiteral_14857/*"USER_EXP_NAME"*/);
    byte_4C55601 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_14857/*"USER_EXP_NAME"*/, 0);
  this->fields.name = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14858/*"USER_EXP_UNIT"*/, 0);
  v9 = Gift__CountTextWithPrefix(4, v8, count, 0);
  this->fields.count = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.count, (int32_t)v9, v10, v11);
}