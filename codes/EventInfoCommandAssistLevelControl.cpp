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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v19; // x21

  if ( (byte_593875E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__);
    byte_593875E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = (struct EventCommandAssistMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventCommandAssistMst,
    (int32_t)Master_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.eventUiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  eventUiEntity = this->fields.eventUiEntity;
  v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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

  if ( (byte_5938761 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5938761 = 1;
  }
  v3 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v8 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v11, v10, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0),
          !v8) )
    {
      sub_21FFECC(Instance, v6);
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
    sub_21FFECC(this, method);
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
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x22
  int max_length; // w8
  unsigned int v17; // w24
  int *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int v23; // w24
  System_Action_o *v24; // x22
  int32_t v25; // w23
  int v26; // w28
  __int64 v27; // x24
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject **v34; // x25
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Action_o *v41; // x1
  System_Action_o *v42; // x27
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x27
  const MethodInfo *v51; // x2
  bool v52; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v54; // x1
  Il2CppObject *Component_object; // x27
  System_Action_o *v56; // x25
  System_Action_o *v57; // x25
  System_Action_o *v58; // x25
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7

  if ( (byte_5938760 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__);
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__);
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__);
    sub_21FFC50(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
    byte_5938760 = 1;
  }
  if ( type == 1 )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_46;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          sub_21FFED4(Item);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_19;
      }
LABEL_46:
      sub_21FFECC(Item, v8);
    }
LABEL_19:
    if ( !v6 )
      goto LABEL_46;
    v23 = v6->fields._size;
    if ( v23 >= 1 )
    {
      v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0);
      v25 = 0;
      v26 = -v23;
      while ( 1 )
      {
        v27 = sub_21FFEBC(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v27, 0);
        Item = System_Collections_Generic_List_object___get_Item(
                 v6,
                 v25,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
        if ( !v27 )
          goto LABEL_46;
        *(_QWORD *)(v27 + 24) = Item;
        v34 = (Il2CppObject **)(v27 + 24);
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 24), (int32_t)Item, v28, v29, v30, v31, v32, v33);
        if ( v26 + v25 == -1 )
          v41 = v24;
        else
          v41 = 0;
        *(_QWORD *)(v27 + 16) = v41;
        if ( v26 + v25 == -1 )
          v42 = callback;
        else
          v42 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 16), (int32_t)v41, v35, v36, v37, v38, v39, v40);
        *(_QWORD *)(v27 + 32) = v42;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 32), (int32_t)v42, v43, v44, v45, v46, v47, v48);
        v50 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
        v52 = UnityEngine_Object__op_Equality(v50, 0, 0);
        Item = *v34;
        if ( v52 )
        {
          if ( !Item )
            goto LABEL_46;
        }
        else
        {
          if ( !Item )
            goto LABEL_46;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v50, gameObject, 0);
          if ( !v50 )
            goto LABEL_46;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v50,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          {
            v56 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v56,
              (Il2CppObject *)v27,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0);
            if ( !Component_object )
              goto LABEL_46;
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v56, 0);
            v57 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v57,
              (Il2CppObject *)v27,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0);
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v57, 0);
            v58 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v58,
              (Il2CppObject *)v27,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0);
            Component_object[2].monitor = v58;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
              (int32_t)v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            goto LABEL_43;
          }
          Item = *v34;
          if ( !*v34 )
            goto LABEL_46;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp(
          (EventInfoCommandAssistLevelComponent_o *)Item,
          *(System_Action_o **)(v27 + 32),
          v51);
LABEL_43:
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
  unsigned int v4; // w21
  unsigned int max_length; // w9
  EventInfoCommandAssistLevelComponent_o *v6; // x20
  int32_t *assistData; // x22
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v9; // x2
  int32_t assetData; // w8
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v11; // x9
  const MethodInfo *v12; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v13; // x8
  int32_t lv; // w1

  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
LABEL_16:
    sub_21FFECC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
      sub_21FFED4(this);
    v6 = assistCompnentList->m_Items[v4];
    if ( !v6 )
      goto LABEL_16;
    assistData = (int32_t *)v6->fields.assistData;
    if ( assistData )
    {
      eventUiEntity = v3->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_16;
      this = (EventInfoCommandAssistLevelControl_o *)v3->fields.eventCommandAssistMst;
      if ( !this )
        goto LABEL_16;
      this = (EventInfoCommandAssistLevelControl_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                       (EventCommandAssistMaster_o *)this,
                                                       eventUiEntity->fields.eventId,
                                                       assistData[4],
                                                       -1,
                                                       0,
                                                       0);
      if ( this )
      {
        assetData = (int32_t)this->fields.assetData;
        assistData[5] = this->fields.playType;
      }
      else
      {
        assetData = 0;
        assistData[5] = 0;
      }
      v11 = v6->fields.assistData;
      assistData[7] = assetData;
      if ( v11 )
      {
        EventInfoCommandAssistLevelComponent__SetupIcon(v6, v11->fields.lv, v9);
        v13 = v6->fields.assistData;
        if ( v13 )
        {
          lv = v13->fields.lv;
          v13->fields.oldLv = lv;
          EventInfoCommandAssistLevelComponent__SetupLevel(v6, lv, v12);
        }
      }
    }
    assistCompnentList = v3->fields.assistCompnentList;
    ++v4;
    if ( !assistCompnentList )
      goto LABEL_16;
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
  unsigned int v10; // w26
  __int64 v11; // x22
  int32_t v12; // w23
  struct EventUiEntity_o *v13; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int v16; // w9
  struct EventUiEntity_o *v17; // x8
  const MethodInfo *v18; // x3
  int lookup; // w8
  struct EventInfoCommandAssistLevelComponent_array *v20; // x9

  if ( (byte_593875F & 1) == 0 )
  {
    sub_21FFC50(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593875F = 1;
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
      goto LABEL_36;
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
      goto LABEL_36;
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
LABEL_36:
      sub_21FFECC(titleSprite, v5);
    }
    v9 = titleSprite;
    v10 = 0;
    while ( (signed int)v10 < SLODWORD(assistCompnentList->max_length) )
    {
      if ( !v9 )
        goto LABEL_36;
      if ( (signed int)v10 >= SLODWORD(v9->fields._MasterName_k__BackingField) )
        break;
      v11 = sub_21FFEBC(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( v10 >= LODWORD(v9->fields._MasterName_k__BackingField) )
        goto LABEL_38;
      if ( v11 )
      {
        v12 = *(&v9->fields.revision + (int)v10);
        v13 = this->fields.eventUiEntity;
        *(_DWORD *)(v11 + 16) = v12;
        if ( v13 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v13->fields.eventId;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
          if ( !byte_5938764 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_5938764 = 1;
          }
          titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
            titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          }
          if ( eventCommandAssistMst )
          {
            titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                          eventCommandAssistMst,
                                                          eventId,
                                                          v12,
                                                          (int32_t)titleSprite[2].fields._MasterName_k__BackingField[24].monitor,
                                                          0,
                                                          0);
            v16 = titleSprite ? LODWORD(titleSprite->fields.list) : 0;
            v17 = this->fields.eventUiEntity;
            *(_DWORD *)(v11 + 24) = v16;
            if ( v17 )
            {
              titleSprite = this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                              titleSprite,
                                                              v17->fields.eventId,
                                                              *(_DWORD *)(v11 + 16),
                                                              -1,
                                                              0,
                                                              0);
                if ( titleSprite )
                {
                  lookup = (int)titleSprite->fields._lookup;
                  *(_DWORD *)(v11 + 20) = titleSprite->fields.list;
                }
                else
                {
                  lookup = 0;
                  *(_DWORD *)(v11 + 20) = 0;
                }
                v20 = this->fields.assistCompnentList;
                *(_DWORD *)(v11 + 28) = lookup;
                if ( v20 )
                {
                  if ( v10 >= LODWORD(v20->max_length) )
LABEL_38:
                    sub_21FFED4(titleSprite);
                  titleSprite = (EventCommandAssistMaster_o *)v20->m_Items[v10];
                  if ( titleSprite )
                  {
                    ++v10;
                    EventInfoCommandAssistLevelComponent__Setup(
                      (EventInfoCommandAssistLevelComponent_o *)titleSprite,
                      this,
                      (EventInfoCommandAssistLevelComponent_AssistData_o *)v11,
                      v18);
                    assistCompnentList = this->fields.assistCompnentList;
                    if ( assistCompnentList )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_36;
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
    sub_21FFECC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5938762 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    byte_5938762 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
    sub_21FFECC(0, method);
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
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  int32_t lv; // w1

  if ( (byte_5938763 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5938763 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5935A01 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935A01 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  assistComponent = this->fields.assistComponent;
  static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  if ( !assistComponent )
    sub_21FFECC(0, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(assistComponent, lv, v2);
  }
  ActionExtensions__Call(this->fields.endAction, 0);
}