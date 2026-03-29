void EventInfoPassiveSkillGivenItemComponent___ctor(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoPassiveSkillGivenItemComponent__Awake(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeConfirmDialog(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        int32_t svtId,
        int32_t beforeSkillId,
        int32_t afterSkillId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventInfoPassiveSkillChangeConfirmDialogPrefab; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x23
  const MethodInfo *v13; // x2
  Il2CppObject *Entity; // x22
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x20
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x5

  if ( (byte_4D31E13 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeConfirmDialog_b__16_0__);
    sub_1C93AD4(&Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeConfirmDialog___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D31E13 = 1;
  }
  eventInfoPassiveSkillChangeConfirmDialogPrefab = this->fields.eventInfoPassiveSkillChangeConfirmDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v12 = GameObjectHelper__Instantiate_object_(
          eventInfoPassiveSkillChangeConfirmDialogPrefab,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          0,
          (const MethodInfo_31FDCA8 *)Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeConfirmDialog___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0) )
  {
    EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(this, 1, v13);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___)) == 0)
    || (v15 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                beforeSkillId,
                (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__),
        (Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___)) == 0)
    || (v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                afterSkillId,
                (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__),
        v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)this,
          Method_EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeConfirmDialog_b__16_0__,
          0),
        !v12) )
  {
LABEL_15:
    sub_1C93D2C(Instance, v11);
  }
  EventInfoPassiveSkillChangeConfirmDialog__Open(
    (EventInfoPassiveSkillChangeConfirmDialog_o *)v12,
    (ServantEntity_o *)Entity,
    (SkillEntity_o *)v15,
    (SkillEntity_o *)v16,
    v17,
    v18);
}


void EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeDialog(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        EventItemUsedInfo_o *eventItemUsedInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *eventInfoPassiveSkillChangeDialogPrefab; // x21
  Il2CppObject *v21; // x21
  const MethodInfo *v22; // x2
  EventItemUsedInfo_o *v23; // x19
  System_Action_int__o *v24; // x22
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x4

  if ( (byte_4D31E12 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeDialog___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__0__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__1__);
    sub_1C93AD4(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_TypeInfo);
    byte_4D31E12 = 1;
  }
  v5 = sub_1C93D20(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = eventItemUsedInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)eventItemUsedInfo, v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v5 + 24) )
    return;
  eventInfoPassiveSkillChangeDialogPrefab = this->fields.eventInfoPassiveSkillChangeDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C93D2C(Instance, v7);
  v21 = GameObjectHelper__Instantiate_object_(
          eventInfoPassiveSkillChangeDialogPrefab,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          0,
          (const MethodInfo_31FDCA8 *)Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeDialog___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, 0, 0) )
  {
    EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(this, 0, v22);
    v23 = *(EventItemUsedInfo_o **)(v5 + 24);
    v24 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v24,
      (Il2CppObject *)v5,
      Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__0__,
      0);
    v25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__1__,
      0);
    if ( v21 )
    {
      EventInfoPassiveSkillChangeDialog__Open((EventInfoPassiveSkillChangeDialog_o *)v21, v23, v24, v25, v26);
      return;
    }
    goto LABEL_12;
  }
}


void EventInfoPassiveSkillGivenItemComponent__Initialization(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *IsTargetScene; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  EventItemUsedInfo_o *EventItemUsedInfo; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_4D31E0F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0__Initialization_b__0__);
    sub_1C93AD4(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0_TypeInfo);
    byte_4D31E0F = 1;
  }
  v5 = sub_1C93D20(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !eventUiEntity )
    goto LABEL_12;
  this->fields.eventId = eventUiEntity->fields.eventId;
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, eventUiEntity, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  IsTargetScene = (Il2CppObject *)EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsTargetScene & 1) == 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsTargetScene = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !IsTargetScene )
LABEL_12:
    sub_1C93D2C(IsTargetScene, v7);
  EventItemUsedInfo = UserEventItemLinkSvtMaster__GetEventItemUsedInfo(
                        (UserEventItemLinkSvtMaster_o *)IsTargetScene,
                        this->fields.eventId,
                        this->fields.itemId,
                        0);
  *(_QWORD *)(v5 + 24) = EventItemUsedInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)EventItemUsedInfo, v16, v17, v18, v19, v20, v21);
  v23 = *(_QWORD *)(v5 + 24);
  if ( v23 )
  {
    EventInfoPassiveSkillGivenItemComponent__SetServant(this, *(_DWORD *)(v23 + 16), v22);
    v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v5,
      Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0__Initialization_b__0__,
      0);
    EventInfoPassiveSkillGivenItemComponent__LoadBuffIcon(this, eventUiEntity, v24, v25);
  }
}


bool EventInfoPassiveSkillGivenItemComponent__IsBusy(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventInfoPassiveSkillGivenItemComponent__LoadBuffIcon(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        EventUiEntity_o *eventUiEntity,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  EventUiEntity_o *v28; // x20
  System_Action_o *v29; // x21

  if ( (byte_4D31E17 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0__LoadBuffIcon_b__0__);
    sub_1C93AD4(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_TypeInfo);
    byte_4D31E17 = 1;
  }
  v7 = sub_1C93D20(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = eventUiEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)eventUiEntity, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onFinish;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)onFinish, v22, v23, v24, v25, v26, v27);
  if ( this->fields.useCommonBuffIcon )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__LoadBuffIconAtlas((AtlasManager_o *)Instance, *(System_Action_o **)(v7 + 32), 0);
      return;
    }
LABEL_8:
    sub_1C93D2C(Instance, v9);
  }
  v28 = *(EventUiEntity_o **)(v7 + 24);
  v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0__LoadBuffIcon_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v28, v29, 0);
}


void EventInfoPassiveSkillGivenItemComponent__OnClickOnInvalid(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4D31E11 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__);
    byte_4D31E11 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoPassiveSkillGivenItemComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    v3 = Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  }
}


void EventInfoPassiveSkillGivenItemComponent__OnClickOnValid(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  EventItemUsedInfo_o *EventItemUsedInfo; // x0
  EventItemUsedInfo_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4D31E10 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__);
    byte_4D31E10 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoPassiveSkillGivenItemComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    if ( !Master_object )
      sub_1C93D2C(0, v4);
    EventItemUsedInfo = UserEventItemLinkSvtMaster__GetEventItemUsedInfo(
                          (UserEventItemLinkSvtMaster_o *)Master_object,
                          this->fields.eventId,
                          this->fields.itemId,
                          0);
    if ( EventItemUsedInfo )
    {
      v6 = EventItemUsedInfo;
      v7 = Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__;
      if ( (*((_BYTE *)Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C93AEC(Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeDialog(this, v6, v9);
    }
  }
}


// attributes: thunk
void EventInfoPassiveSkillGivenItemComponent__ReleaseAsset(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  EventInfoPassiveSkillGivenItemComponent__ReleaseBuffIcon(this, method);
}


void EventInfoPassiveSkillGivenItemComponent__ReleaseBuffIcon(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D31E18 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4D31E18 = 1;
  }
  if ( this->fields.useCommonBuffIcon )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      sub_1C93D2C(0, v4);
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)Instance, 0);
  }
  else
  {
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0);
  }
}


bool EventInfoPassiveSkillGivenItemComponent__SetBuffIcon(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        UISprite_o *sprite,
        int32_t buffIconId,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31E19 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_17771/*"bufficon_{0}"*/);
    byte_4D31E19 = 1;
  }
  if ( this->fields.useCommonBuffIcon )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    return AtlasManager__SetSBuffIconByIconId(sprite, buffIconId, 0);
  }
  else
  {
    v10 = buffIconId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    v9 = System_String__Format((System_String_o *)StringLiteral_17771/*"bufficon_{0}"*/, v8, 0);
    return EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, v9, 0);
  }
}


void EventInfoPassiveSkillGivenItemComponent__SetServant(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  ServantLimitImageMaster_o *v7; // x0
  int32_t ServantLimitCountSealAfter; // w21
  int32_t ImageLimitCount; // w0
  UISprite_o *servantIconSprite; // x21
  int32_t v11; // w20
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D31E15 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D31E15 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v7 = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          (int64_t)v7[2].fields.list[1].monitor,
          svtId,
          0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !entity || !v7 )
LABEL_23:
    sub_1C93D2C(v7, v5);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v7,
                                 svtId,
                                 entity->fields.maxLimitCount,
                                 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, ServantLimitCountSealAfter, 0);
  servantIconSprite = this->fields.servantIconSprite;
  v11 = ImageLimitCount;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(servantIconSprite, svtId, v11, 1, 0, 0);
}


void EventInfoPassiveSkillGivenItemComponent__SetSkill(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buffIconSprite; // x21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_Int32_array *SkillList; // x0
  int32_t v9; // w0
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31E16 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&Method_BasicHelper_IndexValue_int____79063232);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E16 = 1;
  }
  entity = 0;
  buffIconSprite = (UnityEngine_Object_o *)this->fields.buffIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buffIconSprite, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_15;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            this->fields.itemId,
            (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return;
    Master_object = entity;
    if ( !entity )
      goto LABEL_15;
    if ( !ItemEntity__GetSkillList((ItemEntity_o *)entity, 0) )
      return;
    Master_object = entity;
    if ( !entity )
LABEL_15:
      sub_1C93D2C(Master_object, v7);
    SkillList = ItemEntity__GetSkillList((ItemEntity_o *)entity, 0);
    v9 = System_Array__IndexOf_int_(SkillList, skillId, (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
    v10 = BasicHelper__IndexValue_int_(
            this->fields.buffIconIds,
            v9,
            -1,
            (const MethodInfo_3192C94 *)Method_BasicHelper_IndexValue_int____79063232);
    EventInfoPassiveSkillGivenItemComponent__SetBuffIcon(this, this->fields.buffIconSprite, v10, v11);
  }
}


void EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v7; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_4D31E14 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D31E14 = 1;
  }
  this->fields.isBusy = !enable;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_1C93D2C(genericContainerHandle, v7);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoPassiveSkillGivenItemComponent___CreateEventInfoPassiveSkillChangeConfirmDialog_b__16_0(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(this, 1, v2);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0___ctor(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0___CreateEventInfoPassiveSkillChangeDialog_b__0(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  struct EventInfoPassiveSkillGivenItemComponent_o *_4__this; // x8
  struct EventItemUsedInfo_o *eventItemUsedInfo; // x9

  if ( (byte_4D31E1A & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_EventChangePassiveSkillRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1__CreateEventInfoPassiveSkillChangeDialog_b__2__);
    sub_1C93AD4(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_TypeInfo);
    byte_4D31E1A = 1;
  }
  v5 = sub_1C93D20(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 16) = skillId;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1__CreateEventInfoPassiveSkillChangeDialog_b__2__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_EventChangePassiveSkillRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (eventItemUsedInfo = this->fields.eventItemUsedInfo) == 0 || !Request_object )
LABEL_10:
    sub_1C93D2C(Request_object, v7);
  EventChangePassiveSkillRequest__beginRequest(
    (EventChangePassiveSkillRequest_o *)Request_object,
    1,
    _4__this->fields.eventId,
    eventItemUsedInfo->fields.svtId,
    _4__this->fields.itemId,
    *(_DWORD *)(v5 + 16),
    0);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0___CreateEventInfoPassiveSkillChangeDialog_b__1(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoPassiveSkillGivenItemComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(_4__this, 1, v2);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1___ctor(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1___CreateEventInfoPassiveSkillChangeDialog_b__2(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_o *CS___8__locals1; // x8
  EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_o *v4; // x19
  const MethodInfo *v5; // x4
  struct EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_o *v6; // x9
  struct EventItemUsedInfo_o *eventItemUsedInfo; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this,
        (this = (EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_o *)CS___8__locals1->fields.__4__this) == 0)
    || (EventInfoPassiveSkillGivenItemComponent__SetSkill(
          (EventInfoPassiveSkillGivenItemComponent_o *)this,
          v4->fields.skillId,
          method),
        (v6 = v4->fields.CS___8__locals1) == 0)
    || (eventItemUsedInfo = v6->fields.eventItemUsedInfo) == 0
    || (this = (EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, result);
  }
  EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeConfirmDialog(
    (EventInfoPassiveSkillGivenItemComponent_o *)this,
    eventItemUsedInfo->fields.svtId,
    eventItemUsedInfo->fields.skillId,
    v4->fields.skillId,
    v5);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0___ctor(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0___LoadBuffIcon_b__0(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_o *v3; // x19

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity
    || (v3 = this,
        (this = (EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  ActionExtensions__Call(v3->fields.onFinish, 0);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0___ctor(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0___Initialization_b__0(
        EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x20
  EventInfoPassiveSkillGivenItemComponent_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct EventItemUsedInfo_o *eventItemUsedInfo; // x8

  if ( (byte_4D31E1B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E1B = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (EventInfoPassiveSkillGivenItemComponent_o *)UnityEngine_Object__op_Equality(_4__this, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    eventItemUsedInfo = this->fields.eventItemUsedInfo;
    if ( !eventItemUsedInfo || (v4 = this->fields.__4__this) == 0 )
      sub_1C93D2C(v4, v5);
    EventInfoPassiveSkillGivenItemComponent__SetSkill(v4, eventItemUsedInfo->fields.skillId, v6);
  }
}