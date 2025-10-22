void ConnectMark___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x19
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct ConnectMark_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct ConnectMark_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C558B6 & 1) == 0 )
  {
    sub_1C3E564(&ConnectMark_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_21321/*"load_mark"*/);
    sub_1C3E564(&StringLiteral_18237/*"connectMarkC"*/);
    sub_1C3E564(&StringLiteral_18236/*"connectMarkB"*/);
    sub_1C3E564(&StringLiteral_13204/*"SvtProfilePushKey"*/);
    sub_1C3E564(&StringLiteral_18235/*"connectMarkA"*/);
    byte_4C558B6 = 1;
  }
  ConnectMark_TypeInfo->static_fields->SERVANT_PROFILE_PUSH_SAVE_KEY = (struct System_String_o *)StringLiteral_13204/*"SvtProfilePushKey"*/;
  sub_1C3E508((CGThumbnailListItem_o *)ConnectMark_TypeInfo->static_fields, StringLiteral_13204/*"SvtProfilePushKey"*/, v1, v2);
  v3 = sub_1C3E60C(string___TypeInfo, 3);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v8 = StringLiteral_18235/*"connectMarkA"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_18235/*"connectMarkA"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6),
        *(_DWORD *)(v7 + 24) <= 1u)
    || (v11 = StringLiteral_18236/*"connectMarkB"*/,
        *(_QWORD *)(v7 + 40) = StringLiteral_18236/*"connectMarkB"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), v11, v9, v10),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
    sub_1C3E7C8(v3, v4);
  }
  v14 = StringLiteral_18237/*"connectMarkC"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_18237/*"connectMarkC"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), v14, v12, v13);
  static_fields = ConnectMark_TypeInfo->static_fields;
  static_fields->markIconAnimationNameList = (struct System_String_array *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->markIconAnimationNameList, v7, v16, v17);
  v18 = StringLiteral_21321/*"load_mark"*/;
  v19 = ConnectMark_TypeInfo->static_fields;
  v19->ANIMATION_ICON_PREFAB = (struct System_String_o *)StringLiteral_21321/*"load_mark"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->ANIMATION_ICON_PREFAB, v18, v20, v21);
}


void ConnectMark___ctor(ConnectMark_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ConnectMark__Awake(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4C558B5 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_10760/*"ProgressBar/CancelButton"*/);
    sub_1C3E564(&StringLiteral_9078/*"MiniProgressBar/CancelButton"*/);
    byte_4C558B5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45016852(transform, (System_String_o *)StringLiteral_10760/*"ProgressBar/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45016852(v4, (System_String_o *)StringLiteral_9078/*"MiniProgressBar/CancelButton"*/, 0);
}


void ConnectMark__BeforeServantoProfile(ConnectMark_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtProfileIndex; // w8
  __int64 v5; // x1
  struct ServantCommentEntity_array *servantCommentEntityList; // x8
  RubyLabelHelper_o *rubyLabelHelper; // x0

  svtProfileIndex = this->fields.svtProfileIndex;
  v5 = (unsigned int)(svtProfileIndex - 1);
  this->fields.svtProfileIndex = v5;
  if ( svtProfileIndex - 1 < 0 )
  {
    servantCommentEntityList = this->fields.servantCommentEntityList;
    if ( !servantCommentEntityList )
      sub_1C3E7C0(this, v5);
    LODWORD(v5) = LODWORD(servantCommentEntityList->max_length) - 1;
    this->fields.svtProfileIndex = v5;
  }
  rubyLabelHelper = this->fields.rubyLabelHelper;
  if ( rubyLabelHelper )
  {
    RubyLabelHelper__ReleasePrefabs(rubyLabelHelper, 0);
    LODWORD(v5) = this->fields.svtProfileIndex;
  }
  ConnectMark__SetServantProfile(this, v5, v2);
}


void ConnectMark__CallbackConfirmDialog(ConnectMark_o *this, bool isDecie, const MethodInfo *method)
{
  if ( (byte_4C558AB & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C558AB = 1;
  }
  if ( isDecie )
    this->fields.isLoadCancel = 1;
  else
    this->fields.isLoadPause = 0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resumeDownloadAssetStorage(0);
}


void ConnectMark__EndCloseNotificationDownload(ConnectMark_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}


void ConnectMark__EndNotificationDownload(ConnectMark_o *this, bool isDecide, const MethodInfo *method)
{
  NotificationDialog_o *notificationDialog; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C558A9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ConnectMark_EndCloseNotificationDownload__);
    byte_4C558A9 = 1;
  }
  notificationDialog = this->fields.notificationDialog;
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ConnectMark_EndCloseNotificationDownload__, 0);
  if ( !notificationDialog )
    sub_1C3E7C0(v6, v7);
  NotificationDialog__Close_48060360(notificationDialog, v5, 0);
}


float ConnectMark__GetFadeInLagSecondByLagType(
        ConnectMark_o *this,
        System_Nullable_ConnectMarkFadeInLagType__o type,
        const MethodInfo *method)
{
  float result; // s0

  if ( (byte_4C5589C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType__get_HasValue__);
    byte_4C5589C = 1;
  }
  result = 0.5;
  if ( type.fields.hasValue && HIDWORD(*(unsigned __int64 *)&type) == 0 )
    return 0.0;
  return result;
}


System_String_o *ConnectMark__GetServantNameByProfileSaveData(
        ConnectMark_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  int32_t LimitCount; // w20
  bool v8; // w8
  bool v9; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x0
  LocalizationManager_c *v12; // x0
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C558A4 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C3E564(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C3E564(&StringLiteral_23892/*"svtProfileLimit"*/);
    byte_4C558A4 = 1;
  }
  param = 0;
  if ( servantEntity )
  {
    v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v5;
    *(_QWORD *)&v14.fields.fakeValue = v4;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v14, 0);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    LimitCount = ServantProfileLimitCountManager__GetLimitCount(v6, 0);
    v8 = ServantEntity__checkScript_42718172(servantEntity, (System_String_o *)StringLiteral_23892/*"svtProfileLimit"*/, &param, 0);
    if ( v8 && param < LimitCount )
      LimitCount = param;
    if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v9 = ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(servantEntity, 0);
    Name = ServantEntity__GetName(servantEntity, LimitCount, v9, -1, 1, 0);
    return BasicHelper__DecryptValue_44198228(Name, 0);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C5204F )
    {
      sub_1C3E564(&LocalizationManager_TypeInfo);
      byte_4C5204F = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager_TypeInfo;
    }
    return v12->static_fields->unknownNameText;
  }
}


ServantCommentEntity_o *ConnectMark__GetStartProfileServantCommentEntity(
        ConnectMark_o *this,
        System_Int32_array *clearwarIdList,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *v4; // x1
  ServantProfilePushMaster_o *v5; // x22
  ServantProfilePushEntity_array *AvaiableEntities; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  ConnectMark_c *v8; // x0
  System_String_o *String_71300376; // x23
  int v10; // w8
  void *v11; // x23
  unsigned int v12; // w19
  __int64 v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  unsigned int v20; // w29
  __int64 v21; // x22
  __int64 v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject **v25; // x23
  ServantProfilePushEntity_o *v26; // x8
  Il2CppObject *v27; // x9
  System_Predicate_object__o *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *SERVANT_PROFILE_PUSH_SAVE_KEY; // x19
  System_Object_array *v32; // x20
  ServantCommentEntity_o *v33; // x22
  System_String_o *v34; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  ConnectMark_c *v40; // x0
  ServantProfilePushEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C558B4 & 1) == 0 )
  {
    sub_1C3E564(&ConnectMark_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantProfilePushMaster___);
    sub_1C3E564(&Method_JsonManager_DeserializeArray_ConnectMark_ProfilePushData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ConnectMark_ProfilePushData__TypeInfo);
    sub_1C3E564(&System_Predicate_ConnectMark_ProfilePushData__TypeInfo);
    sub_1C3E564(&ConnectMark_ProfilePushData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_ConnectMark___c__DisplayClass108_0__GetStartProfileServantCommentEntity_b__0__);
    sub_1C3E564(&ConnectMark___c__DisplayClass108_0_TypeInfo);
    byte_4C558B4 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantProfilePushMaster___);
  if ( !Instance )
    goto LABEL_53;
  v5 = (ServantProfilePushMaster_o *)Instance;
  AvaiableEntities = ServantProfilePushMaster__GetAvaiableEntities((ServantProfilePushMaster_o *)Instance, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ConnectMark_ProfilePushData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData___ctor__);
  v8 = ConnectMark_TypeInfo;
  if ( !ConnectMark_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo);
    v8 = ConnectMark_TypeInfo;
  }
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(v8->static_fields->SERVANT_PROFILE_PUSH_SAVE_KEY, 0);
  Instance = (void *)System_String__IsNullOrEmpty(String_71300376, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Instance = JsonManager__DeserializeArray_object_(
                 (Il2CppObject *)String_71300376,
                 (const MethodInfo_3168FB8 *)Method_JsonManager_DeserializeArray_ConnectMark_ProfilePushData___);
    if ( !Instance )
      goto LABEL_53;
    v10 = *((_DWORD *)Instance + 6);
    v11 = Instance;
    if ( v10 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v10 )
LABEL_54:
          sub_1C3E7C8(Instance, v4);
        v13 = *((_QWORD *)v11 + (int)v12 + 4);
        if ( !v13 )
          break;
        Instance = (void *)ServantProfilePushMaster__TryGetEntity(
                             v5,
                             &entity,
                             *(_DWORD *)(v13 + 16),
                             *(_DWORD *)(v13 + 20),
                             0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = entity;
          if ( !entity )
            break;
          Instance = (void *)ServantProfilePushEntity__TimeEnd(entity, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v17 = Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v13,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v13;
              sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), v13, v14, v15);
            }
          }
        }
        v10 = *((_DWORD *)v11 + 6);
        if ( (int)++v12 >= v10 )
          goto LABEL_24;
      }
LABEL_53:
      sub_1C3E7C0(Instance, v4);
    }
  }
LABEL_24:
  if ( !AvaiableEntities )
    goto LABEL_53;
  if ( SLODWORD(AvaiableEntities->max_length) < 1 )
  {
LABEL_38:
    Instance = ConnectMark_TypeInfo;
    if ( !ConnectMark_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo);
      Instance = ConnectMark_TypeInfo;
    }
    if ( !v7 )
      goto LABEL_53;
    SERVANT_PROFILE_PUSH_SAVE_KEY = (System_String_o *)**((_QWORD **)Instance + 23);
    v32 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__ToArray__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v33 = 0;
  }
  else
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = sub_1C3E7B0(ConnectMark___c__DisplayClass108_0_TypeInfo);
      ConnectMark___c__DisplayClass108_0___ctor((ConnectMark___c__DisplayClass108_0_o *)v21, 0);
      v22 = sub_1C3E7B0(ConnectMark_ProfilePushData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0);
      *(_QWORD *)(v22 + 16) = -1;
      *(_DWORD *)(v22 + 24) = -1;
      if ( !v21 )
        goto LABEL_53;
      *(_QWORD *)(v21 + 16) = v22;
      v25 = (Il2CppObject **)(v21 + 16);
      sub_1C3E508((CGThumbnailListItem_o *)(v21 + 16), v22, v23, v24);
      if ( v20 >= LODWORD(AvaiableEntities->max_length) )
        goto LABEL_54;
      v26 = AvaiableEntities->m_Items[v20];
      if ( !v26 )
        goto LABEL_53;
      v27 = *v25;
      if ( !*v25 )
        goto LABEL_53;
      v27[1].klass = *(Il2CppClass **)&v26->fields.svtId;
      LODWORD(v27[1].monitor) = v26->fields.priority;
      v28 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ConnectMark_ProfilePushData__TypeInfo);
      System_Predicate_object____ctor(
        v28,
        (Il2CppObject *)v21,
        Method_ConnectMark___c__DisplayClass108_0__GetStartProfileServantCommentEntity_b__0__,
        0);
      if ( !v7 )
        goto LABEL_53;
      if ( !System_Collections_Generic_List_object___Find(
              v7,
              (System_Predicate_T__o *)v28,
              (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Find__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_53;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
        if ( !*v25 || !Instance )
          goto LABEL_53;
        Instance = ServantProfileMaster__GetChapterProgressEntity(
                     (ServantProfileMaster_o *)Instance,
                     clearwarIdList,
                     (int32_t)(*v25)[1].klass,
                     0);
        if ( Instance )
          break;
      }
      if ( (signed int)++v20 >= SLODWORD(AvaiableEntities->max_length) )
        goto LABEL_38;
    }
    v4 = *v25;
    v36 = v7->fields._items;
    v37 = Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Add__;
    ++v7->fields._version;
    if ( !v36 )
      goto LABEL_53;
    v38 = v7->fields._size;
    v33 = (ServantCommentEntity_o *)Instance;
    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v4,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v7->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v4;
      sub_1C3E508((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v4, v29, v30);
    }
    v40 = ConnectMark_TypeInfo;
    if ( !ConnectMark_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo);
      v40 = ConnectMark_TypeInfo;
    }
    SERVANT_PROFILE_PUSH_SAVE_KEY = v40->static_fields->SERVANT_PROFILE_PUSH_SAVE_KEY;
    v32 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__ToArray__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  }
  v34 = JsonManager__toJson(&v32->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString(SERVANT_PROFILE_PUSH_SAVE_KEY, v34, 0);
  UnityEngine_PlayerPrefs__Save(0);
  return v33;
}


void ConnectMark__HideEventAnimationIcons(ConnectMark_o *this, int32_t excludeEventId, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  Il2CppObject *value; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C558B2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__AnimationLoadingIcon__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__AnimationLoadingIcon__get_Value__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C558B2 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  if ( eventAnimationIconDictionary )
  {
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
      (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v12,
              (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__MoveNext__) )
    {
      if ( LODWORD(v12.fields._current.fields.key) != excludeEventId )
      {
        value = v12.fields._current.fields.value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0);
        if ( v7 )
        {
          if ( !value )
            sub_1C3E7C0(v7, v8);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)value, 0);
          if ( !gameObject )
            sub_1C3E7C0(0, v10);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v12,
      (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__Dispose__);
  }
}


void ConnectMark__Init(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4C5589A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
    byte_4C5589A = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  maskBase = this->fields.tipsBase;
  if ( !maskBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  maskBase = this->fields.profileBase;
  if ( !maskBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  maskBase = this->fields.touchInfoBase;
  if ( !maskBase
    || (UnityEngine_GameObject__SetActive(maskBase, 0, 0), (maskBase = this->fields.arrowInfo) == 0)
    || (UnityEngine_GameObject__SetActive(maskBase, 0, 0),
        (maskBase = (UnityEngine_GameObject_o *)this->fields.markSprite) == 0)
    || (UISprite__set_atlas((UISprite_o *)maskBase, this->fields.systemUIAtlas, 0),
        (maskBase = (UnityEngine_GameObject_o *)this->fields.markSprite) == 0)
    || (maskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBase, 0)) == 0 )
  {
LABEL_12:
    sub_1C3E7C0(maskBase, method);
  }
  UnityEngine_GameObject__SetActive(maskBase, 1, 0);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
  this->fields.EventUIAtlasDictionary = (struct System_Collections_Generic_Dictionary_string__UIAtlas__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.EventUIAtlasDictionary, (int32_t)v4, v5, v6);
  ConnectMark__InitEventAnimationIcons(this, v7);
  ConnectMark__ReleaseBackImage(this, v8);
  *(_QWORD *)&this->fields.mode = 0;
  *(_WORD *)&this->fields.isMaskClickWait = 0;
  this->fields.tipNum = -1;
  ConnectMark__SetDispMode(this, v9);
}


void ConnectMark__InitEventAnimationIcons(ConnectMark_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_o *p_eventAnimationIconDictionary; // x19
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C558B3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Values__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__get_Current__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__AnimationLoadingIcon__GetEnumerator__);
    byte_4C558B3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  if ( eventAnimationIconDictionary )
  {
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
               (const MethodInfo_340C24C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Values__);
    if ( !Values )
      sub_1C3E7C0(0, v5);
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v14,
      Values,
      (const MethodInfo_3AEBDC8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__AnimationLoadingIcon__GetEnumerator__);
    v15 = v14;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v15,
              (const MethodInfo_35644A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__MoveNext__) )
    {
      currentValue = v15.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)currentValue, 0, 0);
      if ( v7 )
      {
        if ( !currentValue )
          sub_1C3E7C0(v7, v8);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)currentValue,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71341564(gameObject, 0);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v15,
      (const MethodInfo_35644A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__Dispose__);
  }
  p_eventAnimationIconDictionary = (CGThumbnailListItem_o *)&this->fields.eventAnimationIconDictionary;
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
  p_eventAnimationIconDictionary->klass = (CGThumbnailListItem_c *)v11;
  sub_1C3E508(p_eventAnimationIconDictionary, (int32_t)v11, v12, v13);
}


bool ConnectMark__InitServantProfileList(ConnectMark_o *this, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x22
  __int64 Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x21
  System_Array_o *v8; // x20
  ServantCommentEntity_o *StartProfileServantCommentEntity; // x0
  ServantCommentEntity_o *v10; // x22
  unsigned __int64 v11; // x28
  __int64 v12; // x27
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  void *monitor; // x8
  unsigned int v16; // w24
  System_Array_c **v17; // x25
  System_Array_c *v18; // x23
  CGThumbnailListItem_o *v19; // x25
  System_Array_c *v20; // t1
  System_Array_c **v21; // x19
  CGThumbnailListItem_c *v22; // x26
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  unsigned int v25; // w27
  System_Array_c **v26; // x24
  CGThumbnailListItem_o *v27; // x24
  System_Array_c *v28; // x26
  System_Array_c *v29; // t1
  CGThumbnailListItem_c *klass; // x25
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  _BOOL4 isInitilizedMsgPos; // w8
  UnityEngine_Component_o *profileMessageLabel; // x8
  float v40; // s0
  __int64 v41; // x0
  ConnectMark_o *v43; // [xsp+8h] [xbp-68h]

  if ( (byte_4C558A2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C3E564(&FSUtility_TypeInfo);
    sub_1C3E564(&ServantCommentEntity___TypeInfo);
    sub_1C3E564(&ServantCommentManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C558A2 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)ServantProfileMaster__GetChapterProgressEntityList(
                        (ServantProfileMaster_o *)Instance,
                        ClearWarIdList,
                        0);
  if ( !Instance )
    goto LABEL_49;
  v7 = *(_QWORD *)(Instance + 24);
  v8 = (System_Array_o *)Instance;
  StartProfileServantCommentEntity = ConnectMark__GetStartProfileServantCommentEntity(
                                       (ConnectMark_o *)Instance,
                                       ClearWarIdList,
                                       v6);
  if ( (int)v7 < 1 )
  {
    LOBYTE(Instance) = 0;
    return Instance;
  }
  v10 = StartProfileServantCommentEntity;
  v11 = 0;
  v12 = 32;
  v43 = this;
  do
  {
    Instance = UnityEngine_Random__Range_71301784(0, v7, 0);
    if ( v11 != (unsigned int)Instance )
    {
      monitor = v8[1].monitor;
      v16 = Instance;
      if ( (unsigned int)Instance >= (unsigned int)monitor )
        goto LABEL_47;
      v17 = &v8->klass + (int)Instance;
      v20 = v17[4];
      v19 = (CGThumbnailListItem_o *)(v17 + 4);
      v18 = v20;
      if ( v11 >= (unsigned int)v8[1].monitor )
        goto LABEL_47;
      v21 = &v8->klass + v11;
      v22 = (CGThumbnailListItem_c *)v21[4];
      if ( v22 )
      {
        Instance = sub_1C3E6A0(v21[4], v8->klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
        LODWORD(monitor) = v8[1].monitor;
      }
      if ( v16 >= (unsigned int)monitor )
        goto LABEL_47;
      v19->klass = v22;
      sub_1C3E508(v19, (int32_t)v22, v13, v14);
      if ( v18 )
      {
        Instance = sub_1C3E6A0(v18, v8->klass->_1.element_class);
        if ( !Instance )
        {
LABEL_48:
          v41 = sub_1C3E7E4(Instance);
          sub_1C3E68C(v41, 0);
        }
      }
      if ( v11 >= LODWORD(v8[1].monitor) )
        goto LABEL_47;
      v21[4] = v18;
      sub_1C3E508((CGThumbnailListItem_o *)((char *)v8 + v12), (int32_t)v18, v23, v24);
    }
    ++v11;
    v12 += 8;
  }
  while ( (unsigned int)v7 != v11 );
  if ( v10 )
  {
    v25 = 0;
    while ( v25 < LODWORD(v8[1].monitor) )
    {
      v26 = &v8->klass + (int)v25;
      v29 = v26[4];
      v27 = (CGThumbnailListItem_o *)(v26 + 4);
      v28 = v29;
      if ( !v29 )
        goto LABEL_49;
      if ( LODWORD(v28->_1.name) == v10->fields.svtId )
      {
        klass = (CGThumbnailListItem_c *)v8[2].klass;
        Instance = sub_1C3E6A0(v28, v8->klass->_1.element_class);
        if ( !Instance )
          goto LABEL_48;
        if ( !LODWORD(v8[1].monitor) )
          break;
        v8[2].klass = v28;
        sub_1C3E508((CGThumbnailListItem_o *)&v8[2], (int32_t)v28, v31, v32);
        if ( klass )
        {
          Instance = sub_1C3E6A0(klass, v8->klass->_1.element_class);
          if ( !Instance )
            goto LABEL_48;
        }
        if ( v25 >= LODWORD(v8[1].monitor) )
          break;
        v27->klass = klass;
        sub_1C3E508(v27, (int32_t)klass, v33, v34);
      }
      if ( (_DWORD)v7 == ++v25 )
        goto LABEL_34;
    }
LABEL_47:
    sub_1C3E7C8(Instance, v5);
  }
LABEL_34:
  if ( (int)v7 >= 10 )
    LODWORD(v7) = 10;
  v35 = sub_1C3E60C(ServantCommentEntity___TypeInfo, (unsigned int)v7);
  v43->fields.servantCommentEntityList = (struct ServantCommentEntity_array *)v35;
  sub_1C3E508((CGThumbnailListItem_o *)&v43->fields.servantCommentEntityList, v35, v36, v37);
  System_Array__Copy_65302504(v8, (System_Array_o *)v43->fields.servantCommentEntityList, v7, 0);
  isInitilizedMsgPos = v43->fields.isInitilizedMsgPos;
  Instance = 1;
  v43->fields.svtProfileIndex = 0;
  if ( !isInitilizedMsgPos )
  {
    profileMessageLabel = (UnityEngine_Component_o *)v43->fields.profileMessageLabel;
    v43->fields.isInitilizedMsgPos = 1;
    if ( profileMessageLabel )
    {
      Instance = (__int64)UnityEngine_Component__get_gameObject(profileMessageLabel, 0);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( Instance )
        {
          v43->fields.svtProfileMsgPos = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          if ( !FSUtility__IsUnderVista(0) )
          {
            v40 = v43->fields.svtProfileMsgPos.fields.z + 0.0;
            *(float32x2_t *)&v43->fields.svtProfileMsgPos.fields.x = vadd_f32(
                                                                       *(float32x2_t *)&v43->fields.svtProfileMsgPos.fields.x,
                                                                       (float32x2_t)0x4100000000000000LL);
            v43->fields.svtProfileMsgPos.fields.z = v40;
          }
          LOBYTE(Instance) = 1;
          return Instance;
        }
      }
    }
LABEL_49:
    sub_1C3E7C0(Instance, v5);
  }
  return Instance;
}


bool ConnectMark__IsBusy(ConnectMark_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


bool ConnectMark__IsDispMask(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0

  maskBase = this->fields.maskBase;
  if ( !maskBase )
    sub_1C3E7C0(0, method);
  return UnityEngine_GameObject__get_activeSelf(maskBase, 0);
}


bool ConnectMark__IsMaskClick(ConnectMark_o *this, const MethodInfo *method)
{
  return !this->fields.isMaskClickWait;
}


bool ConnectMark__IsMode(ConnectMark_o *this, int32_t mode, const MethodInfo *method)
{
  return this->fields.mode == mode;
}


void ConnectMark__LoadAtlas(
        ConnectMark_o *this,
        System_String_o *atlasName,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  CGThumbnailListItem_o *p_EventUIAtlasDictionary; // x20
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  System_String_o *v29; // x19
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C558AF & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_ConnectMark___c__DisplayClass102_0__LoadAtlas_b__0__);
    sub_1C3E564(&ConnectMark___c__DisplayClass102_0_TypeInfo);
    sub_1C3E564(&StringLiteral_6274/*"EventUI/Prefabs/{0}"*/);
    byte_4C558AF = 1;
  }
  v9 = sub_1C3E7B0(ConnectMark___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v9 + 16) = atlasName;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)atlasName, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v9 + 32) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)callback, v16, v17);
  if ( !this->fields.EventUIAtlasDictionary )
  {
    p_EventUIAtlasDictionary = (CGThumbnailListItem_o *)&this->fields.EventUIAtlasDictionary;
    v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v25,
      (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
    p_EventUIAtlasDictionary->klass = (CGThumbnailListItem_c *)v25;
    sub_1C3E508(p_EventUIAtlasDictionary, (int32_t)v25, v26, v27);
  }
  v31 = eventId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v18, v19, v20, v21, v22, v23);
  v29 = System_String__Format((System_String_o *)StringLiteral_6274/*"EventUI/Prefabs/{0}"*/, v28, 0);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_ConnectMark___c__DisplayClass102_0__LoadAtlas_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v29, v30, 1, 0);
}


void ConnectMark__LoadBackImage(ConnectMark_o *this, System_String_o *fileName, const MethodInfo *method)
{
  UnityEngine_Object_o *loadBackTextureData; // x21
  Il2CppType *v6; // x22
  System_RuntimeTypeHandle_o v7; // x0
  struct UnityEngine_Texture2D_o **p_loadBackTextureData; // x21
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_71301972; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Texture2D_c *v13; // x8
  UnityEngine_Object_o *v14; // x9
  int32_t v15; // w1
  __int64 v16; // x1
  struct UITexture_o *loadBackTexture; // x0

  if ( (byte_4C5589F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Texture2D_var);
    sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C5589F = 1;
  }
  loadBackTextureData = (UnityEngine_Object_o *)this->fields.loadBackTextureData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(loadBackTextureData, 0, 0) )
  {
    v6 = UnityEngine_Texture2D_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v7.fields.value = (intptr_t)v6;
    p_loadBackTextureData = &this->fields.loadBackTextureData;
    TypeFromHandle = System_Type__GetTypeFromHandle(v7, 0);
    _71301972 = UnityEngine_Resources__Load_71301972(fileName, TypeFromHandle, 0);
    if ( _71301972 )
    {
      v13 = UnityEngine_Texture2D_TypeInfo;
      if ( (UnityEngine_Texture2D_c *)_71301972->klass == UnityEngine_Texture2D_TypeInfo )
        v14 = _71301972;
      else
        v14 = 0;
      *p_loadBackTextureData = (struct UnityEngine_Texture2D_o *)v14;
      if ( (UnityEngine_Texture2D_c *)_71301972->klass == v13 )
        v15 = (int)_71301972;
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
      *p_loadBackTextureData = 0;
    }
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadBackTextureData, v15, v11, v12);
    loadBackTexture = this->fields.loadBackTexture;
    if ( !loadBackTexture )
      sub_1C3E7C0(0, v16);
    ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))loadBackTexture->klass->vtable._27_set_mainTexture.methodPtr)(
      loadBackTexture,
      *p_loadBackTextureData,
      loadBackTexture->klass->vtable._27_set_mainTexture.method);
  }
}


void ConnectMark__LoadEventAnimationIcon(
        ConnectMark_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_Dictionary_int__object__o *klass; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o **v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  CGThumbnailListItem_o *p_eventAnimationIconDictionary; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *Item; // x22
  System_Collections_Generic_Dictionary_int__object__o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x0
  System_String_o *v28; // x21
  AssetLoader_LoadEndDataHandler_o *v29; // x22
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C558AE & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ConnectMark___c__DisplayClass101_0__LoadEventAnimationIcon_b__0__);
    sub_1C3E564(&ConnectMark___c__DisplayClass101_0_TypeInfo);
    sub_1C3E564(&StringLiteral_6274/*"EventUI/Prefabs/{0}"*/);
    byte_4C558AE = 1;
  }
  v7 = sub_1C3E7B0(ConnectMark___c__DisplayClass101_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  v12 = (System_Action_o **)(v7 + 32);
  *(_DWORD *)(v7 + 24) = eventId;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v13, v14);
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  p_eventAnimationIconDictionary = (CGThumbnailListItem_o *)&this->fields.eventAnimationIconDictionary;
  if ( !eventAnimationIconDictionary )
  {
LABEL_12:
    v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v24,
      (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
    p_eventAnimationIconDictionary->klass = (CGThumbnailListItem_c *)v24;
    sub_1C3E508(p_eventAnimationIconDictionary, (int32_t)v24, v25, v26);
    goto LABEL_13;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
         *(_DWORD *)(v7 + 24),
         (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    klass = (System_Collections_Generic_Dictionary_int__object__o *)p_eventAnimationIconDictionary->klass;
    if ( p_eventAnimationIconDictionary->klass )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               klass,
               *(_DWORD *)(v7 + 24),
               (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        ActionExtensions__Call(*v12, 0);
        return;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C3E7C0(klass, v9);
  }
LABEL_11:
  if ( !p_eventAnimationIconDictionary->klass )
    goto LABEL_12;
LABEL_13:
  v30 = *(_DWORD *)(v7 + 24);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19, v20, v21, v22);
  v28 = System_String__Format((System_String_o *)StringLiteral_6274/*"EventUI/Prefabs/{0}"*/, v27, 0);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_ConnectMark___c__DisplayClass101_0__LoadEventAnimationIcon_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v28, v29, 1, 0) )
    ActionExtensions__Call(*v12, 0);
}


void ConnectMark__LoadOtherMark(ConnectMark_o *this, int32_t eventId, int32_t animationId, const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4C558AD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ConnectMark___c__DisplayClass100_0__LoadOtherMark_b__0__);
    sub_1C3E564(&ConnectMark___c__DisplayClass100_0_TypeInfo);
    byte_4C558AD = 1;
  }
  v7 = sub_1C3E7B0(ConnectMark___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = eventId;
  *(_DWORD *)(v7 + 28) = animationId;
  v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v7, Method_ConnectMark___c__DisplayClass100_0__LoadOtherMark_b__0__, 0);
  ConnectMark__LoadEventAnimationIcon(this, eventId, v12, v13);
}


System_Collections_IEnumerator_o *ConnectMark__MarkCR(
        ConnectMark_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C558A1 & 1) == 0 )
  {
    sub_1C3E564(&ConnectMark__MarkCR_d__81_TypeInfo);
    byte_4C558A1 = 1;
  }
  v5 = sub_1C3E7B0(ConnectMark__MarkCR_d__81_TypeInfo);
  ConnectMark__MarkCR_d__81___ctor((ConnectMark__MarkCR_d__81_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = message;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), (int32_t)message, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void ConnectMark__MaskClickInit(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *arrowInfo; // x0

  arrowInfo = this->fields.arrowInfo;
  this->fields.isMaskClickWait = 1;
  if ( !arrowInfo
    || (UnityEngine_GameObject__SetActive(arrowInfo, 0, 0), (arrowInfo = this->fields.miniProgressBarBase) == 0) )
  {
    sub_1C3E7C0(arrowInfo, method);
  }
  UnityEngine_GameObject__SetActive(arrowInfo, 0, 0);
}


bool ConnectMark__NeedToShowMarkDefinitely(
        ConnectMark_o *this,
        System_Nullable_ConnectMarkFadeInLagType__o type,
        const MethodInfo *method)
{
  if ( (byte_4C5589D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType__get_HasValue__);
    byte_4C5589D = 1;
  }
  return HIDWORD(*(unsigned __int64 *)&type) == 0 && type.fields.hasValue;
}


void ConnectMark__NextServantProfile(ConnectMark_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantCommentEntity_array *servantCommentEntityList; // x8
  __int64 v4; // x1
  RubyLabelHelper_o *rubyLabelHelper; // x0

  servantCommentEntityList = this->fields.servantCommentEntityList;
  v4 = (unsigned int)(this->fields.svtProfileIndex + 1);
  this->fields.svtProfileIndex = v4;
  if ( !servantCommentEntityList )
    sub_1C3E7C0(this, v4);
  if ( (int)v4 > LODWORD(servantCommentEntityList->max_length) - 1 )
  {
    LODWORD(v4) = 0;
    this->fields.svtProfileIndex = 0;
  }
  rubyLabelHelper = this->fields.rubyLabelHelper;
  if ( rubyLabelHelper )
  {
    RubyLabelHelper__ReleasePrefabs(rubyLabelHelper, 0);
    LODWORD(v4) = this->fields.svtProfileIndex;
  }
  ConnectMark__SetServantProfile(this, v4, v2);
}


void ConnectMark__OnClickCancel(ConnectMark_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C558AA & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_ConnectMark_OnClickCancel__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C558AA = 1;
  }
  if ( !this->fields.isLoadCancel )
  {
    v3 = Method_ConnectMark_OnClickCancel__;
    if ( (*((_BYTE *)Method_ConnectMark_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ConnectMark_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.mode == 9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance || (Instance = (Il2CppObject *)Instance[123].klass) == 0 )
        sub_1C3E7C0(Instance, v6);
      MovieFileMerge__DownloadCancel((MovieFileMerge_o *)Instance, 0);
    }
    else
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__pauseDownloadAssetStorage(0);
      this->fields.isLoadPause = 1;
      ConnectMark__CallbackConfirmDialog(this, 1, v7);
    }
  }
}


void ConnectMark__OnClickLeftArrow(ConnectMark_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C558A5 & 1) == 0 )
  {
    sub_1C3E564(&Method_ConnectMark_OnClickLeftArrow__);
    byte_4C558A5 = 1;
  }
  v3 = Method_ConnectMark_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_ConnectMark_OnClickLeftArrow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ConnectMark_OnClickLeftArrow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ConnectMark__BeforeServantoProfile(this, v5);
}


void ConnectMark__OnClickMask(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchInfoBase; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C558AC & 1) == 0 )
  {
    sub_1C3E564(&Method_ConnectMark_OnClickMask__);
    byte_4C558AC = 1;
  }
  if ( this->fields.isMaskClickWait )
  {
    touchInfoBase = this->fields.touchInfoBase;
    if ( !touchInfoBase )
      goto LABEL_14;
    if ( UnityEngine_GameObject__get_activeSelf(touchInfoBase, 0) )
    {
      touchInfoBase = this->fields.touchInfoBase;
      this->fields.isMaskClickWait = 0;
      if ( touchInfoBase )
      {
        UnityEngine_GameObject__SetActive(touchInfoBase, 0, 0);
        return;
      }
LABEL_14:
      sub_1C3E7C0(touchInfoBase, method);
    }
  }
  else if ( this->fields.isMaskClickTip && ConnectMark__SetTipMessage(this, method) )
  {
    v4 = Method_ConnectMark_OnClickMask__;
    if ( (*((_BYTE *)Method_ConnectMark_OnClickMask__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3E57C(Method_ConnectMark_OnClickMask__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  }
}


void ConnectMark__OnClickRightArrow(ConnectMark_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C558A6 & 1) == 0 )
  {
    sub_1C3E564(&Method_ConnectMark_OnClickRightArrow__);
    byte_4C558A6 = 1;
  }
  v3 = Method_ConnectMark_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_ConnectMark_OnClickRightArrow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_ConnectMark_OnClickRightArrow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ConnectMark__NextServantProfile(this, v5);
}


void ConnectMark__OnEndAlphaTween(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *markBase; // x0

  markBase = this->fields.markBase;
  if ( !markBase )
    sub_1C3E7C0(0, method);
  UnityEngine_GameObject__SetActive(markBase, 0, 0);
}


System_Collections_IEnumerator_o *ConnectMark__ProgressBarCR(ConnectMark_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C558A8 & 1) == 0 )
  {
    sub_1C3E564(&ConnectMark__ProgressBarCR_d__90_TypeInfo);
    byte_4C558A8 = 1;
  }
  v3 = sub_1C3E7B0(ConnectMark__ProgressBarCR_d__90_TypeInfo);
  ConnectMark__ProgressBarCR_d__90___ctor((ConnectMark__ProgressBarCR_d__90_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void ConnectMark__ReleaseBackImage(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *loadBackTextureData; // x20
  __int64 v4; // x1
  struct UITexture_o *loadBackTexture; // x0
  UnityEngine_Object_o **p_loadBackTextureData; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C558A0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C558A0 = 1;
  }
  loadBackTextureData = (UnityEngine_Object_o *)this->fields.loadBackTextureData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(loadBackTextureData, 0, 0) )
  {
    loadBackTexture = this->fields.loadBackTexture;
    if ( !loadBackTexture )
      sub_1C3E7C0(0, v4);
    p_loadBackTextureData = (UnityEngine_Object_o **)&this->fields.loadBackTextureData;
    ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))loadBackTexture->klass->vtable._27_set_mainTexture.methodPtr)(
      loadBackTexture,
      0,
      loadBackTexture->klass->vtable._27_set_mainTexture.method);
    UnityEngine_Resources__UnloadAsset(*p_loadBackTextureData, 0);
    *p_loadBackTextureData = 0;
    sub_1C3E508((CGThumbnailListItem_o *)p_loadBackTextureData, 0, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__SetActiveMiniProgressCancelButton(ConnectMark_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Component_o *miniProgressLoadCancelButton; // x0
  bool v6; // w20

  miniProgressLoadCancelButton = (UnityEngine_Component_o *)this->fields.miniProgressLoadCancelButton;
  if ( !miniProgressLoadCancelButton
    || (miniProgressLoadCancelButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                    miniProgressLoadCancelButton,
                                                                    0)) == 0
    || (v6 = enabled,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniProgressLoadCancelButton, v6, 0),
        (miniProgressLoadCancelButton = (UnityEngine_Component_o *)this->fields.miniProgressLoadCancelButton) == 0) )
  {
    sub_1C3E7C0(miniProgressLoadCancelButton, enabled);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)miniProgressLoadCancelButton, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__SetConnect(ConnectMark_o *this, bool isConnect, const MethodInfo *method)
{
  int32_t connectCount; // w8
  int32_t v4; // w8
  bool v5; // vf
  int32_t v6; // w8

  connectCount = this->fields.connectCount;
  if ( isConnect )
  {
    v4 = connectCount + 1;
    this->fields.connectCount = v4;
    if ( v4 >= 2 )
      return;
    goto LABEL_6;
  }
  v5 = __OFSUB__(connectCount, 1);
  v6 = connectCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.connectCount = v6;
    if ( !v6 )
    {
LABEL_6:
      if ( (this->fields.mode | 8) == 8 )
        ConnectMark__SetDispMode(this, (const MethodInfo *)isConnect);
    }
  }
}


void ConnectMark__SetDefaultMark(ConnectMark_o *this, const MethodInfo *method)
{
  UISprite_o *markSprite; // x0
  const MethodInfo *v4; // x2

  markSprite = this->fields.markSprite;
  if ( !markSprite
    || (UISprite__set_atlas(markSprite, this->fields.systemUIAtlas, 0),
        markSprite = this->fields.markSprite,
        this->fields.CurrentAnimationId = 0,
        this->fields.CurrentEventId = 0,
        !markSprite)
    || (markSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)markSprite, 0)) == 0 )
  {
    sub_1C3E7C0(markSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)markSprite, 1, 0);
  ConnectMark__HideEventAnimationIcons(this, 0, v4);
}


void ConnectMark__SetDispMode(ConnectMark_o *this, const MethodInfo *method)
{
  int v3; // w22
  System_String_o *v4; // x20
  __int64 *v5; // x8
  System_Collections_IEnumerator_o *markCRW; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *maskBase; // x0
  const MethodInfo *v10; // x2
  struct System_Collections_IEnumerator_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  System_Nullable_ConnectMarkFadeInLagType__o fadeInLagType; // x1
  TweenAlpha_o *v17; // x20
  bool v18; // w0
  float value; // s0
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Collections_IEnumerator_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned int mode; // w8
  bool v28; // w1

  if ( (byte_4C5589E & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_ConnectMark_OnEndAlphaTween__);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C3E564(&StringLiteral_3785/*"CONNECTING"*/);
    sub_1C3E564(&StringLiteral_13395/*"THINKING"*/);
    sub_1C3E564(&StringLiteral_8291/*"LOADING"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5589E = 1;
  }
  switch ( this->fields.mode )
  {
    case 0:
      v3 = 0;
      if ( this->fields.connectCount >= 1 )
        v4 = (System_String_o *)StringLiteral_3785/*"CONNECTING"*/;
      else
        v4 = 0;
      break;
    case 1:
    case 2:
    case 3:
      v5 = &StringLiteral_8291/*"LOADING"*/;
      goto LABEL_14;
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
      v3 = 1;
      v4 = (System_String_o *)StringLiteral_3785/*"CONNECTING"*/;
      break;
    case 8:
      if ( this->fields.connectCount < 1 )
        v5 = &StringLiteral_1/*""*/;
      else
        v5 = &StringLiteral_3785/*"CONNECTING"*/;
      goto LABEL_14;
    case 0xA:
      v5 = &StringLiteral_13395/*"THINKING"*/;
LABEL_14:
      v4 = (System_String_o *)*v5;
      v3 = 0;
      break;
    default:
      v3 = 0;
      v4 = 0;
      break;
  }
  markCRW = this->fields.markCRW;
  if ( markCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, markCRW, 0);
    this->fields.markCRW = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.markCRW, 0, v7, v8);
  }
  if ( v4 )
  {
    maskBase = this->fields.maskBase;
    this->fields.isBusy = 1;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 1, 0);
    v11 = ConnectMark__MarkCR(this, v4, v10);
    this->fields.markCRW = v11;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.markCRW, (int32_t)v11, v12, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, this->fields.markCRW, 0);
  }
  else
  {
    maskBase = this->fields.maskBase;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.tipsBase;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.profileBase;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.touchInfoBase;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    ConnectMark__ReleaseBackImage(this, v14);
    maskBase = this->fields.markBase;
    if ( !maskBase )
      goto LABEL_45;
    maskBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskBase,
                                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !maskBase )
      goto LABEL_45;
    HIDWORD(maskBase[2].klass) = 0;
    fadeInLagType = this->fields.fadeInLagType;
    v17 = (TweenAlpha_o *)maskBase;
    v18 = ConnectMark__NeedToShowMarkDefinitely((ConnectMark_o *)maskBase, fadeInLagType, v15);
    value = 1.0;
    if ( !v18 )
      value = TweenAlpha__get_value(v17, 0);
    v17->fields.from = value;
    v17->fields.to = 0.0;
    UITweener__ResetToBeginning((UITweener_o *)v17, 0);
    UITweener__PlayForward((UITweener_o *)v17, 0);
    onFinished = v17->fields.onFinished;
    v21 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v21, (Il2CppObject *)this, Method_ConnectMark_OnEndAlphaTween__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Set_49331860(onFinished, v21, 0);
    this->fields.fadeInLagType = 0;
  }
  markCRW = this->fields.progressBarCRW;
  if ( markCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, markCRW, 0);
    this->fields.progressBarCRW = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressBarCRW, 0, v22, v23);
  }
  if ( v3 )
  {
    *(_WORD *)&this->fields.isBusy = 1;
    this->fields.isLoadCancel = 0;
    v24 = ConnectMark__ProgressBarCR(this, (const MethodInfo *)markCRW);
    this->fields.progressBarCRW = v24;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressBarCRW, (int32_t)v24, v25, v26);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136(
      (UnityEngine_MonoBehaviour_o *)this,
      this->fields.progressBarCRW,
      0);
  }
  else
  {
    maskBase = this->fields.progressBarBase;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.miniProgressBarBase;
    if ( !maskBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  }
  mode = this->fields.mode;
  if ( mode > 9 || ((1 << mode) & 0x2A0) == 0 )
  {
    maskBase = this->fields.arrowInfo;
    if ( maskBase )
    {
      v28 = 0;
      goto LABEL_44;
    }
LABEL_45:
    sub_1C3E7C0(maskBase, markCRW);
  }
  maskBase = this->fields.arrowInfo;
  if ( !maskBase )
    goto LABEL_45;
  v28 = 1;
LABEL_44:
  UnityEngine_GameObject__SetActive(maskBase, v28, 0);
}


void ConnectMark__SetMarkFadeInLag(ConnectMark_o *this, int32_t type, const MethodInfo *method)
{
  System_Nullable_Int32Enum__o v5; // x0
  int32_t value; // w1
  struct System_Nullable_ConnectMarkFadeInLagType__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5589B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType___ctor__);
    sub_1C3E564(&Method_System_Nullable_ConnectMarkFadeInLagType__get_HasValue__);
    byte_4C5589B = 1;
  }
  v5 = (System_Nullable_Int32Enum__o)&v7;
  if ( (unsigned __int8)*(_DWORD *)&this->fields.fadeInLagType.fields.hasValue )
    value = this->fields.fadeInLagType.fields.value;
  else
    value = type;
  v7 = 0;
  System_Nullable_Int32Enum____ctor(
    v5,
    value,
    (const MethodInfo_38DAF9C *)Method_System_Nullable_ConnectMarkFadeInLagType___ctor__);
  this->fields.fadeInLagType = v7;
}


void ConnectMark__SetMiniProgress(ConnectMark_o *this, float progress, const MethodInfo *method)
{
  UIProgressBar_o *miniProgressBarSlider; // x0

  miniProgressBarSlider = (UIProgressBar_o *)this->fields.miniProgressBarSlider;
  if ( !miniProgressBarSlider )
    sub_1C3E7C0(0, method);
  UIProgressBar__set_value(miniProgressBarSlider, progress, 0);
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__SetMode(ConnectMark_o *this, int32_t mode, const MethodInfo *method)
{
  if ( (unsigned int)mode > 0xA || ((1 << mode) & 0x50F) == 0 || this->fields.mode != mode )
  {
    this->fields.mode = mode;
    ConnectMark__SetDispMode(this, *(const MethodInfo **)&mode);
  }
}


void ConnectMark__SetOtherMark(ConnectMark_o *this, int32_t eventId, int32_t animationId, const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  bool v14; // w0
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3

  if ( (byte_4C558B0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_1C3E564(&Method_ConnectMark___c__DisplayClass103_0__SetOtherMark_b__0__);
    sub_1C3E564(&ConnectMark___c__DisplayClass103_0_TypeInfo);
    byte_4C558B0 = 1;
  }
  v7 = sub_1C3E7B0(ConnectMark___c__DisplayClass103_0_TypeInfo);
  ConnectMark___c__DisplayClass103_0___ctor((ConnectMark___c__DisplayClass103_0_o *)v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = eventId;
  *(_DWORD *)(v7 + 28) = animationId;
  if ( eventId && animationId )
  {
    eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
    if ( eventAnimationIconDictionary
      && (v14 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
                  eventId,
                  (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__),
          eventId = *(_DWORD *)(v7 + 24),
          v14) )
    {
      ConnectMark__SetOtherMarkAfterLoad(this, *(_DWORD *)(v7 + 24), *(_DWORD *)(v7 + 28), v15);
    }
    else
    {
      v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)v7, Method_ConnectMark___c__DisplayClass103_0__SetOtherMark_b__0__, 0);
      ConnectMark__LoadEventAnimationIcon(this, eventId, v16, v17);
    }
  }
  else
  {
    ConnectMark__SetDefaultMark(this, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__SetOtherMarkAfterLoad(
        ConnectMark_o *this,
        int32_t eventId,
        int32_t animationId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *gameObject; // x0
  Il2CppObject *Item; // x22
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x22
  UISprite_o *markSprite; // x23
  const MethodInfo *v27; // x2
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C558B1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__get_Item__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_5347/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4C558B1 = 1;
  }
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  if ( eventAnimationIconDictionary
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
         eventId,
         (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.eventAnimationIconDictionary;
    if ( !gameObject )
      goto LABEL_23;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             gameObject,
             eventId,
             (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Item,
                                                                           0,
                                                                           0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_23;
      if ( AnimationLoadingIcon__HasAnimation((AnimationLoadingIcon_o *)Item, animationId, 0) )
      {
        LODWORD(Item[2].klass) = animationId;
        gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)Item,
                                                                               0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          AnimationLoadingIcon__PlayAnimation((AnimationLoadingIcon_o *)Item, animationId, 0);
          ConnectMark__HideEventAnimationIcons(this, eventId, v15);
          gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.markSprite;
          if ( gameObject )
          {
            gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)gameObject,
                                                                                   0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              return;
            }
          }
        }
LABEL_23:
        sub_1C3E7C0(gameObject, v12);
      }
    }
  }
  v29 = eventId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, *(_QWORD *)&animationId, method, v4, v5, v6, v7);
  v28 = animationId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v17, v18, v19, v20, v21, v22);
  v24 = (Il2CppObject *)System_String__Format_63677760((System_String_o *)StringLiteral_5347/*"DownloadEventUIAtlas{0}{1}"*/, v16, v23, 0);
  if ( this->fields.EventUIAtlasDictionary
    && (v25 = v24,
        System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.EventUIAtlasDictionary,
          v24,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__)) )
  {
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.EventUIAtlasDictionary;
    if ( !gameObject )
      goto LABEL_23;
    markSprite = this->fields.markSprite;
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                           (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
                                                                           v25,
                                                                           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__get_Item__);
    if ( !markSprite )
      goto LABEL_23;
    UISprite__set_atlas(markSprite, (UIAtlas_o *)gameObject, 0);
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.markSprite;
    this->fields.CurrentEventId = eventId;
    this->fields.CurrentAnimationId = animationId;
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)gameObject,
                                                                           0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    ConnectMark__HideEventAnimationIcons(this, 0, v27);
  }
  else
  {
    ConnectMark__SetDefaultMark(this, v12);
  }
}


void ConnectMark__SetServantProfile(ConnectMark_o *this, int32_t index, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_String_o *v6; // x1
  struct ServantCommentEntity_array *servantCommentEntityList; // x8
  ServantCommentEntity_o *v8; // x20
  ServantEntity_o *v9; // x22
  UILabel_o *profileNameLabel; // x21
  ConnectMark_o *v11; // x0
  const MethodInfo *v12; // x2
  UILabel_o *profileClassLabel; // x21
  System_String_o *ClassName; // x0
  RubyLabelHelper_o *rubyLabelHelper; // x22
  struct RubyLabelHelper_o **p_rubyLabelHelper; // x21
  UILabel_o *profileMessageLabel; // x22
  UnityEngine_GameObject_o *mainPrefab; // x23
  UnityEngine_GameObject_o *rubyPrefab; // x24
  RubyLabelHelper_o *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  float v23; // s0
  float x; // s11
  float y; // s8
  float z; // s9
  float v27; // s10
  UIWidget_o *v28; // x19
  int32_t v29; // w1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C558A3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&FSUtility_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&RubyLabelHelper_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_25429/*"クラス："*/);
    byte_4C558A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  servantCommentEntityList = this->fields.servantCommentEntityList;
  if ( !servantCommentEntityList )
    goto LABEL_36;
  if ( LODWORD(servantCommentEntityList->max_length) <= index )
    sub_1C3E7C8(Instance, v6);
  v8 = servantCommentEntityList->m_Items[index];
  if ( !v8 )
    goto LABEL_36;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                v8->fields.svtId,
                                (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.profileMessageLabel )
    goto LABEL_36;
  v9 = (ServantEntity_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.profileMessageLabel, 1, 0);
  Instance = (DataManager_o *)this->fields.profileBase;
  if ( !Instance )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  profileNameLabel = this->fields.profileNameLabel;
  Instance = (DataManager_o *)ConnectMark__GetServantNameByProfileSaveData(v11, v9, v12);
  if ( !profileNameLabel )
    goto LABEL_36;
  UILabel__set_text(profileNameLabel, (System_String_o *)Instance, 0);
  profileClassLabel = this->fields.profileClassLabel;
  if ( v9 )
  {
    ClassName = ServantEntity__getClassName(v9, 0);
    Instance = (DataManager_o *)System_String__Concat_63636468((System_String_o *)StringLiteral_25429/*"クラス："*/, ClassName, 0);
    v6 = (System_String_o *)Instance;
    if ( !profileClassLabel )
      goto LABEL_36;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C5204F )
    {
      sub_1C3E564(&LocalizationManager_TypeInfo);
      byte_4C5204F = 1;
    }
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    }
    v6 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    if ( !profileClassLabel )
      goto LABEL_36;
  }
  UILabel__set_text(profileClassLabel, v6, 0);
  rubyLabelHelper = this->fields.rubyLabelHelper;
  p_rubyLabelHelper = &this->fields.rubyLabelHelper;
  if ( rubyLabelHelper )
  {
    Instance = (DataManager_o *)ServantCommentEntity__GetComment(v8, 0);
  }
  else
  {
    profileMessageLabel = this->fields.profileMessageLabel;
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    v20 = (RubyLabelHelper_o *)sub_1C3E7B0(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v20, profileMessageLabel, mainPrefab, rubyPrefab, 0);
    this->fields.rubyLabelHelper = v20;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rubyLabelHelper, (int32_t)v20, v21, v22);
    rubyLabelHelper = this->fields.rubyLabelHelper;
    Instance = (DataManager_o *)ServantCommentEntity__GetComment(v8, 0);
    if ( !rubyLabelHelper )
      goto LABEL_36;
  }
  RubyLabelHelper__SetText(rubyLabelHelper, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)*p_rubyLabelHelper;
  if ( !*p_rubyLabelHelper )
    goto LABEL_36;
  LODWORD(v23) = *(_QWORD *)&RubyLabelHelper__get_Size((RubyLabelHelper_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.profileMessageLabel;
  if ( !Instance )
    goto LABEL_36;
  x = this->fields.svtProfileMsgPos.fields.x;
  y = this->fields.svtProfileMsgPos.fields.y;
  z = this->fields.svtProfileMsgPos.fields.z;
  v27 = v23;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_36;
  v30.fields.x = (float)(x + (float)((float)(560.0 - v27) * 0.5)) + 1.0;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v30, 0);
  Instance = (DataManager_o *)this->fields.profileMessageLabel;
  if ( !Instance )
    goto LABEL_36;
  UIWidget__set_width((UIWidget_o *)Instance, 560, 0);
  v28 = (UIWidget_o *)this->fields.profileMessageLabel;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  Instance = (DataManager_o *)FSUtility__IsUnderVista(0);
  if ( !v28 )
LABEL_36:
    sub_1C3E7C0(Instance, v6);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v29 = 360;
  else
    v29 = 350;
  UIWidget__set_height(v28, v29, 0);
}


bool ConnectMark__SetTipMessage(ConnectMark_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x22
  int32_t Sum; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t v9; // w23
  int32_t v10; // w0
  Il2CppObject *Entity; // x0
  UILabel_o *tipsMessageLabel; // x22
  Il2CppObject *v13; // x23

  if ( (byte_4C558A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_TipsBattleMaster___);
    sub_1C3E564(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3795/*"CONNECT_TIP_MESSAGE"*/);
    byte_4C558A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TipsBattleMaster___);
  if ( !Instance )
    goto LABEL_19;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Sum = TipsBattleMaster__getSum((TipsBattleMaster_o *)Instance, 0);
  v7 = Sum;
  if ( Sum >= 1 )
  {
    if ( Sum == 1 )
    {
      v8 = 1;
    }
    else
    {
      v9 = Sum + 1;
      do
      {
        v10 = UnityEngine_Random__Range_71301784(1, v9, 0);
        if ( v10 <= v7 )
          v8 = v10;
        else
          v8 = v7;
      }
      while ( this->fields.tipNum == v8 );
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               v8,
               (const MethodInfo_33B2F58 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int__GetEntity__);
    tipsMessageLabel = this->fields.tipsMessageLabel;
    v13 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"CONNECT_TIP_MESSAGE"*/, 0);
    if ( v13 )
    {
      Instance = (DataManager_o *)System_String__Format((System_String_o *)Instance, (Il2CppObject *)v13[1].monitor, 0);
      if ( tipsMessageLabel )
      {
        UILabel__set_text(tipsMessageLabel, (System_String_o *)Instance, 0);
        this->fields.tipNum = v8;
        return v7 > 0;
      }
    }
LABEL_19:
    sub_1C3E7C0(Instance, v4);
  }
  return v7 > 0;
}


void ConnectMark_ProfilePushData___ctor(ConnectMark_ProfilePushData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.svtId = -1;
  this->fields.priority = -1;
}


void ConnectMark__MarkCR_d__81___ctor(ConnectMark__MarkCR_d__81_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ConnectMark__MarkCR_d__81__MoveNext(ConnectMark__MarkCR_d__81_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ConnectMark__MarkCR_d__81_o *v4; // x19
  struct ConnectMark_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  Il2CppObject *Component_object; // x0
  ConnectMark__MarkCR_d__81_o **p_simpleAnimation_5__2; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x0
  ConnectMark__MarkCR_d__81_o **p_an_5__3; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _BOOL4 v19; // w26
  int32_t v20; // w1
  UnityEngine_Object_o *simpleAnimation_5__2; // x21
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  CGThumbnailListItem_o *v23; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int v26; // w8
  UnityEngine_WaitForEndOfFrame_o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_WaitForSeconds_o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *v33; // x21
  UnityEngine_Object_o *v34; // x21
  UnityEngine_Object_o *v35; // x21
  ConnectMark__MarkCR_d__81_o *v36; // x23
  ConnectMark__MarkCR_d__81_c *klass; // x24
  UITweener_o *v38; // x23
  EventDelegate_Callback_o *v39; // x25
  System_Nullable_ConnectMarkFadeInLagType__o fadeInLagType; // x1
  UnityEngine_Object_o *an_5__3; // x23
  ConnectMark__MarkCR_d__81_o *v42; // x23
  ConnectMark__MarkCR_d__81_o *v43; // x23
  bool v44; // w0
  ConnectMark__MarkCR_d__81_o *v45; // x22
  System_String_o **monitor; // x8
  ConnectMark__MarkCR_d__81_c *v47; // x8
  ConnectMark__MarkCR_d__81_o *v48; // x22
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  System_String_o *v52; // x1
  UnityEngine_Object_o *v53; // x21
  ConnectMark__MarkCR_d__81_o *v54; // x21
  UILabel_o *markLabel; // x20
  UnityEngine_WaitForEndOfFrame_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  UnityEngine_Object_o *v59; // x21
  UnityEngine_WaitForEndOfFrame_o *v60; // x20
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_String_o *markAnimationName; // x1
  ConnectMark__MarkCR_d__81_o *v64; // x21
  ConnectMark__MarkCR_d__81_o *v65; // x21
  void *v66; // x8
  ConnectMark__MarkCR_d__81_o *v67; // x21
  System_String_o *name; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_String_o *v71; // x1
  ConnectMark__MarkCR_d__81_o *v72; // x21
  ConnectMark__MarkCR_d__81_c *v73; // x8
  __int64 v74; // x9
  SimpleAnimation_State_c **v75; // x10
  __int64 v76; // x0
  __int64 v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  unsigned int mode; // w8
  RubyLabelHelper_o *rubyLabelHelper; // x0
  unsigned int v82; // w8
  UnityEngine_WaitForEndOfFrame_o *v83; // x20
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C56250 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C3E564(&Method_ConnectMark_OnEndAlphaTween__);
    sub_1C3E564(&ConnectMark_TypeInfo);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C3E564(&StringLiteral_13325/*"System/tips_back02"*/);
    sub_1C3E564(&StringLiteral_13324/*"System/tips_back01"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    this = (ConnectMark__MarkCR_d__81_o *)sub_1C3E564(&StringLiteral_988/*"."*/);
    byte_4C56250 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_165;
      *(_WORD *)&_4__this->fields.isMaskClickWait = 0;
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.touchInfoBase;
      _4__this->fields.tipNum = -1;
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0);
      v4->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_165;
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markSprite;
      if ( !this )
        goto LABEL_165;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v4->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = (ConnectMark__MarkCR_d__81_o **)&v4->fields._simpleAnimation_5__2;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._simpleAnimation_5__2, (int32_t)Component_object, v13, v14);
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markSprite;
      if ( !this )
        goto LABEL_165;
      v15 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
      v4->fields._an_5__3 = (struct UnityEngine_Animation_o *)v15;
      p_an_5__3 = (ConnectMark__MarkCR_d__81_o **)&v4->fields._an_5__3;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._an_5__3, (int32_t)v15, v17, v18);
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markBase;
      if ( !this )
        goto LABEL_165;
      v19 = !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0)
         || _4__this->fields.markAnimationName == 0;
      this = (ConnectMark__MarkCR_d__81_o *)System_String__IsNullOrEmpty(v4->fields.message, 0);
      if ( !_4__this->fields.markBase )
        goto LABEL_165;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(_4__this->fields.markBase, 0, 0);
        this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markLabel;
        if ( !this )
          goto LABEL_165;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
        v36 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0) )
        {
          this = *p_simpleAnimation_5__2;
          if ( !*p_simpleAnimation_5__2 )
            goto LABEL_165;
          SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
        }
        else
        {
          v54 = *p_an_5__3;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0, 0) )
          {
            this = *p_an_5__3;
            if ( !*p_an_5__3 )
              goto LABEL_165;
            UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0);
          }
        }
        goto LABEL_139;
      }
      UnityEngine_GameObject__SetActive(_4__this->fields.markBase, 1, 0);
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markBase;
      if ( !this )
        goto LABEL_165;
      this = (ConnectMark__MarkCR_d__81_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this )
        goto LABEL_165;
      v86.fields.r = *((float *)&this[2].klass + 1);
      v86.fields.g = *(float *)&this[2].monitor;
      v86.fields.b = *((float *)&this[2].monitor + 1);
      v86.fields.a = 0.005;
      UIWidget__set_color((UIWidget_o *)this, v86, 0);
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markBase;
      if ( !this )
        goto LABEL_165;
      this = (ConnectMark__MarkCR_d__81_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !this )
        goto LABEL_165;
      klass = this[1].klass;
      v38 = (UITweener_o *)this;
      v39 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v39, (Il2CppObject *)_4__this, Method_ConnectMark_OnEndAlphaTween__, 0);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Remove((System_Collections_Generic_List_EventDelegate__o *)klass, v39, 0);
      fadeInLagType = _4__this->fields.fadeInLagType;
      v38->fields.delay = ConnectMark__GetFadeInLagSecondByLagType(_4__this, fadeInLagType, 0);
      v38[1].klass = (UITweener_c *)0x3F8000003BA3D70ALL;
      UITweener__ResetToBeginning(v38, 0);
      UITweener__PlayForward(v38, 0);
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markLabel;
      if ( !this )
        goto LABEL_165;
      UILabel__set_text((UILabel_o *)this, v4->fields.message, 0);
      an_5__3 = (UnityEngine_Object_o *)v4->fields._an_5__3;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(an_5__3, 0, 0) )
      {
        v42 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0, 0) )
          goto LABEL_139;
      }
      v43 = *p_simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v44 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0, 0);
      if ( v19 )
      {
        if ( v44 )
        {
          v45 = *p_simpleAnimation_5__2;
          this = (ConnectMark__MarkCR_d__81_o *)ConnectMark_TypeInfo;
          if ( !ConnectMark_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo);
            this = (ConnectMark__MarkCR_d__81_o *)ConnectMark_TypeInfo;
          }
          monitor = (System_String_o **)this[2].fields.message->monitor;
          if ( !monitor )
            goto LABEL_165;
          if ( *((_DWORD *)monitor + 6) )
          {
            if ( !v45 )
              goto LABEL_165;
            this = (ConnectMark__MarkCR_d__81_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v45, monitor[4], 0);
            if ( !this )
              goto LABEL_165;
            v47 = this->klass;
            v48 = this;
            v49 = *(unsigned __int16 *)&this->klass->_2.rank;
            if ( *(_WORD *)&this->klass->_2.rank )
            {
              p_offset = &v47->_1.interfaceOffsets->offset;
              while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v49;
                p_offset += 4;
                if ( !v49 )
                  goto LABEL_81;
              }
              v51 = (__int64)(&v47[1]._1.properties + 2 * *p_offset);
            }
            else
            {
LABEL_81:
              v51 = sub_1C8ED7C(this, SimpleAnimation_State_TypeInfo, 18);
            }
            (*(void (__fastcall **)(ConnectMark__MarkCR_d__81_o *, __int64, _QWORD))v51)(v48, 2, *(_QWORD *)(v51 + 8));
            v73 = v48->klass;
            v74 = *(unsigned __int16 *)&v48->klass->_2.rank;
            if ( *(_WORD *)&v48->klass->_2.rank )
            {
              v75 = (SimpleAnimation_State_c **)&v73->_1.interfaceOffsets->offset;
              while ( *(v75 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v74;
                v75 += 2;
                if ( !v74 )
                  goto LABEL_134;
              }
              v76 = (__int64)&v73[1] + 16 * *(_DWORD *)v75;
            }
            else
            {
LABEL_134:
              v76 = sub_1C8ED7C(v48, SimpleAnimation_State_TypeInfo, 9);
            }
            v77 = (*(__int64 (__fastcall **)(ConnectMark__MarkCR_d__81_o *, _QWORD))v76)(v48, *(_QWORD *)(v76 + 8));
            _4__this->fields.markAnimationName = (struct System_String_o *)v77;
            sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.markAnimationName, v77, v78, v79);
            this = *p_simpleAnimation_5__2;
            if ( !*p_simpleAnimation_5__2 )
              goto LABEL_165;
            markAnimationName = _4__this->fields.markAnimationName;
            goto LABEL_138;
          }
LABEL_166:
          sub_1C3E7C8(this, method);
        }
        v64 = *p_an_5__3;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0, 0) )
          goto LABEL_139;
        v65 = *p_an_5__3;
        this = (ConnectMark__MarkCR_d__81_o *)ConnectMark_TypeInfo;
        if ( !ConnectMark_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo);
          this = (ConnectMark__MarkCR_d__81_o *)ConnectMark_TypeInfo;
        }
        v66 = this[2].fields.message->monitor;
        if ( !v66 )
          goto LABEL_165;
        if ( !*((_DWORD *)v66 + 6) )
          goto LABEL_166;
        if ( !v65 )
          goto LABEL_165;
        this = (ConnectMark__MarkCR_d__81_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)v65,
                                                *((System_String_o **)v66 + 4),
                                                0);
        if ( !*p_an_5__3 )
          goto LABEL_165;
        v67 = this;
        UnityEngine_Animation__set_wrapMode((UnityEngine_Animation_o *)*p_an_5__3, 2, 0);
        if ( !v67 )
          goto LABEL_165;
        name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v67, 0);
        _4__this->fields.markAnimationName = name;
        sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.markAnimationName, (int32_t)name, v69, v70);
        this = *p_an_5__3;
        if ( !*p_an_5__3 )
          goto LABEL_165;
        v71 = _4__this->fields.markAnimationName;
LABEL_128:
        UnityEngine_Animation__Play_71086848((UnityEngine_Animation_o *)this, v71, 0);
        goto LABEL_139;
      }
      if ( v44 )
      {
        this = *p_simpleAnimation_5__2;
        if ( !*p_simpleAnimation_5__2 )
          goto LABEL_165;
        if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0) )
        {
          this = *p_simpleAnimation_5__2;
          if ( !*p_simpleAnimation_5__2 )
            goto LABEL_165;
          markAnimationName = _4__this->fields.markAnimationName;
LABEL_138:
          SimpleAnimation__Play_66582224((SimpleAnimation_o *)this, markAnimationName, 0);
        }
      }
      else
      {
        v72 = *p_an_5__3;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v72, 0, 0) )
        {
          this = *p_an_5__3;
          if ( !*p_an_5__3 )
            goto LABEL_165;
          if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0) )
          {
            this = *p_an_5__3;
            if ( !*p_an_5__3 )
              goto LABEL_165;
            v71 = _4__this->fields.markAnimationName;
            goto LABEL_128;
          }
        }
      }
LABEL_139:
      mode = _4__this->fields.mode;
      if ( mode > 9 )
        goto LABEL_160;
      if ( ((1 << mode) & 0x2A8) == 0 )
      {
        if ( mode == 2 )
        {
          this = (ConnectMark__MarkCR_d__81_o *)ConnectMark__SetTipMessage(_4__this, 0);
          if ( _4__this->fields.tipsBase )
          {
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              UnityEngine_GameObject__SetActive(_4__this->fields.tipsBase, 1, 0);
              _4__this->fields.isMaskClickTip = 1;
              _4__this->fields.tipNum = -1;
              ConnectMark__LoadBackImage(_4__this, (System_String_o *)StringLiteral_13324/*"System/tips_back01"*/, 0);
            }
            else
            {
              UnityEngine_GameObject__SetActive(_4__this->fields.tipsBase, 0, 0);
            }
            this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.profileBase;
            if ( this )
              goto LABEL_151;
          }
          goto LABEL_165;
        }
LABEL_160:
        this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.tipsBase;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.profileBase;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            ConnectMark__ReleaseBackImage(_4__this, 0);
            goto LABEL_152;
          }
        }
        goto LABEL_165;
      }
      if ( ConnectMark__InitServantProfileList(_4__this, 0) )
      {
        ConnectMark__SetServantProfile(_4__this, _4__this->fields.svtProfileIndex, 0);
        ConnectMark__LoadBackImage(_4__this, (System_String_o *)StringLiteral_13325/*"System/tips_back02"*/, 0);
        rubyLabelHelper = _4__this->fields.rubyLabelHelper;
        if ( rubyLabelHelper )
          RubyLabelHelper__ReleasePrefabs(rubyLabelHelper, 0);
        ConnectMark__SetServantProfile(_4__this, _4__this->fields.svtProfileIndex, 0);
      }
      else
      {
        this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.profileBase;
        if ( !this )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v82 = _4__this->fields.mode;
        if ( v82 <= 9 && ((1 << v82) & 0x2A0) != 0 )
        {
          this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.arrowInfo;
          if ( !this )
            goto LABEL_165;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
      }
      this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.tipsBase;
      if ( !this )
LABEL_165:
        sub_1C3E7C0(this, method);
LABEL_151:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_152:
      if ( System_String__IsNullOrEmpty(v4->fields.message, 0) )
        return 0;
      v83 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v83, 0);
      v4->fields.__2__current = (Il2CppObject *)v83;
      v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v23, (int32_t)v83, v84, v85);
      v26 = 2;
LABEL_155:
      LODWORD(v23[-1].fields._ThumbnailSpritePath_k__BackingField) = v26;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      v20 = StringLiteral_1/*""*/;
      v4->fields._tenText_5__4 = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._tenText_5__4, v20, v2, v3);
      goto LABEL_32;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_165;
      if ( !_4__this->fields.isLoadPause )
        goto LABEL_103;
      simpleAnimation_5__2 = (UnityEngine_Object_o *)v4->fields._simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimation_5__2, 0, 0) )
      {
        this = (ConnectMark__MarkCR_d__81_o *)v4->fields._simpleAnimation_5__2;
        if ( !this )
          goto LABEL_165;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
      }
      else
      {
        v53 = (UnityEngine_Object_o *)v4->fields._an_5__3;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
        {
          this = (ConnectMark__MarkCR_d__81_o *)v4->fields._an_5__3;
          if ( !this )
            goto LABEL_165;
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0);
        }
      }
LABEL_22:
      if ( _4__this->fields.isLoadPause )
      {
        v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v22, 0);
        v4->fields.__2__current = (Il2CppObject *)v22;
        v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v23, (int32_t)v22, v24, v25);
        v26 = 4;
        goto LABEL_155;
      }
      v33 = (UnityEngine_Object_o *)v4->fields._an_5__3;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v33, 0, 0) )
      {
        v34 = (UnityEngine_Object_o *)v4->fields._simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v34, 0, 0) )
          goto LABEL_103;
      }
      if ( !_4__this->fields.markAnimationName )
        goto LABEL_103;
      v35 = (UnityEngine_Object_o *)v4->fields._simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
      {
        this = (ConnectMark__MarkCR_d__81_o *)v4->fields._simpleAnimation_5__2;
        if ( !this )
          goto LABEL_165;
        SimpleAnimation__Play_66582224((SimpleAnimation_o *)this, _4__this->fields.markAnimationName, 0);
      }
      else
      {
        v59 = (UnityEngine_Object_o *)v4->fields._an_5__3;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
        {
          this = (ConnectMark__MarkCR_d__81_o *)v4->fields._an_5__3;
          if ( !this )
            goto LABEL_165;
          UnityEngine_Animation__Play_71086848((UnityEngine_Animation_o *)this, _4__this->fields.markAnimationName, 0);
        }
      }
LABEL_103:
      v60 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v60, 0);
      v4->fields.__2__current = (Il2CppObject *)v60;
      v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v23, (int32_t)v60, v61, v62);
      v26 = 5;
      goto LABEL_155;
    case 4:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_165;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_165;
      if ( _4__this->fields.isMaskClickWait )
      {
        this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.markBase;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (ConnectMark__MarkCR_d__81_o *)_4__this->fields.touchInfoBase;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_30:
            v27 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v27, 0);
            v4->fields.__2__current = (Il2CppObject *)v27;
            v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C3E508(v23, (int32_t)v27, v28, v29);
            v26 = 6;
            goto LABEL_155;
          }
        }
      }
      else
      {
        this = (ConnectMark__MarkCR_d__81_o *)v4->fields._tenText_5__4;
        if ( this )
        {
          v52 = this->fields.__1__state <= 2
              ? System_String__Concat_63636468((System_String_o *)this, (System_String_o *)StringLiteral_988/*"."*/, 0)
              : (System_String_o *)StringLiteral_1/*""*/;
          v4->fields._tenText_5__4 = v52;
          sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._tenText_5__4, (int32_t)v52, v2, v3);
          markLabel = _4__this->fields.markLabel;
          this = (ConnectMark__MarkCR_d__81_o *)System_String__Concat_63636468(
                                                  v4->fields.message,
                                                  v4->fields._tenText_5__4,
                                                  0);
          if ( markLabel )
          {
            UILabel__set_text(markLabel, (System_String_o *)this, 0);
            v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v56, 0);
            v4->fields.__2__current = (Il2CppObject *)v56;
            v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C3E508(v23, (int32_t)v56, v57, v58);
            v26 = 7;
            goto LABEL_155;
          }
        }
      }
      goto LABEL_165;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_30;
    case 7:
      v4->fields.__1__state = -1;
LABEL_32:
      v30 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v30, 1.0, 0);
      v4->fields.__2__current = (Il2CppObject *)v30;
      v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v23, (int32_t)v30, v31, v32);
      v26 = 3;
      goto LABEL_155;
    default:
      return 0;
  }
}


Il2CppObject *ConnectMark__MarkCR_d__81__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ConnectMark__MarkCR_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ConnectMark__MarkCR_d__81__System_Collections_IEnumerator_Reset(
        ConnectMark__MarkCR_d__81_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ConnectMark__MarkCR_d__81_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *ConnectMark__MarkCR_d__81__System_Collections_IEnumerator_get_Current(
        ConnectMark__MarkCR_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ConnectMark__MarkCR_d__81__System_IDisposable_Dispose(ConnectMark__MarkCR_d__81_o *this, const MethodInfo *method)
{
  ;
}


void ConnectMark__ProgressBarCR_d__90___ctor(
        ConnectMark__ProgressBarCR_d__90_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ConnectMark__ProgressBarCR_d__90__MoveNext(ConnectMark__ProgressBarCR_d__90_o *this, const MethodInfo *method)
{
  ConnectMark__ProgressBarCR_d__90_o *v2; // x19
  struct ConnectMark_o *_4__this; // x20
  ManagerConfig_c *v4; // x0
  UILabel_o *loadCancelLabel; // x21
  UILabel_o *miniProgressLoadCancelLabel; // x21
  unsigned int mode; // w8
  UILabel_o *miniProgressBarLabel; // x20
  System_String_o *v9; // x0
  unsigned int v10; // w8
  float sliderValue_5__4; // s1
  float v12; // s0
  UnityEngine_WaitForSeconds_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int v16; // w8
  int32_t v17; // w8
  UnityEngine_WaitForSeconds_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  NotificationDialog_o *notificationDialog; // x19
  __int64 *v22; // x8
  UnityEngine_WaitForEndOfFrame_o *v23; // x20
  CGThumbnailListItem_o *v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int v27; // w8
  System_String_o *v28; // x21
  NotificationDialog_ClickDelegate_o *v29; // x22
  UnityEngine_WaitForEndOfFrame_o *v30; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  bool result; // w0
  System_String_o **v35; // x8
  System_String_o *v36; // x21
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_WaitForEndOfFrame_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  NotificationDialog_o *v46; // x19
  System_String_o *v47; // x21
  NotificationDialog_ClickDelegate_o *v48; // x22
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3

  v2 = this;
  if ( (byte_4C56251 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_ConnectMark_EndNotificationDownload__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C3E564(&StringLiteral_3788/*"CONNECT_LATEST_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_3789/*"CONNECT_LOAD_CANCEL"*/);
    sub_1C3E564(&StringLiteral_3791/*"CONNECT_LOAD_MESSAGE2"*/);
    sub_1C3E564(&StringLiteral_13323/*"System/loadImage"*/);
    sub_1C3E564(&StringLiteral_3786/*"CONNECT_CANCEL_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_3790/*"CONNECT_LOAD_MESSAGE1"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_3792/*"CONNECT_LOAD_MESSAGE3"*/);
    this = (ConnectMark__ProgressBarCR_d__90_o *)sub_1C3E564(&StringLiteral_3787/*"CONNECT_COMPLET_MESSAGE"*/);
    byte_4C56251 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      *(_WORD *)&v2->fields._isUseCancel_5__2 = 0;
      v2->fields.__1__state = -1;
      v2->fields._sliderValue_5__4 = 0.0;
      if ( !_4__this )
        goto LABEL_134;
      if ( _4__this->fields.mode == 6 )
      {
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        if ( !UnityEngine_Application__get_isEditor(0) )
        {
          v4 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v4 = ManagerConfig_TypeInfo;
          }
          if ( !v4->static_fields->UseDebugCommand )
            ConnectMark__LoadBackImage(_4__this, (System_String_o *)StringLiteral_13323/*"System/loadImage"*/, 0);
        }
      }
      loadCancelLabel = _4__this->fields.loadCancelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ConnectMark__ProgressBarCR_d__90_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"CONNECT_LOAD_CANCEL"*/, 0);
      if ( !loadCancelLabel )
        goto LABEL_134;
      UILabel__set_text(loadCancelLabel, (System_String_o *)this, 0);
      miniProgressLoadCancelLabel = _4__this->fields.miniProgressLoadCancelLabel;
      this = (ConnectMark__ProgressBarCR_d__90_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"CONNECT_LOAD_CANCEL"*/, 0);
      if ( !miniProgressLoadCancelLabel )
        goto LABEL_134;
      UILabel__set_text(miniProgressLoadCancelLabel, (System_String_o *)this, 0);
      mode = _4__this->fields.mode;
      if ( mode - 6 < 2 )
        goto LABEL_77;
      if ( mode == 5 )
      {
        *(_WORD *)&v2->fields._isUseCancel_5__2 = 257;
      }
      else if ( mode == 9 )
      {
        v2->fields._isUseCancel_5__2 = 1;
      }
      else
      {
        this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
        if ( !this )
          goto LABEL_134;
        this = (ConnectMark__ProgressBarCR_d__90_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( !this )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
        if ( !this )
          goto LABEL_134;
        this = (ConnectMark__ProgressBarCR_d__90_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( !this )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        mode = _4__this->fields.mode;
LABEL_77:
        if ( mode > 9 || ((1 << mode) & 0x2A0) == 0 )
        {
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
          if ( this )
          {
            this = (ConnectMark__ProgressBarCR_d__90_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields._isUseCancel_5__2, 0);
              this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
              if ( this )
              {
                ((void (__fastcall *)(ConnectMark__ProgressBarCR_d__90_o *, __int64, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                  this,
                  1,
                  this->klass->vtable._5_System_IDisposable_Dispose.method);
                this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
                if ( this )
                {
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
                  this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
                  if ( this )
                    goto LABEL_84;
                }
              }
            }
          }
          goto LABEL_134;
        }
      }
      this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
      if ( this )
      {
        this = (ConnectMark__ProgressBarCR_d__90_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields._isUseCancel_5__2, 0);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
          if ( this )
          {
            ((void (__fastcall *)(ConnectMark__ProgressBarCR_d__90_o *, __int64, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
              this,
              1,
              this->klass->vtable._5_System_IDisposable_Dispose.method);
            this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
            if ( this )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, _4__this->fields.mode == 9, 0);
              this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
              if ( this )
              {
LABEL_84:
                ((void (__fastcall *)(ConnectMark__ProgressBarCR_d__90_o *, _QWORD, _QWORD, Il2CppClass *))this->klass[1]._1.declaringType)(
                  this,
                  0,
                  0,
                  this->klass[1]._1.parent);
                v30 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v30, 0);
                v2->fields.__2__current = (Il2CppObject *)v30;
                p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
                sub_1C3E508(p__2__current, (int32_t)v30, v32, v33);
                result = 1;
                LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
                return result;
              }
            }
          }
        }
      }
LABEL_134:
      sub_1C3E7C0(this, method);
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_134;
      switch ( _4__this->fields.mode )
      {
        case 5:
        case 7:
        case 9:
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressBarBase;
          if ( !this )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressBarSlider;
          if ( !this )
            goto LABEL_134;
          UIProgressBar__set_value((UIProgressBar_o *)this, v2->fields._sliderValue_5__4, 0);
          miniProgressBarLabel = _4__this->fields.miniProgressBarLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v9 = (System_String_o *)StringLiteral_3792/*"CONNECT_LOAD_MESSAGE3"*/;
          break;
        case 6:
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.progressBarBase;
          if ( !this )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.progressBarSlider;
          if ( !this )
            goto LABEL_134;
          UIProgressBar__set_value((UIProgressBar_o *)this, v2->fields._sliderValue_5__4, 0);
          miniProgressBarLabel = _4__this->fields.progressBarLabel;
          if ( v2->fields._isUseCancel_5__2 )
            v35 = (System_String_o **)&StringLiteral_3790/*"CONNECT_LOAD_MESSAGE1"*/;
          else
            v35 = (System_String_o **)&StringLiteral_3791/*"CONNECT_LOAD_MESSAGE2"*/;
          v36 = *v35;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v9 = v36;
          break;
        default:
          goto LABEL_95;
      }
      this = (ConnectMark__ProgressBarCR_d__90_o *)LocalizationManager__Get(v9, 0);
      if ( !miniProgressBarLabel )
        goto LABEL_134;
      UILabel__set_text(miniProgressBarLabel, (System_String_o *)this, 0);
LABEL_95:
      v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v37, 0);
      v2->fields.__2__current = (Il2CppObject *)v37;
      v24 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(v24, (int32_t)v37, v38, v39);
      v27 = 2;
      goto LABEL_132;
    case 2:
      v2->fields.__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ConnectMark__ProgressBarCR_d__90_o *)AssetManager__getDownloadSize(0);
      v2->fields._allSize_5__5 = (int64_t)this;
      if ( (__int64)this < 1 )
      {
        if ( !_4__this )
          goto LABEL_134;
        if ( v2->fields._isUseDialog_5__3 )
        {
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.markBase;
          _4__this->fields.isLoadPause = 1;
          if ( !this )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          notificationDialog = _4__this->fields.notificationDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v22 = &StringLiteral_3788/*"CONNECT_LATEST_MESSAGE"*/;
LABEL_69:
          v28 = LocalizationManager__Get((System_String_o *)*v22, 0);
          v29 = (NotificationDialog_ClickDelegate_o *)sub_1C3E7B0(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v29,
            (Il2CppObject *)_4__this,
            Method_ConnectMark_EndNotificationDownload__,
            0);
          if ( !notificationDialog )
            goto LABEL_134;
          NotificationDialog__Open(
            notificationDialog,
            (System_String_o *)StringLiteral_1/*""*/,
            v28,
            v29,
            -1,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0.0,
            0,
            1,
            0);
          return 0;
        }
LABEL_129:
        result = 0;
        _4__this->fields.isBusy = 0;
        return result;
      }
      if ( v2->fields._isUseCancel_5__2 )
      {
        if ( !_4__this )
          goto LABEL_134;
        v10 = _4__this->fields.mode;
        if ( v10 <= 9 && ((1 << v10) & 0x2A0) != 0 )
        {
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
          if ( !this )
            goto LABEL_134;
          ((void (__fastcall *)(ConnectMark__ProgressBarCR_d__90_o *, __int64, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
            this,
            1,
            this->klass->vtable._5_System_IDisposable_Dispose.method);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
          if ( !this )
            goto LABEL_134;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressLoadCancelButton;
          if ( !this )
            goto LABEL_134;
        }
        else
        {
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
          if ( !this )
            goto LABEL_134;
          ((void (__fastcall *)(ConnectMark__ProgressBarCR_d__90_o *, __int64, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
            this,
            1,
            this->klass->vtable._5_System_IDisposable_Dispose.method);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
          if ( !this )
            goto LABEL_134;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.loadCancelButton;
          if ( !this )
            goto LABEL_134;
        }
        ((void (__fastcall *)(ConnectMark__ProgressBarCR_d__90_o *, _QWORD, _QWORD, Il2CppClass *))this->klass[1]._1.declaringType)(
          this,
          0,
          0,
          this->klass[1]._1.parent);
      }
LABEL_110:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ConnectMark__ProgressBarCR_d__90_o *)AssetManager__getDownloadSize(0);
      v2->fields._size_5__6 = (int64_t)this;
      if ( (__int64)this < 1 )
      {
        v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v49, 0);
        v2->fields.__2__current = (Il2CppObject *)v49;
        v24 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C3E508(v24, (int32_t)v49, v50, v51);
        v27 = 7;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_134;
        if ( _4__this->fields.isLoadCancel )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__cancelDownloadAssetStorage(0);
LABEL_118:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (ConnectMark__ProgressBarCR_d__90_o *)AssetManager__getDownloadSize(0);
          v2->fields._size_5__6 = (int64_t)this;
          if ( (__int64)this >= 1 )
          {
            v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
            v2->fields.__2__current = (Il2CppObject *)v43;
            v24 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1C3E508(v24, (int32_t)v43, v44, v45);
            v27 = 3;
            goto LABEL_132;
          }
          if ( !_4__this )
            goto LABEL_134;
          if ( v2->fields._isUseDialog_5__3 )
          {
            _4__this->fields.isLoadPause = 1;
            v46 = _4__this->fields.notificationDialog;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"CONNECT_CANCEL_MESSAGE"*/, 0);
            v48 = (NotificationDialog_ClickDelegate_o *)sub_1C3E7B0(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v48,
              (Il2CppObject *)_4__this,
              Method_ConnectMark_EndNotificationDownload__,
              0);
            if ( !v46 )
              goto LABEL_134;
            NotificationDialog__Open(
              v46,
              (System_String_o *)StringLiteral_1/*""*/,
              v47,
              v48,
              -1,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0.0,
              0,
              1,
              0);
            return 0;
          }
          goto LABEL_129;
        }
        v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v52, 0);
        v2->fields.__2__current = (Il2CppObject *)v52;
        v24 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C3E508(v24, (int32_t)v52, v53, v54);
        v27 = 4;
      }
LABEL_132:
      LODWORD(v24[-1].fields._ThumbnailSpritePath_k__BackingField) = v27;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_118;
    case 4:
      sliderValue_5__4 = v2->fields._sliderValue_5__4;
      v12 = (float)(1.0 - (float)((float)v2->fields._size_5__6 / (float)v2->fields._allSize_5__5)) * 0.99;
      v2->fields.__1__state = -1;
      if ( sliderValue_5__4 >= v12 )
        goto LABEL_105;
      if ( !_4__this )
        goto LABEL_134;
      switch ( _4__this->fields.mode )
      {
        case 5:
        case 7:
        case 9:
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressBarSlider;
          goto LABEL_103;
        case 6:
          this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.progressBarSlider;
LABEL_103:
          v2->fields._sliderValue_5__4 = v12;
          if ( !this )
            goto LABEL_134;
          UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0);
          break;
        default:
          break;
      }
LABEL_105:
      v40 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v40, 0);
      v2->fields.__2__current = (Il2CppObject *)v40;
      v24 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(v24, (int32_t)v40, v41, v42);
      v27 = 5;
      goto LABEL_132;
    case 5:
      v2->fields.__1__state = -1;
      v13 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v13, 0.1, 0);
      v2->fields.__2__current = (Il2CppObject *)v13;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v13, v14, v15);
      v16 = 6;
      goto LABEL_53;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_110;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_134;
      v17 = _4__this->fields.mode;
      if ( v17 == 5 || v17 == 7 )
      {
        this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.miniProgressBarSlider;
        if ( !this )
          goto LABEL_134;
      }
      else
      {
        if ( v17 != 6 )
          goto LABEL_62;
        this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.progressBarSlider;
        if ( !this )
          goto LABEL_134;
      }
      UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
LABEL_62:
      v23 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v23, 0);
      v2->fields.__2__current = (Il2CppObject *)v23;
      v24 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(v24, (int32_t)v23, v25, v26);
      v27 = 8;
      goto LABEL_132;
    case 8:
      v2->fields.__1__state = -1;
      v18 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v18, 0.1, 0);
      v2->fields.__2__current = (Il2CppObject *)v18;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v18, v19, v20);
      v16 = 9;
LABEL_53:
      v2->fields.__1__state = v16;
      return 1;
    case 9:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_134;
      if ( !v2->fields._isUseDialog_5__3 )
        goto LABEL_129;
      this = (ConnectMark__ProgressBarCR_d__90_o *)_4__this->fields.markBase;
      _4__this->fields.isLoadPause = 1;
      if ( !this )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      notificationDialog = _4__this->fields.notificationDialog;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = &StringLiteral_3787/*"CONNECT_COMPLET_MESSAGE"*/;
      goto LABEL_69;
    default:
      return 0;
  }
}


Il2CppObject *ConnectMark__ProgressBarCR_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ConnectMark__ProgressBarCR_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ConnectMark__ProgressBarCR_d__90__System_Collections_IEnumerator_Reset(
        ConnectMark__ProgressBarCR_d__90_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ConnectMark__ProgressBarCR_d__90_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *ConnectMark__ProgressBarCR_d__90__System_Collections_IEnumerator_get_Current(
        ConnectMark__ProgressBarCR_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ConnectMark__ProgressBarCR_d__90__System_IDisposable_Dispose(
        ConnectMark__ProgressBarCR_d__90_o *this,
        const MethodInfo *method)
{
  ;
}


void ConnectMark___c__DisplayClass100_0___ctor(ConnectMark___c__DisplayClass100_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass100_0___LoadOtherMark_b__0(
        ConnectMark___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  ConnectMark___c__DisplayClass100_0_o *v8; // x19
  struct ConnectMark_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *eventAnimationIconDictionary; // x0
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x4
  ConnectMark_o *v20; // x8
  Il2CppObject *v21; // x20
  System_Collections_Generic_Dictionary_object__object__o *EventUIAtlasDictionary; // x0
  int32_t animationId; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4C558B7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
    sub_1C3E564(&int_TypeInfo);
    this = (ConnectMark___c__DisplayClass100_0_o *)sub_1C3E564(&StringLiteral_5347/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4C558B7 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  eventAnimationIconDictionary = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.eventAnimationIconDictionary;
  if ( !eventAnimationIconDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          eventAnimationIconDictionary,
          v8->fields.eventId,
          (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    eventId = v8->fields.eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4, v5, v6, v7);
    animationId = v8->fields.animationId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationId, v12, v13, v14, v15, v16, v17);
    this = (ConnectMark___c__DisplayClass100_0_o *)System_String__Format_63677760(
                                                     (System_String_o *)StringLiteral_5347/*"DownloadEventUIAtlas{0}{1}"*/,
                                                     v11,
                                                     v18,
                                                     0);
    v20 = v8->fields.__4__this;
    if ( v20 )
    {
      v21 = (Il2CppObject *)this;
      EventUIAtlasDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v20->fields.EventUIAtlasDictionary;
      if ( !EventUIAtlasDictionary )
        goto LABEL_10;
      this = (ConnectMark___c__DisplayClass100_0_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       EventUIAtlasDictionary,
                                                       v21,
                                                       (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v20 = v8->fields.__4__this;
      if ( v20 )
      {
LABEL_10:
        ConnectMark__LoadAtlas(v20, (System_String_o *)v21, v8->fields.eventId, 0, v19);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(this, method);
  }
}


void ConnectMark___c__DisplayClass101_0___ctor(ConnectMark___c__DisplayClass101_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass101_0___LoadEventAnimationIcon_b__0(
        ConnectMark___c__DisplayClass101_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass101_0_o *v4; // x19
  struct ConnectMark_o *_4__this; // x8
  struct ConnectMark_o *v6; // x8
  Il2CppObject *Item; // x21
  Il2CppObject *Object_object__51228128; // x20
  Il2CppObject *Component_object; // x20
  struct ConnectMark_o *v10; // x8
  struct ConnectMark_o *v11; // x8
  struct ConnectMark_o *v12; // x9
  char v13; // w8
  int32_t eventId; // w1
  Il2CppObject *v15; // x21
  struct ConnectMark_o *v16; // x8
  UnityEngine_Object_o *gameObject; // x21
  struct ConnectMark_o *v18; // x8

  v4 = this;
  if ( (byte_4C558B8 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&ConnectMark_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__set_Item__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_AnimationLoadingIcon___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ConnectMark___c__DisplayClass101_0_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C558B8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_42;
  this = (ConnectMark___c__DisplayClass101_0_o *)_4__this->fields.eventAnimationIconDictionary;
  if ( !this )
    goto LABEL_42;
  this = (ConnectMark___c__DisplayClass101_0_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                   v4->fields.eventId,
                                                   (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_45;
  v6 = v4->fields.__4__this;
  if ( !v6 )
    goto LABEL_42;
  this = (ConnectMark___c__DisplayClass101_0_o *)v6->fields.eventAnimationIconDictionary;
  if ( !this )
    goto LABEL_42;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v4->fields.eventId,
           (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
  {
LABEL_45:
    this = (ConnectMark___c__DisplayClass101_0_o *)ConnectMark_TypeInfo;
    if ( !ConnectMark_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo);
    if ( !prefabData )
      goto LABEL_42;
    Object_object__51228128 = AssetData__GetObject_object__51228128(
                                prefabData,
                                ConnectMark_TypeInfo->static_fields->ANIMATION_ICON_PREFAB,
                                (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51228128, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ConnectMark___c__DisplayClass101_0_o *)UnityEngine_Object__Instantiate_object_(
                                                       Object_object__51228128,
                                                       (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_42;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_AnimationLoadingIcon___);
      this = (ConnectMark___c__DisplayClass101_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( Component_object )
        {
          this = (ConnectMark___c__DisplayClass101_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Component_object,
                                                           0);
          v10 = v4->fields.__4__this;
          if ( v10 )
          {
            GameObjectExtensions__SafeSetParent_36182084((UnityEngine_GameObject_o *)this, v10->fields.iconBase, 0);
            v11 = v4->fields.__4__this;
            if ( v11 )
            {
              this = (ConnectMark___c__DisplayClass101_0_o *)v11->fields.eventAnimationIconDictionary;
              if ( this )
              {
                this = (ConnectMark___c__DisplayClass101_0_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                 v4->fields.eventId,
                                                                 (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
                v12 = v4->fields.__4__this;
                if ( v12 )
                {
                  v13 = (char)this;
                  this = (ConnectMark___c__DisplayClass101_0_o *)v12->fields.eventAnimationIconDictionary;
                  if ( this )
                  {
                    eventId = v4->fields.eventId;
                    if ( (v13 & 1) == 0 )
                    {
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)this,
                        eventId,
                        Component_object,
                        (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__Add__);
                      goto LABEL_41;
                    }
                    v15 = System_Collections_Generic_Dictionary_int__object___get_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            eventId,
                            (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    this = (ConnectMark___c__DisplayClass101_0_o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)v15,
                                                                     0,
                                                                     0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v16 = v4->fields.__4__this;
                      if ( !v16 )
                        goto LABEL_42;
                      this = (ConnectMark___c__DisplayClass101_0_o *)v16->fields.eventAnimationIconDictionary;
                      if ( !this )
                        goto LABEL_42;
                      this = (ConnectMark___c__DisplayClass101_0_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                       v4->fields.eventId,
                                                                       (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
                      if ( !this )
                        goto LABEL_42;
                      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_71341564(gameObject, 0);
                    }
                    v18 = v4->fields.__4__this;
                    if ( v18 )
                    {
                      this = (ConnectMark___c__DisplayClass101_0_o *)v18->fields.eventAnimationIconDictionary;
                      if ( this )
                      {
                        System_Collections_Generic_Dictionary_int__object___set_Item(
                          (System_Collections_Generic_Dictionary_int__object__o *)this,
                          v4->fields.eventId,
                          Component_object,
                          (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__set_Item__);
                        goto LABEL_41;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_42:
        sub_1C3E7C0(this, prefabData);
      }
    }
  }
LABEL_41:
  ActionExtensions__Call(v4->fields.callback, 0);
}


void ConnectMark___c__DisplayClass102_0___ctor(ConnectMark___c__DisplayClass102_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass102_0___LoadAtlas_b__0(
        ConnectMark___c__DisplayClass102_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass102_0_o *v4; // x19
  Il2CppObject *Object_object__51228128; // x20
  Il2CppObject *Component_object; // x20
  struct ConnectMark_o *_4__this; // x8

  v4 = this;
  if ( (byte_4C558B9 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__Add__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (ConnectMark___c__DisplayClass102_0_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C558B9 = 1;
  }
  if ( !prefabData )
    goto LABEL_15;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              prefabData,
                              v4->fields.atlasName,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ConnectMark___c__DisplayClass102_0_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Object_object__51228128,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__51228128 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51228128,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ConnectMark___c__DisplayClass102_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v4->fields.__4__this;
      if ( _4__this )
      {
        this = (ConnectMark___c__DisplayClass102_0_o *)_4__this->fields.EventUIAtlasDictionary;
        if ( this )
        {
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (Il2CppObject *)v4->fields.atlasName,
            Component_object,
            (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__Add__);
          goto LABEL_14;
        }
      }
LABEL_15:
      sub_1C3E7C0(this, prefabData);
    }
  }
LABEL_14:
  ActionExtensions__Call(v4->fields.callback, 0);
}


void ConnectMark___c__DisplayClass103_0___ctor(ConnectMark___c__DisplayClass103_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass103_0___SetOtherMark_b__0(
        ConnectMark___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass103_0_o *v2; // x19
  struct ConnectMark_o *_4__this; // x8
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  struct ConnectMark_o *v18; // x21
  ConnectMark___c__DisplayClass103_0_o *v19; // x20
  System_Action_o *_9__1; // x23
  int32_t v21; // w22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t animationId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C5624F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_ConnectMark___c__DisplayClass103_0__SetOtherMark_b__1__);
    this = (ConnectMark___c__DisplayClass103_0_o *)sub_1C3E564(&StringLiteral_5347/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4C5624F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (ConnectMark___c__DisplayClass103_0_o *)_4__this->fields.eventAnimationIconDictionary;
  if ( !this )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this,
         v2->fields.eventId,
         (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    this = (ConnectMark___c__DisplayClass103_0_o *)v2->fields.__4__this;
    if ( this )
    {
      ConnectMark__SetOtherMarkAfterLoad((ConnectMark_o *)this, v2->fields.eventId, v2->fields.animationId, 0);
      return;
    }
LABEL_17:
    sub_1C3E7C0(this, method);
  }
  eventId = v2->fields.eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v4, v5, v6, v7, v8, v9);
  animationId = v2->fields.animationId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationId, v11, v12, v13, v14, v15, v16);
  this = (ConnectMark___c__DisplayClass103_0_o *)System_String__Format_63677760(
                                                   (System_String_o *)StringLiteral_5347/*"DownloadEventUIAtlas{0}{1}"*/,
                                                   v10,
                                                   v17,
                                                   0);
  v18 = v2->fields.__4__this;
  if ( !v18 )
    goto LABEL_17;
  v19 = this;
  this = (ConnectMark___c__DisplayClass103_0_o *)v18->fields.EventUIAtlasDictionary;
  if ( this
    && (this = (ConnectMark___c__DisplayClass103_0_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                         (Il2CppObject *)v19,
                                                         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__),
        v18 = v2->fields.__4__this,
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( !v18 )
      goto LABEL_17;
    ConnectMark__SetOtherMarkAfterLoad(v2->fields.__4__this, v2->fields.eventId, v2->fields.animationId, 0);
  }
  else
  {
    _9__1 = v2->fields.__9__1;
    v21 = v2->fields.eventId;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(_9__1, (Il2CppObject *)v2, Method_ConnectMark___c__DisplayClass103_0__SetOtherMark_b__1__, 0);
      v2->fields.__9__1 = _9__1;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v22, v23);
    }
    if ( !v18 )
      goto LABEL_17;
    ConnectMark__LoadAtlas(v18, (System_String_o *)v19, v21, _9__1, 0);
  }
}


void ConnectMark___c__DisplayClass103_0___SetOtherMark_b__1(
        ConnectMark___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ConnectMark_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  ConnectMark__SetOtherMarkAfterLoad(_4__this, this->fields.eventId, this->fields.animationId, 0);
}


void ConnectMark___c__DisplayClass108_0___ctor(ConnectMark___c__DisplayClass108_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ConnectMark___c__DisplayClass108_0___GetStartProfileServantCommentEntity_b__0(
        ConnectMark___c__DisplayClass108_0_o *this,
        ConnectMark_ProfilePushData_o *a,
        const MethodInfo *method)
{
  struct ConnectMark_ProfilePushData_o *mainData; // x8

  if ( !a || (mainData = this->fields.mainData) == 0 )
    sub_1C3E7C0(this, a);
  return a->fields.svtId == mainData->fields.svtId
      && a->fields.idx == mainData->fields.idx
      && a->fields.priority == mainData->fields.priority;
}