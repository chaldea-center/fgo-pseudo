void __fastcall EventInfoCommandAssistLevelControl___ctor(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__Initialization(
        EventInfoCommandAssistLevelControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v22; // x21

  if ( (byte_4C2277B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, entity);
    sub_1C3B764(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__, v7);
    byte_4C2277B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = (struct EventCommandAssistMaster_o *)Master_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventCommandAssistMst,
    (int64_t)Master_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.eventUiEntity = entity;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventUiEntity, (int64_t)entity, v15, v16, v17, v18, v19, v20);
  eventUiEntity = this->fields.eventUiEntity;
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v22, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v11; // x19
  int32_t eventId; // w20
  Il2CppObject *v13; // x22
  System_Action_o *v14; // x21

  if ( (byte_4C2277E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C2277E = 1;
  }
  v6 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v11 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
          System_Action___ctor(v14, v13, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v11) )
    {
      sub_1C3B9C0(Instance, v9);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v11, eventId, v14, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3B9C0(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandAssistLevelControl__PlayAnim(
        EventInfoCommandAssistLevelControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t Item; // x0
  Il2CppObject *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x22
  int max_length; // w8
  unsigned int v29; // w23
  int *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int v35; // w24
  System_Action_o *v36; // x22
  int32_t v37; // w23
  int v38; // w29
  __int64 v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UnityEngine_Component_o **v46; // x25
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  System_Action_o *v54; // x27
  System_Action_o **v55; // x26
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  UnityEngine_Object_o *v62; // x27
  const MethodInfo *v63; // x2
  UnityEngine_Component_o *v64; // x8
  System_Action_o *v65; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x27
  System_Action_o *v68; // x25
  System_Action_o *v69; // x25
  System_Action_o *v70; // x25
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4C2277D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__, v11);
    sub_1C3B764(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__, v14);
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__, v15);
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__, v16);
    sub_1C3B764(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v17);
    byte_4C2277D = 1;
  }
  if ( type == 1 )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= max_length )
          sub_1C3B9C8(Item, v20);
        v20 = (Il2CppObject *)assistCompnentList->m_Items[v29];
        if ( !v20 )
          break;
        monitor = (int *)v20[3].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v32 = Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v20,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v20;
            sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
          }
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_19;
      }
LABEL_47:
      sub_1C3B9C0(Item, v20);
    }
LABEL_19:
    if ( !v18 )
      goto LABEL_47;
    v35 = v18->fields._size;
    if ( v35 >= 1 )
    {
      v36 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v37 = 0;
      v38 = -v35;
      while ( 1 )
      {
        v39 = sub_1C3B9B0(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v39, 0LL);
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v18,
                          v37,
                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
        if ( !v39 )
          goto LABEL_47;
        *(_QWORD *)(v39 + 24) = Item;
        v46 = (UnityEngine_Component_o **)(v39 + 24);
        sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 24), Item, v40, v41, v42, v43, v44, v45);
        if ( v38 + v37 == -1 )
          v53 = (int64_t)v36;
        else
          v53 = 0LL;
        *(_QWORD *)(v39 + 16) = v53;
        if ( v38 + v37 == -1 )
          v54 = callback;
        else
          v54 = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 16), v53, v47, v48, v49, v50, v51, v52);
        *(_QWORD *)(v39 + 32) = v54;
        v55 = (System_Action_o **)(v39 + 32);
        sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v54, v56, v57, v58, v59, v60, v61);
        v62 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Item = UnityEngine_Object__op_Equality(v62, 0LL, 0LL);
        v64 = *v46;
        if ( (Item & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_47;
          v65 = *v55;
          Item = (int64_t)*v46;
        }
        else
        {
          if ( !v64 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v46, 0LL);
          GameObjectExtensions__SafeSetParent_34969340((UnityEngine_GameObject_o *)v62, gameObject, 0LL);
          if ( !v62 )
            goto LABEL_47;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v62,
                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            v68 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              v68,
              (Il2CppObject *)v39,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_object )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v68, 0LL);
            v69 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              v69,
              (Il2CppObject *)v39,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v69, 0LL);
            v70 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              v70,
              (Il2CppObject *)v39,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            Component_object[2].monitor = v70;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&Component_object[2].monitor,
              (int64_t)v70,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
            goto LABEL_44;
          }
          Item = (int64_t)*v46;
          if ( !*v46 )
            goto LABEL_47;
          v65 = *v55;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp((EventInfoCommandAssistLevelComponent_o *)Item, v65, v63);
LABEL_44:
        ++v37;
        if ( !(v38 + v37) )
          return;
      }
    }
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__Redisplay(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventInfoCommandAssistLevelControl_o *v3; // x19
  __int64 v4; // x21
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v5; // x22
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v6; // x23
  int max_length; // w9
  EventInfoCommandAssistLevelComponent_o *v8; // x20
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x24
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v11; // x2
  int32_t assetData; // w8
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v13; // x8
  const MethodInfo *v14; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v15; // x8
  int32_t lv; // w1

  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
LABEL_22:
    sub_1C3B9C0(this, method);
  v3 = this;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C3B9C8(this, method);
    v8 = assistCompnentList->m_Items[v4];
    if ( !v8 )
      goto LABEL_22;
    assistData = v8->fields.assistData;
    if ( assistData )
    {
      eventUiEntity = v3->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_22;
      this = (EventInfoCommandAssistLevelControl_o *)v3->fields.eventCommandAssistMst;
      if ( !this )
        goto LABEL_22;
      this = (EventInfoCommandAssistLevelControl_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                       (EventCommandAssistMaster_o *)this,
                                                       eventUiEntity->fields.eventId,
                                                       assistData->fields.assistId,
                                                       -1,
                                                       0,
                                                       0LL);
      if ( !this )
        v6 = assistData;
      if ( this )
        v5 = assistData;
      if ( this )
      {
        if ( !v5 )
          goto LABEL_22;
        v5->fields.lv = this->fields.playType;
        assetData = (int32_t)this->fields.assetData;
      }
      else
      {
        if ( !v6 )
          goto LABEL_22;
        assetData = 0;
        v6->fields.lv = 0;
      }
      assistData->fields.imageId = assetData;
      v13 = v8->fields.assistData;
      if ( v13 )
      {
        EventInfoCommandAssistLevelComponent__SetupIcon(v8, v13->fields.lv, v11);
        v15 = v8->fields.assistData;
        if ( v15 )
        {
          lv = v15->fields.lv;
          v15->fields.oldLv = lv;
          EventInfoCommandAssistLevelComponent__SetupLevel(v8, lv, v14);
        }
      }
    }
    assistCompnentList = v3->fields.assistCompnentList;
    ++v4;
    if ( !assistCompnentList )
      goto LABEL_22;
  }
}


void __fastcall EventInfoCommandAssistLevelControl__SetSprite(
        EventInfoCommandAssistLevelControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, spriteName, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__Setup(
        EventInfoCommandAssistLevelControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventCommandAssistMaster_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventCommandAssistMaster_o *v10; // x20
  __int64 v11; // x26
  __int64 v12; // x27
  __int64 v13; // x28
  int32_t *p_revision; // x29
  __int64 v15; // x22
  int32_t v16; // w23
  struct EventUiEntity_o *v17; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int v20; // w8
  struct EventUiEntity_o *v21; // x8
  const MethodInfo *v22; // x3
  int lookup; // w8
  struct EventInfoCommandAssistLevelComponent_array *v24; // x8

  if ( (byte_4C2277C & 1) == 0 )
  {
    sub_1C3B764(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, entitys);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C2277C = 1;
  }
  if ( entitys )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      this->fields.titleSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.titleSprite;
    if ( !titleSprite )
      goto LABEL_42;
    (*(void (__fastcall **)(EventCommandAssistMaster_o *, _QWORD))&titleSprite->klass[1]._2.thread_static_fields_offset)(
      titleSprite,
      *(_QWORD *)&titleSprite->klass[1]._2.token);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.bgSprite,
      this->fields.bgSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.bgSprite;
    if ( !titleSprite )
      goto LABEL_42;
    (*(void (__fastcall **)(EventCommandAssistMaster_o *, _QWORD))&titleSprite->klass[1]._2.thread_static_fields_offset)(
      titleSprite,
      *(_QWORD *)&titleSprite->klass[1]._2.token);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.detailDialogButtonSprite,
      this->fields.buttonSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.detailDialogButtonSprite;
    if ( !titleSprite
      || (titleSprite = (EventCommandAssistMaster_o *)(*(__int64 (__fastcall **)(EventCommandAssistMaster_o *, _QWORD))&titleSprite->klass[1]._2.thread_static_fields_offset)(
                                                        titleSprite,
                                                        *(_QWORD *)&titleSprite->klass[1]._2.token),
          (eventUiEntity = this->fields.eventUiEntity) == 0LL)
      || (titleSprite = this->fields.eventCommandAssistMst) == 0LL
      || (titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                        titleSprite,
                                                        eventUiEntity->fields.eventId,
                                                        0LL),
          (assistCompnentList = this->fields.assistCompnentList) == 0LL) )
    {
LABEL_42:
      sub_1C3B9C0(titleSprite, v6);
    }
    v10 = titleSprite;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    p_revision = &titleSprite->fields.revision;
    while ( (int)v11 < (signed int)assistCompnentList->max_length )
    {
      if ( !v10 )
        goto LABEL_42;
      if ( (int)v11 >= SLODWORD(v10->fields._MasterName_k__BackingField) )
        break;
      v15 = sub_1C3B9B0(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( (unsigned int)v11 >= LODWORD(v10->fields._MasterName_k__BackingField) )
        goto LABEL_44;
      if ( v15 )
      {
        v16 = p_revision[v11];
        *(_DWORD *)(v15 + 16) = v16;
        v17 = this->fields.eventUiEntity;
        if ( v17 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v17->fields.eventId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C227C9 )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
            byte_4C227C9 = 1;
          }
          titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          }
          if ( eventCommandAssistMst )
          {
            titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                          eventCommandAssistMst,
                                                          eventId,
                                                          v16,
                                                          titleSprite[2].fields._MasterName_k__BackingField[22].fields._stringLength,
                                                          0,
                                                          0LL);
            v20 = titleSprite ? LODWORD(titleSprite->fields.list) : 0;
            *(_DWORD *)(v15 + 24) = v20;
            v21 = this->fields.eventUiEntity;
            if ( v21 )
            {
              titleSprite = this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                              titleSprite,
                                                              v21->fields.eventId,
                                                              *(_DWORD *)(v15 + 16),
                                                              -1,
                                                              0,
                                                              0LL);
                if ( !titleSprite )
                  v13 = v15;
                if ( titleSprite )
                  v12 = v15;
                if ( titleSprite )
                {
                  if ( !v12 )
                    goto LABEL_42;
                  *(_DWORD *)(v12 + 20) = titleSprite->fields.list;
                  lookup = (int)titleSprite->fields._lookup;
                }
                else
                {
                  if ( !v13 )
                    goto LABEL_42;
                  lookup = 0;
                  *(_DWORD *)(v13 + 20) = 0;
                }
                *(_DWORD *)(v15 + 28) = lookup;
                v24 = this->fields.assistCompnentList;
                if ( v24 )
                {
                  if ( (unsigned int)v11 >= v24->max_length )
LABEL_44:
                    sub_1C3B9C8(titleSprite, v6);
                  titleSprite = (EventCommandAssistMaster_o *)v24->m_Items[v11];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(
                      (EventInfoCommandAssistLevelComponent_o *)titleSprite,
                      this,
                      (EventInfoCommandAssistLevelComponent_AssistData_o *)v15,
                      v22);
                    assistCompnentList = this->fields.assistCompnentList;
                    ++v11;
                    if ( assistCompnentList )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_42;
    }
  }
}


void __fastcall EventInfoCommandAssistLevelControl___Initialization_b__13_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3B9C0(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2277F & 1) == 0 )
  {
    sub_1C3B764(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, method);
    byte_4C2277F = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySe(v4, this->fields.seName, 0, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__1(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startAction, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__2(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_1C3B9C0(0LL, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
    EventInfoCommandAssistLevelComponent__SetupIcon(assistComponent, assistData->fields.lv, v2);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  int32_t lv; // w1

  if ( (byte_4C22780 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C22780 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4E2 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F4E2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_1C3B9C0(0LL, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(assistComponent, lv, v2);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}