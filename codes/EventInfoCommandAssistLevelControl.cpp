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
  Il2CppObject *Master_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v11; // x21

  if ( (byte_4A5BAE4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__);
    byte_4A5BAE4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = (struct EventCommandAssistMaster_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventCommandAssistMst, (int32_t)Master_object, v6, v7);
  this->fields.eventUiEntity = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v8, v9);
  eventUiEntity = this->fields.eventUiEntity;
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v11, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
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

  if ( (byte_4A5BAE7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5BAE7 = 1;
  }
  v3 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v8 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(v11, v10, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v8) )
    {
      sub_1B8880C(Instance, v6);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v8, eventId, v11, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B8880C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__PlayAnim(
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
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x22
  int max_length; // w8
  unsigned int v13; // w23
  int *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  int v19; // w24
  System_Action_o *v20; // x22
  int32_t v21; // w23
  int v22; // w29
  __int64 v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Component_o **v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_Action_o *v29; // x1
  System_Action_o *v30; // x27
  System_Action_o **v31; // x26
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *v34; // x27
  const MethodInfo *v35; // x2
  UnityEngine_Component_o *v36; // x8
  System_Action_o *v37; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x27
  System_Action_o *v40; // x25
  System_Action_o *v41; // x25
  System_Action_o *v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_4A5BAE6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__);
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__);
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__);
    sub_1B885B0(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
    byte_4A5BAE6 = 1;
  }
  if ( type == 1 )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1B88814(Item, v8);
        v8 = (Il2CppObject *)assistCompnentList->m_Items[v13];
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
          v16 = Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v8,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v8, v9, v10);
          }
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_19;
      }
LABEL_47:
      sub_1B8880C(Item, v8);
    }
LABEL_19:
    if ( !v6 )
      goto LABEL_47;
    v19 = v6->fields._size;
    if ( v19 >= 1 )
    {
      v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v21 = 0;
      v22 = -v19;
      while ( 1 )
      {
        v23 = sub_1B887FC(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v23, 0LL);
        Item = (EventInfoCommandAssistLevelComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                           v6,
                                                           v21,
                                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
        if ( !v23 )
          goto LABEL_47;
        *(_QWORD *)(v23 + 24) = Item;
        v26 = (UnityEngine_Component_o **)(v23 + 24);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)Item, v24, v25);
        if ( v22 + v21 == -1 )
          v29 = v20;
        else
          v29 = 0LL;
        *(_QWORD *)(v23 + 16) = v29;
        if ( v22 + v21 == -1 )
          v30 = callback;
        else
          v30 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)v29, v27, v28);
        *(_QWORD *)(v23 + 32) = v30;
        v31 = (System_Action_o **)(v23 + 32);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v30, v32, v33);
        v34 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Item = (EventInfoCommandAssistLevelComponent_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
        v36 = *v26;
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_47;
          v37 = *v31;
          Item = (EventInfoCommandAssistLevelComponent_o *)*v26;
        }
        else
        {
          if ( !v36 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v26, 0LL);
          GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v34, gameObject, 0LL);
          if ( !v34 )
            goto LABEL_47;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v34,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v40,
              (Il2CppObject *)v23,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_object )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v40, 0LL);
            v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v41,
              (Il2CppObject *)v23,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v41, 0LL);
            v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v42,
              (Il2CppObject *)v23,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            Component_object[2].monitor = v42;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v42, v43, v44);
            goto LABEL_44;
          }
          Item = (EventInfoCommandAssistLevelComponent_o *)*v26;
          if ( !*v26 )
            goto LABEL_47;
          v37 = *v31;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp(Item, v37, v35);
LABEL_44:
        ++v21;
        if ( !(v22 + v21) )
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
    sub_1B8880C(this, method);
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
      sub_1B88814(this, method);
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
  EventCommandAssistMaster_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventCommandAssistMaster_o *v9; // x20
  __int64 v10; // x26
  __int64 v11; // x27
  __int64 v12; // x28
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x29
  __int64 v14; // x22
  int32_t v15; // w23
  struct EventUiEntity_o *v16; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int v19; // w8
  struct EventUiEntity_o *v20; // x8
  const MethodInfo *v21; // x3
  int seriazlier; // w8
  struct EventInfoCommandAssistLevelComponent_array *v23; // x8

  if ( (byte_4A5BAE5 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5BAE5 = 1;
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
    ((void (__fastcall *)(EventCommandAssistMaster_o *, Il2CppMethodPointer))titleSprite->klass[1].vtable._5_ForForceDerived.method)(
      titleSprite,
      titleSprite->klass[1].vtable._6_preProcess.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.bgSprite,
      this->fields.bgSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.bgSprite;
    if ( !titleSprite )
      goto LABEL_42;
    ((void (__fastcall *)(EventCommandAssistMaster_o *, Il2CppMethodPointer))titleSprite->klass[1].vtable._5_ForForceDerived.method)(
      titleSprite,
      titleSprite->klass[1].vtable._6_preProcess.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.detailDialogButtonSprite,
      this->fields.buttonSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.detailDialogButtonSprite;
    if ( !titleSprite
      || (titleSprite = (EventCommandAssistMaster_o *)((__int64 (__fastcall *)(EventCommandAssistMaster_o *, Il2CppMethodPointer))titleSprite->klass[1].vtable._5_ForForceDerived.method)(
                                                        titleSprite,
                                                        titleSprite->klass[1].vtable._6_preProcess.methodPtr),
          (eventUiEntity = this->fields.eventUiEntity) == 0LL)
      || (titleSprite = this->fields.eventCommandAssistMst) == 0LL
      || (titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                        titleSprite,
                                                        eventUiEntity->fields.eventId,
                                                        0LL),
          (assistCompnentList = this->fields.assistCompnentList) == 0LL) )
    {
LABEL_42:
      sub_1B8880C(titleSprite, v5);
    }
    v9 = titleSprite;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    p_list = &titleSprite->fields.list;
    while ( (int)v10 < (signed int)assistCompnentList->max_length )
    {
      if ( !v9 )
        goto LABEL_42;
      if ( (int)v10 >= SLODWORD(v9->fields._MasterName_k__BackingField) )
        break;
      v14 = sub_1B887FC(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      if ( (unsigned int)v10 >= LODWORD(v9->fields._MasterName_k__BackingField) )
        goto LABEL_44;
      if ( v14 )
      {
        v15 = *((_DWORD *)p_list + v10);
        *(_DWORD *)(v14 + 16) = v15;
        v16 = this->fields.eventUiEntity;
        if ( v16 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v16->fields.eventId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A5BB37 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A5BB37 = 1;
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
                                                          titleSprite[2].fields._MasterName_k__BackingField[22].fields._stringLength,
                                                          0,
                                                          0LL);
            v19 = titleSprite ? LODWORD(titleSprite->fields._lookup) : 0;
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
                                                              0LL);
                if ( !titleSprite )
                  v12 = v14;
                if ( titleSprite )
                  v11 = v14;
                if ( titleSprite )
                {
                  if ( !v11 )
                    goto LABEL_42;
                  *(_DWORD *)(v11 + 20) = titleSprite->fields._lookup;
                  seriazlier = (int)titleSprite->fields.seriazlier;
                }
                else
                {
                  if ( !v12 )
                    goto LABEL_42;
                  seriazlier = 0;
                  *(_DWORD *)(v12 + 20) = 0;
                }
                *(_DWORD *)(v14 + 28) = seriazlier;
                v23 = this->fields.assistCompnentList;
                if ( v23 )
                {
                  if ( (unsigned int)v10 >= v23->max_length )
LABEL_44:
                    sub_1B88814(titleSprite, v5);
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
    sub_1B8880C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A5BAE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    byte_4A5BAE8 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySe(v4, this->fields.seName, 0LL);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5BAE9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5BAE9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588D5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D5 = 1;
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
    sub_1B8880C(0LL, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(assistComponent, lv, v2);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}