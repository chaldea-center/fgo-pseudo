void __fastcall FriendshipUpItemInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct FriendshipUpItemInfo_StaticFields *static_fields; // x0
  struct FriendshipUpItemInfo_StaticFields *v6; // x0

  if ( (byte_4B6271B & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemInfo_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_6992/*"FriendshipUpItemUseState"*/, v2);
    sub_1BE4ACC(&StringLiteral_25441/*"{0}_icon"*/, v3);
    sub_1BE4ACC(&StringLiteral_6990/*"FriendshipUpItemEventUseState"*/, v4);
    byte_4B6271B = 1;
  }
  FriendshipUpItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6992/*"FriendshipUpItemUseState"*/;
  sub_1BE4A70(FriendshipUpItemInfo_TypeInfo->static_fields);
  static_fields = FriendshipUpItemInfo_TypeInfo->static_fields;
  static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6990/*"FriendshipUpItemEventUseState"*/;
  sub_1BE4A70(&static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE);
  v6 = FriendshipUpItemInfo_TypeInfo->static_fields;
  v6->FRIENDSHIP_UP_ITEM_ICON_SUFFIX = (struct System_String_o *)StringLiteral_25441/*"{0}_icon"*/;
  sub_1BE4A70(&v6->FRIENDSHIP_UP_ITEM_ICON_SUFFIX);
}


void __fastcall FriendshipUpItemInfo___ctor(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemInfo___ctor_32533540(
        FriendshipUpItemInfo_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *spriteName,
        int32_t num,
        int32_t eventId,
        int32_t value,
        int64_t startedAt,
        int64_t endedAt,
        const MethodInfo *method)
{
  System_String_o *SpriteName_k__BackingField; // x20

  if ( (byte_4B62714 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&id);
    byte_4B62714 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Id_k__BackingField = id;
  this->fields._Name_k__BackingField = name;
  sub_1BE4A70(&this->fields._Name_k__BackingField);
  this->fields._SpriteName_k__BackingField = spriteName;
  sub_1BE4A70(&this->fields._SpriteName_k__BackingField);
  this->fields._Num_k__BackingField = num;
  this->fields._EventId_k__BackingField = eventId;
  this->fields._Value_k__BackingField = value;
  this->fields._StartedAt_k__BackingField = startedAt;
  this->fields._EndedAt_k__BackingField = endedAt;
  SpriteName_k__BackingField = this->fields._SpriteName_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this->fields._IsEventItem_k__BackingField = AtlasManager__IsExistEventAtlas(SpriteName_k__BackingField, 0LL);
}


bool __fastcall FriendshipUpItemInfo__GetUseFlag(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  FriendshipUpItemInfo_c *v3; // x0
  _BOOL4 IsEventItem_k__BackingField; // w21
  System_String_o **p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE; // x8

  if ( (byte_4B62715 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemInfo_TypeInfo, method);
    byte_4B62715 = 1;
  }
  v3 = FriendshipUpItemInfo_TypeInfo;
  IsEventItem_k__BackingField = this->fields._IsEventItem_k__BackingField;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v3 = FriendshipUpItemInfo_TypeInfo;
  }
  p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = &v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE;
  if ( IsEventItem_k__BackingField )
    return UnityEngine_PlayerPrefs__GetInt(p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE[1], 0, 0LL) == this->fields._Id_k__BackingField;
  else
    return UnityEngine_PlayerPrefs__GetInt(*p_SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) == 1;
}


bool __fastcall FriendshipUpItemInfo__IsEnableItem(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B62718 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ItemMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v4);
    byte_4B62718 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields._Id_k__BackingField,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1BE4D28(Master_object, v6);
  return ItemEntity__IsEnable((ItemEntity_o *)entity, 0LL);
}


bool __fastcall FriendshipUpItemInfo__IsEventPeriod(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B62717 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    byte_4B62717 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields._EventId_k__BackingField,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1BE4D28(Master_object, v6);
  return EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
}


bool __fastcall FriendshipUpItemInfo__IsObtained(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6271A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    byte_4B6271A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    byte_4B61717 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1BE4D28(v7, v5);
  return UserItemMaster__TryGetEntity(
           (UserItemMaster_o *)Master_object,
           &entity,
           v7->static_fields->userIdNumber,
           this->fields._Id_k__BackingField,
           0LL);
}


void __fastcall FriendshipUpItemInfo__OpenExpiredDialog(
        FriendshipUpItemInfo_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x22
  System_Delegate_o *v12; // x0
  System_Action_o *v13; // x20
  Il2CppObject *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  FriendshipUpItemInfo_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4B62719 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, action);
    sub_1BE4ACC(&Method_CommonUI_CloseNotificationDialog__, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&StringLiteral_10424/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B62719 = 1;
  }
  FriendshipUpItemInfo__SetUseFlag(this, 0, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, Instance, Method_CommonUI_CloseNotificationDialog__, 0LL);
  v12 = System_Delegate__Combine((System_Delegate_o *)v11, (System_Delegate_o *)action, 0LL);
  v13 = (System_Action_o *)v12;
  if ( v12 && (System_Action_c *)v12->klass != System_Action_TypeInfo )
  {
    v18 = (FriendshipUpItemInfo_o *)sub_1BE4FE8(v12);
    FriendshipUpItemInfo__IsObtained(v18, v19);
  }
  else
  {
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10424/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
    v16 = System_String__Format(v15, (Il2CppObject *)this->fields._Name_k__BackingField, 0LL);
    if ( !v14 )
      sub_1BE4D28(v16, v17);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)v14,
      (System_String_o *)StringLiteral_1/*""*/,
      v16,
      v13,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemInfo__SetUseFlag(FriendshipUpItemInfo_o *this, bool flag, const MethodInfo *method)
{
  FriendshipUpItemInfo_c *v5; // x0
  _BOOL4 IsEventItem_k__BackingField; // w22
  struct FriendshipUpItemInfo_StaticFields *static_fields; // x8
  System_String_o *SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE; // x0
  int32_t Id_k__BackingField; // w1

  if ( (byte_4B62716 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemInfo_TypeInfo, flag);
    byte_4B62716 = 1;
  }
  v5 = FriendshipUpItemInfo_TypeInfo;
  IsEventItem_k__BackingField = this->fields._IsEventItem_k__BackingField;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v5 = FriendshipUpItemInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( IsEventItem_k__BackingField )
  {
    SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE;
    if ( flag )
      Id_k__BackingField = this->fields._Id_k__BackingField;
    else
      Id_k__BackingField = 0;
  }
  else
  {
    SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE;
    Id_k__BackingField = flag;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, Id_k__BackingField, 0LL);
}


int64_t __fastcall FriendshipUpItemInfo__get_EndedAt(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._EndedAt_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_EventId(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Id(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__get_IsEventItem(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsEventItem_k__BackingField;
}


System_String_o *__fastcall FriendshipUpItemInfo__get_Name(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Num(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


System_String_o *__fastcall FriendshipUpItemInfo__get_SpriteName(
        FriendshipUpItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int64_t __fastcall FriendshipUpItemInfo__get_StartedAt(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._StartedAt_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Value(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void __fastcall FriendshipUpItemInfo__set_EndedAt(
        FriendshipUpItemInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._EndedAt_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_EventId(
        FriendshipUpItemInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Id(FriendshipUpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Num(FriendshipUpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}