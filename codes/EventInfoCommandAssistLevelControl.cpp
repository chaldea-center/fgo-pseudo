void EventInfoCommandAssistLevelControl___ctor(EventInfoCommandAssistLevelControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoCommandAssistLevelControl__Initialization(
        EventInfoCommandAssistLevelControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v19; // x21

  if ( (byte_4D30C73 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__);
    byte_4D30C73 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = (struct EventCommandAssistMaster_o *)Master_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventCommandAssistMst,
    (int32_t)Master_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.eventUiEntity = entity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v12, v13, v14, v15, v16, v17);
  eventUiEntity = this->fields.eventUiEntity;
  v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v19, 0);
}


void EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v8; // x19
  int32_t eventId; // w20
  Il2CppObject *v10; // x22
  System_Action_o *v11; // x21

  if ( (byte_4D30C76 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30C76 = 1;
  }
  v3 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v8 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
          System_Action___ctor(v11, v10, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0),
          !v8) )
    {
      sub_1C93D2C(Instance, v6);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v8, eventId, v11, 0);
  }
}


void EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C93D2C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoCommandAssistLevelControl__PlayAnim(
        EventInfoCommandAssistLevelControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  EventInfoCommandAssistLevelComponent_o *Item; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x22
  int max_length; // w8
  unsigned int v17; // w23
  int *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int v23; // w24
  System_Action_o *v24; // x22
  int32_t v25; // w23
  int v26; // w29
  __int64 v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_Component_o **v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Action_o *v41; // x1
  System_Action_o *v42; // x27
  System_Action_o **v43; // x26
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UnityEngine_Object_o *v50; // x27
  const MethodInfo *v51; // x2
  UnityEngine_Component_o *v52; // x8
  System_Action_o *v53; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x27
  System_Action_o *v56; // x25
  System_Action_o *v57; // x25
  System_Action_o *v58; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7

  if ( (byte_4D30C75 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__);
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__);
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__);
    sub_1C93AD4(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
    byte_4D30C75 = 1;
  }
  if ( type == 1 )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          sub_1C93D34(Item);
        v8 = (Il2CppObject *)assistCompnentList->m_Items[v17];
        if ( !v8 )
          break;
        monitor = (int *)v8[3].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v20 = Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v8,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_19;
      }
LABEL_47:
      sub_1C93D2C(Item, v8);
    }
LABEL_19:
    if ( !v6 )
      goto LABEL_47;
    v23 = v6->fields._size;
    if ( v23 >= 1 )
    {
      v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0);
      v25 = 0;
      v26 = -v23;
      while ( 1 )
      {
        v27 = sub_1C93D20(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v27, 0);
        Item = (EventInfoCommandAssistLevelComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                           v6,
                                                           v25,
                                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
        if ( !v27 )
          goto LABEL_47;
        *(_QWORD *)(v27 + 24) = Item;
        v34 = (UnityEngine_Component_o **)(v27 + 24);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 24), (int32_t)Item, v28, v29, v30, v31, v32, v33);
        if ( v26 + v25 == -1 )
          v41 = v24;
        else
          v41 = 0;
        *(_QWORD *)(v27 + 16) = v41;
        if ( v26 + v25 == -1 )
          v42 = callback;
        else
          v42 = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 16), (int32_t)v41, v35, v36, v37, v38, v39, v40);
        *(_QWORD *)(v27 + 32) = v42;
        v43 = (System_Action_o **)(v27 + 32);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 32), (int32_t)v42, v44, v45, v46, v47, v48, v49);
        v50 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Item = (EventInfoCommandAssistLevelComponent_o *)UnityEngine_Object__op_Equality(v50, 0, 0);
        v52 = *v34;
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          if ( !v52 )
            goto LABEL_47;
          v53 = *v43;
          Item = (EventInfoCommandAssistLevelComponent_o *)*v34;
        }
        else
        {
          if ( !v52 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v34, 0);
          GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v50, gameObject, 0);
          if ( !v50 )
            goto LABEL_47;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v50,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          {
            v56 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v56,
              (Il2CppObject *)v27,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0);
            if ( !Component_object )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v56, 0);
            v57 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v57,
              (Il2CppObject *)v27,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0);
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v57, 0);
            v58 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v58,
              (Il2CppObject *)v27,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0);
            Component_object[2].monitor = v58;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&Component_object[2].monitor,
              (int32_t)v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            goto LABEL_44;
          }
          Item = (EventInfoCommandAssistLevelComponent_o *)*v34;
          if ( !*v34 )
            goto LABEL_47;
          v53 = *v43;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp(Item, v53, v51);
LABEL_44:
        ++v25;
        if ( !(v26 + v25) )
          return;
      }
    }
  }
  ActionExtensions__Call(callback, 0);
}


void EventInfoCommandAssistLevelControl__Redisplay(
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
LABEL_21:
    sub_1C93D2C(this, method);
  v3 = this;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
    v8 = assistCompnentList->m_Items[v4];
    if ( !v8 )
      goto LABEL_21;
    assistData = v8->fields.assistData;
    if ( assistData )
    {
      eventUiEntity = v3->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_21;
      this = (EventInfoCommandAssistLevelControl_o *)v3->fields.eventCommandAssistMst;
      if ( !this )
        goto LABEL_21;
      this = (EventInfoCommandAssistLevelControl_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                       (EventCommandAssistMaster_o *)this,
                                                       eventUiEntity->fields.eventId,
                                                       assistData->fields.assistId,
                                                       -1,
                                                       0,
                                                       0);
      if ( this )
        v5 = assistData;
      else
        v6 = assistData;
      if ( this )
      {
        if ( !v5 )
          goto LABEL_21;
        v5->fields.lv = this->fields.playType;
        assetData = (int32_t)this->fields.assetData;
      }
      else
      {
        if ( !v6 )
          goto LABEL_21;
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
      goto LABEL_21;
  }
}


void EventInfoCommandAssistLevelControl__SetSprite(
        EventInfoCommandAssistLevelControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, spriteName, 0);
}


void EventInfoCommandAssistLevelControl__Setup(
        EventInfoCommandAssistLevelControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventCommandAssistMaster_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventCommandAssistMaster_o *v9; // x20
  __int64 v10; // x26
  __int64 v11; // x27
  __int64 v12; // x28
  int32_t *p_revision; // x29
  __int64 v14; // x22
  int32_t v15; // w23
  struct EventUiEntity_o *v16; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int v19; // w8
  struct EventUiEntity_o *v20; // x8
  const MethodInfo *v21; // x3
  int lookup; // w8
  struct EventInfoCommandAssistLevelComponent_array *v23; // x8

  if ( (byte_4D30C74 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D30C74 = 1;
  }
  if ( entitys )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      this->fields.titleSpriteName,
      0);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.titleSprite;
    if ( !titleSprite )
      goto LABEL_41;
    (*(void (__fastcall **)(EventCommandAssistMaster_o *, _QWORD))&titleSprite->klass[1]._2.element_size)(
      titleSprite,
      *(_QWORD *)&titleSprite->klass[1]._2.static_fields_size);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.bgSprite,
      this->fields.bgSpriteName,
      0);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.bgSprite;
    if ( !titleSprite )
      goto LABEL_41;
    (*(void (__fastcall **)(EventCommandAssistMaster_o *, _QWORD))&titleSprite->klass[1]._2.element_size)(
      titleSprite,
      *(_QWORD *)&titleSprite->klass[1]._2.static_fields_size);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.detailDialogButtonSprite,
      this->fields.buttonSpriteName,
      0);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.detailDialogButtonSprite;
    if ( !titleSprite
      || (titleSprite = (EventCommandAssistMaster_o *)(*(__int64 (__fastcall **)(EventCommandAssistMaster_o *, _QWORD))&titleSprite->klass[1]._2.element_size)(
                                                        titleSprite,
                                                        *(_QWORD *)&titleSprite->klass[1]._2.static_fields_size),
          (eventUiEntity = this->fields.eventUiEntity) == 0)
      || (titleSprite = this->fields.eventCommandAssistMst) == 0
      || (titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                        titleSprite,
                                                        eventUiEntity->fields.eventId,
                                                        0),
          (assistCompnentList = this->fields.assistCompnentList) == 0) )
    {
LABEL_41:
      sub_1C93D2C(titleSprite, v5);
    }
    v9 = titleSprite;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    p_revision = &titleSprite->fields.revision;
    while ( (int)v10 < SLODWORD(assistCompnentList->max_length) )
    {
      if ( !v9 )
        goto LABEL_41;
      if ( (int)v10 >= SLODWORD(v9->fields._MasterName_k__BackingField) )
        break;
      v14 = sub_1C93D20(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( (unsigned int)v10 >= LODWORD(v9->fields._MasterName_k__BackingField) )
        goto LABEL_43;
      if ( v14 )
      {
        v15 = p_revision[v10];
        *(_DWORD *)(v14 + 16) = v15;
        v16 = this->fields.eventUiEntity;
        if ( v16 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v16->fields.eventId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D30C95 )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D30C95 = 1;
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
                                                          v15,
                                                          titleSprite[2].fields._MasterName_k__BackingField[23].fields._stringLength,
                                                          0,
                                                          0);
            v19 = titleSprite ? LODWORD(titleSprite->fields.list) : 0;
            *(_DWORD *)(v14 + 24) = v19;
            v20 = this->fields.eventUiEntity;
            if ( v20 )
            {
              titleSprite = this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                              titleSprite,
                                                              v20->fields.eventId,
                                                              *(_DWORD *)(v14 + 16),
                                                              -1,
                                                              0,
                                                              0);
                if ( titleSprite )
                  v11 = v14;
                else
                  v12 = v14;
                if ( titleSprite )
                {
                  if ( !v11 )
                    goto LABEL_41;
                  *(_DWORD *)(v11 + 20) = titleSprite->fields.list;
                  lookup = (int)titleSprite->fields._lookup;
                }
                else
                {
                  if ( !v12 )
                    goto LABEL_41;
                  lookup = 0;
                  *(_DWORD *)(v12 + 20) = 0;
                }
                *(_DWORD *)(v14 + 28) = lookup;
                v23 = this->fields.assistCompnentList;
                if ( v23 )
                {
                  if ( (unsigned int)v10 >= LODWORD(v23->max_length) )
LABEL_43:
                    sub_1C93D34(titleSprite);
                  titleSprite = (EventCommandAssistMaster_o *)v23->m_Items[v10];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(
                      (EventInfoCommandAssistLevelComponent_o *)titleSprite,
                      this,
                      (EventInfoCommandAssistLevelComponent_AssistData_o *)v14,
                      v21);
                    assistCompnentList = this->fields.assistCompnentList;
                    ++v10;
                    if ( assistCompnentList )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_41;
    }
  }
}


void EventInfoCommandAssistLevelControl___Initialization_b__13_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C93D2C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4D30C77 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    byte_4D30C77 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySe(v4, this->fields.seName, 0, 0);
  }
}


void EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__1(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startAction, 0);
}


void EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__2(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_1C93D2C(0, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
    EventInfoCommandAssistLevelComponent__SetupIcon(assistComponent, assistData->fields.lv, v2);
}


void EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  int32_t lv; // w1

  if ( (byte_4D30C78 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D30C78 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2DDE3 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DDE3 = 1;
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
    sub_1C93D2C(0, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(assistComponent, lv, v2);
  }
  ActionExtensions__Call(this->fields.endAction, 0);
}