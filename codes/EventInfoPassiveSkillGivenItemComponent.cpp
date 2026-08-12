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
  __int64 v12; // x1
  Il2CppObject *v13; // x23
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  Il2CppObject *Entity; // x22
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x20
  System_Action_o *v19; // x24
  const MethodInfo *v20; // x5

  if ( (byte_5971D24 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeConfirmDialog_b__16_0__);
    sub_2213A60(&Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeConfirmDialog___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5971D24 = 1;
  }
  eventInfoPassiveSkillChangeConfirmDialogPrefab = this->fields.eventInfoPassiveSkillChangeConfirmDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v13 = GameObjectHelper__Instantiate_object_(
          eventInfoPassiveSkillChangeConfirmDialogPrefab,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          0,
          (const MethodInfo_38B88AC *)Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeConfirmDialog___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0) )
  {
    EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(this, 1, v15);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___)) == 0)
    || (v17 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                beforeSkillId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__),
        (Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___)) == 0)
    || (v18 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                afterSkillId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__),
        v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeConfirmDialog_b__16_0__,
          0),
        !v13) )
  {
LABEL_15:
    sub_2213CDC(Instance, v11);
  }
  EventInfoPassiveSkillChangeConfirmDialog__Open(
    (EventInfoPassiveSkillChangeConfirmDialog_o *)v13,
    (ServantEntity_o *)Entity,
    (SkillEntity_o *)v17,
    (SkillEntity_o *)v18,
    v19,
    v20);
}


void EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeDialog(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        EventItemUsedInfo_o *eventItemUsedInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *eventInfoPassiveSkillChangeDialogPrefab; // x21
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x2
  EventItemUsedInfo_o *v24; // x19
  System_Action_int__o *v25; // x22
  System_Action_o *v26; // x23
  const MethodInfo *v27; // x4

  if ( (byte_5971D23 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeDialog___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__0__);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__1__);
    sub_2213A60(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_TypeInfo);
    byte_5971D23 = 1;
  }
  v5 = sub_2213CCC(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = eventItemUsedInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)eventItemUsedInfo, v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v5 + 24) )
    return;
  eventInfoPassiveSkillChangeDialogPrefab = this->fields.eventInfoPassiveSkillChangeDialogPrefab;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v7);
  v22 = GameObjectHelper__Instantiate_object_(
          eventInfoPassiveSkillChangeDialogPrefab,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          0,
          (const MethodInfo_38B88AC *)Method_GameObjectHelper_Instantiate_EventInfoPassiveSkillChangeDialog___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v22, 0, 0) )
  {
    EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(this, 0, v23);
    v24 = *(EventItemUsedInfo_o **)(v5 + 24);
    v25 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v25,
      (Il2CppObject *)v5,
      Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__0__,
      0);
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v5,
      Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_0__CreateEventInfoPassiveSkillChangeDialog_b__1__,
      0);
    if ( v22 )
    {
      EventInfoPassiveSkillChangeDialog__Open((EventInfoPassiveSkillChangeDialog_o *)v22, v24, v25, v26, v27);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v15; // x1
  EventItemUsedInfo_o *EventItemUsedInfo; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  __int64 v24; // x8
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_5971D20 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0__Initialization_b__0__);
    sub_2213A60(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0_TypeInfo);
    byte_5971D20 = 1;
  }
  v5 = sub_2213CCC(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !eventUiEntity )
    goto LABEL_12;
  this->fields.eventId = eventUiEntity->fields.eventId;
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, eventUiEntity, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  IsTargetScene = (Il2CppObject *)EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsTargetScene & 1) == 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  IsTargetScene = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !IsTargetScene )
LABEL_12:
    sub_2213CDC(IsTargetScene, v7);
  EventItemUsedInfo = UserEventItemLinkSvtMaster__GetEventItemUsedInfo(
                        (UserEventItemLinkSvtMaster_o *)IsTargetScene,
                        this->fields.eventId,
                        this->fields.itemId,
                        0);
  *(_QWORD *)(v5 + 24) = EventItemUsedInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)EventItemUsedInfo, v17, v18, v19, v20, v21, v22);
  v24 = *(_QWORD *)(v5 + 24);
  if ( v24 )
  {
    EventInfoPassiveSkillGivenItemComponent__SetServant(this, *(_DWORD *)(v24 + 16), v23);
    v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass9_0__Initialization_b__0__,
      0);
    EventInfoPassiveSkillGivenItemComponent__LoadBuffIcon(this, eventUiEntity, v25, v26);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  EventUiEntity_o *v28; // x20
  System_Action_o *v29; // x21

  if ( (byte_5971D28 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0__LoadBuffIcon_b__0__);
    sub_2213A60(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_TypeInfo);
    byte_5971D28 = 1;
  }
  v7 = sub_2213CCC(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = eventUiEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)eventUiEntity, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onFinish;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)onFinish, v22, v23, v24, v25, v26, v27);
  if ( this->fields.useCommonBuffIcon )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__LoadBuffIconAtlas((AtlasManager_o *)Instance, *(System_Action_o **)(v7 + 32), 0);
      return;
    }
LABEL_8:
    sub_2213CDC(Instance, v9);
  }
  v28 = *(EventUiEntity_o **)(v7 + 24);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_5971D22 & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__);
    byte_5971D22 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoPassiveSkillGivenItemComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    v3 = Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnInvalid__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  }
}


void EventInfoPassiveSkillGivenItemComponent__OnClickOnValid(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  EventItemUsedInfo_o *EventItemUsedInfo; // x0
  EventItemUsedInfo_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_5971D21 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__);
    byte_5971D21 = 1;
  }
  if ( (((__int64 (__fastcall *)(EventInfoPassiveSkillGivenItemComponent_o *, const MethodInfo *))this->klass->vtable._17_IsBusy.methodPtr)(
          this,
          this->klass->vtable._17_IsBusy.method)
      & 1) == 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v5);
    EventItemUsedInfo = UserEventItemLinkSvtMaster__GetEventItemUsedInfo(
                          (UserEventItemLinkSvtMaster_o *)Master_object,
                          this->fields.eventId,
                          this->fields.itemId,
                          0);
    if ( EventItemUsedInfo )
    {
      v7 = EventItemUsedInfo;
      v8 = Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__;
      if ( (*((_BYTE *)Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_EventInfoPassiveSkillGivenItemComponent_OnClickOnValid__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      EventInfoPassiveSkillGivenItemComponent__CreateEventInfoPassiveSkillChangeDialog(this, v7, v10);
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

  if ( (byte_5971D29 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_5971D29 = 1;
  }
  if ( this->fields.useCommonBuffIcon )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v4);
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

  if ( (byte_5971D2A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_18410/*"bufficon_{0}"*/);
    byte_5971D2A = 1;
  }
  if ( this->fields.useCommonBuffIcon )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
    return AtlasManager__SetSBuffIconByIconId(sprite, buffIconId, 0);
  }
  else
  {
    v10 = buffIconId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v10);
    v9 = System_String__Format((System_String_o *)StringLiteral_18410/*"bufficon_{0}"*/, v8, 0);
    return EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, v9, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassiveSkillGivenItemComponent__SetServant(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  ServantLimitImageMaster_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t ServantLimitCountSealAfter; // w21
  int32_t ImageLimitCount; // w0
  __int64 v13; // x1
  UISprite_o *servantIconSprite; // x21
  int32_t v15; // w20
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971D26 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971D26 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    v8 = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          (int64_t)v8[2].fields.list[1].monitor,
          svtId,
          0) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  v8 = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !entity || !v8 )
LABEL_23:
    sub_2213CDC(v8, v6);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v8,
                                 svtId,
                                 entity->fields.maxLimitCount,
                                 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, ServantLimitCountSealAfter, 0);
  servantIconSprite = this->fields.servantIconSprite;
  v15 = ImageLimitCount;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__SetFaceImage(servantIconSprite, svtId, v15, 1, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassiveSkillGivenItemComponent__SetSkill(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buffIconSprite; // x21
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Int32_array *SkillList; // x0
  int32_t v10; // w0
  int32_t v11; // w0
  const MethodInfo *v12; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971D27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D27 = 1;
  }
  buffIconSprite = (UnityEngine_Object_o *)this->fields.buffIconSprite;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&skillId);
  if ( !UnityEngine_Object__op_Equality(buffIconSprite, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_15;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            this->fields.itemId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return;
    Master_object = entity;
    if ( !entity )
      goto LABEL_15;
    if ( !ItemEntity__GetSkillList((ItemEntity_o *)entity, 0) )
      return;
    Master_object = entity;
    if ( !entity )
LABEL_15:
      sub_2213CDC(Master_object, v8);
    SkillList = ItemEntity__GetSkillList((ItemEntity_o *)entity, 0);
    v10 = System_Array__IndexOf_int_(SkillList, skillId, (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
    v11 = BasicHelper__IndexValue_int_(
            this->fields.buffIconIds,
            v10,
            -1,
            (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
    EventInfoPassiveSkillGivenItemComponent__SetBuffIcon(this, this->fields.buffIconSprite, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassiveSkillGivenItemComponent__SetTerminalTouchEnable(
        EventInfoPassiveSkillGivenItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  int v6; // w9
  TerminalSceneComponent_c *v7; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v9; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_5971D25 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5971D25 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  v6 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
  this->fields.isBusy = !enable;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, enable);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_2213CDC(genericContainerHandle, v9);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_c *v14; // x0
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  __int64 v16; // x1
  struct EventInfoPassiveSkillGivenItemComponent_o *_4__this; // x8
  struct EventItemUsedInfo_o *eventItemUsedInfo; // x9

  if ( (byte_5971D2B & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_EventChangePassiveSkillRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1__CreateEventInfoPassiveSkillChangeDialog_b__2__);
    sub_2213A60(&EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_TypeInfo);
    byte_5971D2B = 1;
  }
  v5 = sub_2213CCC(EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = NetworkManager_ResultCallbackFunc_TypeInfo;
  *(_DWORD *)(v5 + 16) = skillId;
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(v14);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventInfoPassiveSkillGivenItemComponent___c__DisplayClass15_1__CreateEventInfoPassiveSkillChangeDialog_b__2__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  Request_object = NetworkManager__getRequest_object_(
                     v15,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventChangePassiveSkillRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (eventItemUsedInfo = this->fields.eventItemUsedInfo) == 0 || !Request_object )
LABEL_10:
    sub_2213CDC(Request_object, v7);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, result);
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
    sub_2213CDC(this, method);
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

  if ( (byte_5971D2C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D2C = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (EventInfoPassiveSkillGivenItemComponent_o *)UnityEngine_Object__op_Equality(_4__this, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    eventItemUsedInfo = this->fields.eventItemUsedInfo;
    if ( !eventItemUsedInfo || (v4 = this->fields.__4__this) == 0 )
      sub_2213CDC(v4, v5);
    EventInfoPassiveSkillGivenItemComponent__SetSkill(v4, eventItemUsedInfo->fields.skillId, v6);
  }
}